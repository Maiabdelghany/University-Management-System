#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

namespace UniversitySystem {

    public ref class HistoryNode {
    public:
        int studentID;
        String^ courseName;
        String^ semester;
        float grade;
        HistoryNode^ next;
        HistoryNode^ prev;

        HistoryNode(int sID, String^ cName, String^ sem, float g) {
            studentID = sID;
            courseName = cName;
            semester = sem;
            grade = g;
            next = nullptr;
            prev = nullptr;
        }
    };

    public ref class CourseHistoryDLL {
    private:
        HistoryNode^ head;
        HistoryNode^ tail;
        String^ filename;

    public:
        CourseHistoryDLL() {
            head = nullptr;
            tail = nullptr;
            filename = "university_data.txt";
            LoadFromFile();
        }

       
        bool IsStudentExists(int sID) {
            String^ studentsFile = "students.txt";
            if (!File::Exists(studentsFile)) return false;

            array<String^>^ lines = File::ReadAllLines(studentsFile);
            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 0) continue;

                int fileID;
                if (!Int32::TryParse(parts[0], fileID)) continue;

                if (fileID == sID)
                    return true;
            }
            return false;
        }

        
        bool IsDuplicate(int sID, String^ cName) {
            String^ courseNameTrimmed = cName->Trim();

            HistoryNode^ temp = head;
            while (temp != nullptr) {
                if (temp->studentID == sID &&
                    temp->courseName->Trim()->Equals(courseNameTrimmed, StringComparison::OrdinalIgnoreCase))
                    return true;
                temp = temp->next;
            }

            String^ coursesFile = "courses.txt";
            if (File::Exists(coursesFile)) {
                array<String^>^ lines = File::ReadAllLines(coursesFile);
                for each (String ^ line in lines) {
                    array<String^>^ parts = line->Split(',');
                    if (parts->Length < 2) continue;

                    int fileID;
                    if (!Int32::TryParse(parts[0], fileID)) continue;

                    String^ fileCourse = parts[1]->Trim();

                    if (fileID == sID && fileCourse->Equals(courseNameTrimmed, StringComparison::OrdinalIgnoreCase))
                        return true;
                }
            }

            return false;
        }



        void AddRecord(int sID, String^ cName, String^ sem, float g) {
            HistoryNode^ newNode = gcnew HistoryNode(sID, cName, sem, g);

            if (head == nullptr) {
                head = tail = newNode;
            }
            else {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }

            SaveToFile();

            
            StreamWriter^ sw = gcnew StreamWriter("courses.txt", true);
            sw->WriteLine("{0},{1},{2},{3}", sID, cName, sem, g);
            sw->Close();
        }

        void LoadFromFile() {
            if (!File::Exists(filename)) return;

            array<String^>^ lines = File::ReadAllLines(filename);
            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length != 4) continue;

                HistoryNode^ newNode = gcnew HistoryNode(
                    Int32::Parse(parts[0]),
                    parts[1],
                    parts[2],
                    Single::Parse(parts[3])
                );

                if (head == nullptr)
                    head = tail = newNode;
                else {
                    tail->next = newNode;
                    newNode->prev = tail;
                    tail = newNode;
                }
            }
        }

        void SaveToFile() {
            StreamWriter^ sw = gcnew StreamWriter(filename);
            HistoryNode^ temp = head;
            while (temp != nullptr) {
                sw->WriteLine("{0},{1},{2},{3}", temp->studentID, temp->courseName, temp->semester, temp->grade);
                temp = temp->next;
            }
            sw->Close();
        }

        HistoryNode^ GetStudentDataAsDLL(int sID) {
            HistoryNode^ searchHead = nullptr;
            HistoryNode^ searchTail = nullptr;

            HistoryNode^ temp = head;
            while (temp != nullptr) {
                if (temp->studentID == sID) {
                    HistoryNode^ newNode = gcnew HistoryNode(temp->studentID, temp->courseName, temp->semester, temp->grade);

                    if (searchHead == nullptr)
                        searchHead = searchTail = newNode;
                    else {
                        searchTail->next = newNode;
                        newNode->prev = searchTail;
                        searchTail = newNode;
                    }
                }
                temp = temp->next;
            }
            return searchHead;
        }
    };
}
