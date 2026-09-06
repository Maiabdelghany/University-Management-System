#pragma once
using namespace System;
using namespace System::IO;

namespace UniversitySystem {

    ref class StudentNode {
    public:
        int id;
        String^ name;
        String^ email;
        String^ address;
        String^ phone;
        String^ password;
        StudentNode^ next;

        StudentNode(int i, String^ n, String^ e,
            String^ a, String^ p, String^ pass) {
            id = i;
            name = n;
            email = e;
            address = a;
            phone = p;
            password = pass;
            next = nullptr;
        }
    };

    ref class SLL {
    private:
        StudentNode^ head;
        String^ filename = "students.txt";

    public:
        SLL() {
            head = nullptr;
            LoadFromFile();
        }

        StudentNode^ GetHead() {
            return head;
        }

        void Add(int id, String^ name, String^ email,
            String^ address, String^ phone, String^ password) {

            StudentNode^ newNode = gcnew StudentNode(id, name, email, address, phone, password);

            if (head == nullptr)
                head = newNode;
            else {
                StudentNode^ temp = head;
                while (temp->next != nullptr)
                    temp = temp->next;
                temp->next = newNode;
            }

            SaveToFile();
        }

        bool DeleteByAny(String^ idStr, String^ name, String^ email, String^ address, String^ phone, String^ password) {
            if (head == nullptr) return false;

            StudentNode^ prev = nullptr;
            StudentNode^ curr = head;

            while (curr != nullptr) {
                bool match = false;

                
                if (!String::IsNullOrWhiteSpace(idStr)) {
                    try {
                        int id = Int32::Parse(idStr);
                        if (curr->id == id) match = true;
                    }
                    catch (...) {}
                }

                if (!match && !String::IsNullOrWhiteSpace(name) && curr->name == name) match = true;
                if (!match && !String::IsNullOrWhiteSpace(email) && curr->email == email) match = true;
                if (!match && !String::IsNullOrWhiteSpace(address) && curr->address == address) match = true;
                if (!match && !String::IsNullOrWhiteSpace(phone) && curr->phone == phone) match = true;
                if (!match && !String::IsNullOrWhiteSpace(password) && curr->password == password) match = true;

                if (match) {
                    if (prev == nullptr) { 
                        head = curr->next;
                    }
                    else {
                        prev->next = curr->next;
                    }
                    SaveToFile();
                    return true;
                }

                prev = curr;
                curr = curr->next;
            }

            return false; 
        }



#pragma region FileHandling

        void SaveToFile() {
            try {
                StreamWriter^ writer = gcnew StreamWriter(filename, false);
                StudentNode^ curr = head;
                while (curr != nullptr) {
                    writer->WriteLine("{0},{1},{2},{3},{4},{5}",
                        curr->id, curr->name, curr->email, curr->address, curr->phone, curr->password);
                    curr = curr->next;
                }
                writer->Close();
            }
            catch (Exception^ ex) {
                System::Windows::Forms::MessageBox::Show("Error saving file: " + ex->Message);
            }
        }

        void LoadFromFile() {
            if (!File::Exists(filename)) return;

            try {
                StreamReader^ reader = gcnew StreamReader(filename);
                String^ line;
                while ((line = reader->ReadLine()) != nullptr) {
                    array<String^>^ parts = line->Split(',');
                    if (parts->Length == 6) {
                        int id = Int32::Parse(parts[0]);
                        String^ name = parts[1];
                        String^ email = parts[2];
                        String^ address = parts[3];
                        String^ phone = parts[4];
                        String^ password = parts[5];
                        AddWithoutSaving(id, name, email, address, phone, password);
                    }
                }
                reader->Close();
            }
            catch (Exception^ ex) {
                System::Windows::Forms::MessageBox::Show("Error loading file: " + ex->Message);
            }
        }

    private:

        void AddWithoutSaving(int id, String^ name, String^ email,
            String^ address, String^ phone, String^ password) {

            StudentNode^ newNode = gcnew StudentNode(id, name, email, address, phone, password);

            if (head == nullptr)
                head = newNode;
            else {
                StudentNode^ temp = head;
                while (temp->next != nullptr)
                    temp = temp->next;
                temp->next = newNode;
            }
        }

#pragma endregion

    };
}