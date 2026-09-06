#pragma once
#include "SLL.h"
#include "linearBinaryHash.h"
#include "CourseBST.h"
#include "CourseRecords.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

namespace UniversitySystem {

	public ref class search : public UserControl
	{
	private:
		SLL^ studentList;
		CourseBST^ courseBST;

	public:
		search(CourseBST^ bst)
		{
			InitializeComponent();
			studentList = DataStore::studentList;
			courseBST = bst;


		}

	private:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(search::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // button1
			   this->button1->Location = System::Drawing::Point(157, 164);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(96, 63);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"search course";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &search::button1_Click);
			   // button2
			   this->button2->Location = System::Drawing::Point(307, 164);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(93, 63);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"search student";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &search::button2_Click);
			   // textBox1
			   this->textBox1->Location = System::Drawing::Point(170, 72);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(153, 26);
			   this->textBox1->TabIndex = 2;
			   // label1
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(23, 72);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(116, 16);
			   this->label1->TabIndex = 3;
			   this->label1->Text = L"Course/Student id:";
			   // pictureBox1
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(468, 83);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(232, 155);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 4;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &search::pictureBox1_Click);
			   // search
			   this->BackColor = System::Drawing::Color::SkyBlue;
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Name = L"search";
			   this->Size = System::Drawing::Size(916, 491);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();
		   }
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ code = textBox1->Text->Trim();

		if (String::IsNullOrWhiteSpace(code)) {
			MessageBox::Show("Please enter course code");
			return;
		}


		if (this->courseBST == nullptr || this->courseBST->root == nullptr) {
			MessageBox::Show("Course database is still empty! Make sure you added courses in Course Records first.");
			return;
		}

		CourseNode^ result = LinearBinaryHash::SearchInBST(this->courseBST->root, code);

		if (result != nullptr) {
			MessageBox::Show(" Course Found!\n" +
				"ID: " + result->CourseID + "\n" +
				"Name: " + result->CourseName + "\n" +
				"Instructor: " + result->CourseInstructor);
		}
		else {
			MessageBox::Show("Course NOT FOUND");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ key = textBox1->Text;

		if (String::IsNullOrWhiteSpace(key)) {
			MessageBox::Show("Please enter student ID or Name");
			return;
		}


		if (studentList == nullptr || studentList->GetHead() == nullptr) {
			MessageBox::Show("Student list is empty!");
			return;
		}

		StudentNode^ result = LinearBinaryHash::LinearSearchStudent(studentList->GetHead(), key);

		if (result != nullptr) {

			MessageBox::Show("FOUND\nName: " + result->name + "\nID: " + result->id);
		}
		else {

			MessageBox::Show("Student NOT FOUND");
		}
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ parentForm = this->FindForm();
		parentForm->Controls->Remove(this);
		parentForm->Text = "Home";
	}
	};
}