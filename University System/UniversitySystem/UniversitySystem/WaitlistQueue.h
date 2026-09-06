#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

namespace UniversitySystem {

    public ref class Node {
    public:
        String^ studentID;
        String^ courseID;
        Node^ next;

        Node(String^ sID, String^ cID) {
            studentID = sID;
            courseID = cID;
            next = nullptr;
        }
    };


    public ref class WaitlistQueue {
    private:
        Node^ front;
        Node^ rear;
        String^ filename;

    public:
        WaitlistQueue(String^ file) {
            front = nullptr;
            rear = nullptr;
            filename = file;
            LoadFromFile();
        }

        void enqueue(String^ studentID, String^ courseID) {
            Node^ newNode = gcnew Node(studentID, courseID);

            if (front == nullptr) {
                front = rear = newNode;
            }
            else {
                rear->next = newNode;
                rear = newNode;
            }

            SaveToFile();
        }

        String^ dequeueByCourse(String^ courseID) {
            if (front == nullptr) return nullptr;

            Node^ current = front;
            Node^ prev = nullptr;

            while (current != nullptr) {
                if (current->courseID == courseID) {

                    if (prev == nullptr)
                        front = current->next;
                    else
                        prev->next = current->next;

                    if (current == rear)
                        rear = prev;

                    String^ result = current->studentID + "," + current->courseID;
                    delete current;
                    SaveToFile();
                    return result;
                }
                prev = current;
                current = current->next;
            }
            return nullptr;
        }


        void DisplayByCourse(DataGridView^ dgv, String^ courseID) {
            if (dgv->Columns->Count == 0) {
                dgv->Columns->Add("StudentID", "Student ID");
                dgv->Columns->Add("CourseID", "Course ID");
            }

            dgv->Rows->Clear();

            Node^ current = front;
            while (current != nullptr) {
                if (current->courseID == courseID) {
                    dgv->Rows->Add(current->studentID, current->courseID);
                }
                current = current->next;
            }

            dgv->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
        }



    private:

        void SaveToFile() {
            StreamWriter^ sw = gcnew StreamWriter(filename);
            Node^ current = front;

            while (current != nullptr) {
                sw->WriteLine(current->studentID + "," + current->courseID);
                current = current->next;
            }
            sw->Close();
        }

       
        void LoadFromFile() {
            if (!File::Exists(filename)) return;

            array<String^>^ lines = File::ReadAllLines(filename);

            for each(String ^ line in lines) {
                int index = line->IndexOf(',');
                if (index == -1) continue;

                String^ sID = line->Substring(0, index);
                String^ cID = line->Substring(index + 1);

                Node^ newNode = gcnew Node(sID, cID);

                if (front == nullptr)
                    front = rear = newNode;
                else {
                    rear->next = newNode;
                    rear = newNode;
                }
            }
        }
    };
}
