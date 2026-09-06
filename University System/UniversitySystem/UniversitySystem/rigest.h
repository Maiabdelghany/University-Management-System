#pragma once

using namespace System;
using namespace System::IO;

namespace UniversitySystem {

    ref class StackNode {
    public:
        String^ course;
        StackNode^ next;
        StackNode(String^ c) { course = c; next = nullptr; }
    };

    public ref class PrereqStack {
    private:
        StackNode^ top;

        void LoadPrerequisites(String^ courseID) {
           
            if (String::IsNullOrEmpty(courseID)) return;

            if (courseID->Equals("cs207", StringComparison::OrdinalIgnoreCase)) {
                Push("cs112");
                Push("cs102");
            }
            else if (courseID->Equals("cs209", StringComparison::OrdinalIgnoreCase)) {
                Push("cs207");
            }
            else if (courseID->Equals("Algorithms", StringComparison::OrdinalIgnoreCase)) {
                Push("Programming");
                Push("DS");
            }
            else if (courseID->Equals("AI", StringComparison::OrdinalIgnoreCase)) {
                Push("Algorithms");
            }
        }

        bool StudentPassed(int studentID, String^ courseID) {
            String^ filename = "university_data.txt";
            if (!File::Exists(filename)) return false;

            try {
                array<String^>^ lines = File::ReadAllLines(filename);
                for each (String ^ line in lines) {
                    array<String^>^ parts = line->Split(',');
                    if (parts->Length < 4) continue;

                    int id = Int32::Parse(parts[0]);
                    String^ cName = parts[1]->Trim();
                    float grade = Single::Parse(parts[3]);

                    if (id == studentID && cName->Equals(courseID, StringComparison::OrdinalIgnoreCase) && grade >= 50)
                        return true;
                }
            }
            catch (...) { return false; }
            return false;
        }

    public:
        PrereqStack() { top = nullptr; }
        bool IsEmpty() { return top == nullptr; }
        void Push(String^ c) {
            StackNode^ n = gcnew StackNode(c);
            n->next = top;
            top = n;
        }
        String^ Pop() {
            if (IsEmpty()) return nullptr;
            String^ v = top->course;
            top = top->next;
            return v;
        }
        String^ Peek() { return IsEmpty() ? nullptr : top->course; }

        String^ DisplayRemaining() {
            String^ r = "";
            StackNode^ t = top;
            while (t != nullptr) { r += "- " + t->course + "\n"; t = t->next; }
            return r;
        }

        bool validatePrerequisites(String^ courseID, int studentID, [Runtime::InteropServices::Out] String^% remaining) {
            top = nullptr;
            LoadPrerequisites(courseID);

            
            while (!IsEmpty() && StudentPassed(studentID, Peek())) {
                Pop();
            }

            if (IsEmpty()) { remaining = ""; return true; }
            else { remaining = DisplayRemaining(); return false; }
        }
    };
}