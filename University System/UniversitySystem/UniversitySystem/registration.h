#pragma once
#include "rigest.h" 

namespace UniversitySystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class registration : public System::Windows::Forms::UserControl
    {
    private:
        
        System::Windows::Forms::TextBox^ txtStudentID;
        System::Windows::Forms::TextBox^ txtCourseID;
        System::Windows::Forms::Button^ btnRegister;
        System::Windows::Forms::Label^ lblStatus;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        UniversitySystem::PrereqStack^ prereqChecker;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

           System::ComponentModel::Container^ components;

    public:
        registration(void)
        {
            InitializeComponent();
            prereqChecker = gcnew PrereqStack();
        }

    protected:
        ~registration()
        {
            if (components)
            {
                delete components;
            }
        }

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registration::typeid));
            this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
            this->txtCourseID = (gcnew System::Windows::Forms::TextBox());
            this->btnRegister = (gcnew System::Windows::Forms::Button());
            this->lblStatus = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // txtStudentID
            // 
            this->txtStudentID->Location = System::Drawing::Point(160, 50);
            this->txtStudentID->Name = L"txtStudentID";
            this->txtStudentID->Size = System::Drawing::Size(150, 22);
            this->txtStudentID->TabIndex = 5;
            // 
            // txtCourseID
            // 
            this->txtCourseID->Location = System::Drawing::Point(160, 95);
            this->txtCourseID->Name = L"txtCourseID";
            this->txtCourseID->Size = System::Drawing::Size(150, 22);
            this->txtCourseID->TabIndex = 4;
            // 
            // btnRegister
            // 
            this->btnRegister->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnRegister->Location = System::Drawing::Point(372, 181);
            this->btnRegister->Name = L"btnRegister";
            this->btnRegister->Size = System::Drawing::Size(150, 35);
            this->btnRegister->TabIndex = 3;
            this->btnRegister->Text = L"Check Registration";
            this->btnRegister->UseVisualStyleBackColor = false;
            this->btnRegister->Click += gcnew System::EventHandler(this, &registration::btnRegister_Click);
            // 
            // lblStatus
            // 
            this->lblStatus->AutoSize = true;
            this->lblStatus->Location = System::Drawing::Point(50, 190);
            this->lblStatus->Name = L"lblStatus";
            this->lblStatus->Size = System::Drawing::Size(91, 16);
            this->lblStatus->TabIndex = 2;
            this->lblStatus->Text = L"Status: Ready";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(50, 53);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(71, 16);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Student ID:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(50, 98);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(89, 16);
            this->label2->TabIndex = 0;
            this->label2->Text = L"Course Code:";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(568, 50);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(277, 126);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 6;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &registration::pictureBox1_Click);
            // 
            // registration
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::SkyBlue;
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->lblStatus);
            this->Controls->Add(this->btnRegister);
            this->Controls->Add(this->txtCourseID);
            this->Controls->Add(this->txtStudentID);
            this->Name = L"registration";
            this->Size = System::Drawing::Size(916, 491);
            this->Load += gcnew System::EventHandler(this, &registration::registration_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
            int studentID;
           
            if (!Int32::TryParse(txtStudentID->Text, studentID)) {
                MessageBox::Show("Please enter a numeric Student ID");
                return;
            }

            String^ targetCourse = txtCourseID->Text->Trim();
            String^ missing = "";

           
            if (prereqChecker->validatePrerequisites(targetCourse, studentID, missing)) {
                lblStatus->ForeColor = System::Drawing::Color::Green;
                lblStatus->Text = "? Registration Allowed for " + targetCourse;
            }
            else {
                lblStatus->ForeColor = System::Drawing::Color::Red;
                lblStatus->Text = "? Missing Prerequisites:\n" + missing;
            }
        }
    private: System::Void registration_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
        Form^ parentForm = this->FindForm();

        parentForm->Controls->Remove(this);

        parentForm->Text = "Home";
    }
};
}