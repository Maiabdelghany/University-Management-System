#pragma once
#include "coursehistory.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace UniversitySystem {

	public ref class history : public System::Windows::Forms::UserControl
	{
	private:
		CourseHistoryDLL^ studentLogic; 

	public:
		history(void)
		{
			InitializeComponent();
			studentLogic = gcnew CourseHistoryDLL();

			
			if (dataGridView1->Columns->Count == 0) {
				dataGridView1->ColumnCount = 4;
				dataGridView1->Columns[0]->Name = L"Student ID";
				dataGridView1->Columns[1]->Name = L"Course";
				dataGridView1->Columns[2]->Name = L"Semester";
				dataGridView1->Columns[3]->Name = L"Grade";
			}
		}

	protected:
		~history()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private: System::Windows::Forms::TextBox^ textBox1;      
	private: System::Windows::Forms::TextBox^ textBox2;      
	private: System::Windows::Forms::TextBox^ textBox3;      
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1; 
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1; 
	private: System::Windows::Forms::Button^ button2; 
	private: System::Windows::Forms::Button^ button3; 
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(history::typeid));
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(142, 133);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(147, 22);
			   this->textBox1->TabIndex = 4;
			   this->textBox1->TextChanged += gcnew System::EventHandler(this, &history::textBox1_TextChanged);
			   // 
			   // maskedTextBox1
			   // 
			   this->maskedTextBox1->Location = System::Drawing::Point(142, 171);
			   this->maskedTextBox1->Name = L"maskedTextBox1";
			   this->maskedTextBox1->Size = System::Drawing::Size(147, 22);
			   this->maskedTextBox1->TabIndex = 5;
			   this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &history::maskedTextBox1_MaskInputRejected);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(142, 217);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(147, 22);
			   this->textBox2->TabIndex = 6;
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &history::textBox2_TextChanged);
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(142, 255);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(147, 22);
			   this->textBox3->TabIndex = 7;
			   this->textBox3->TextChanged += gcnew System::EventHandler(this, &history::textBox3_TextChanged);
			   // 
			   // label1
			   // 
			   this->label1->Location = System::Drawing::Point(0, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(100, 23);
			   this->label1->TabIndex = 0;
			   // 
			   // label2
			   // 
			   this->label2->Location = System::Drawing::Point(0, 0);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(100, 23);
			   this->label2->TabIndex = 0;
			   // 
			   // label3
			   // 
			   this->label3->Location = System::Drawing::Point(0, 0);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(100, 23);
			   this->label3->TabIndex = 0;
			   // 
			   // label4
			   // 
			   this->label4->Location = System::Drawing::Point(0, 0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(100, 23);
			   this->label4->TabIndex = 0;
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeight = 29;
			   this->dataGridView1->Location = System::Drawing::Point(319, 53);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->Size = System::Drawing::Size(347, 221);
			   this->dataGridView1->TabIndex = 3;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button1->Location = System::Drawing::Point(67, 324);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(93, 34);
			   this->button1->TabIndex = 2;
			   this->button1->Text = L"add";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &history::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button2->Location = System::Drawing::Point(282, 321);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(98, 37);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"display";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &history::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button3->Location = System::Drawing::Point(473, 319);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(116, 39);
			   this->button3->TabIndex = 0;
			   this->button3->Text = L"clear";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &history::button3_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(48, 139);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(64, 16);
			   this->label5->TabIndex = 8;
			   this->label5->Text = L"student id";
			   this->label5->Click += gcnew System::EventHandler(this, &history::label5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(37, 177);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(85, 16);
			   this->label6->TabIndex = 9;
			   this->label6->Text = L"course name";
			   this->label6->Click += gcnew System::EventHandler(this, &history::label6_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(38, 217);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(63, 16);
			   this->label7->TabIndex = 10;
			   this->label7->Text = L"semester";
			   this->label7->Click += gcnew System::EventHandler(this, &history::label7_Click);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(48, 258);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(43, 16);
			   this->label8->TabIndex = 11;
			   this->label8->Text = L"grade";
			   this->label8->Click += gcnew System::EventHandler(this, &history::label8_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(25, 30);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(195, 85);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 12;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &history::pictureBox1_Click);
			   // 
			   // history
			   // 
			   this->BackColor = System::Drawing::Color::SkyBlue;
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->maskedTextBox1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox3);
			   this->Name = L"history";
			   this->Size = System::Drawing::Size(692, 393);
			   this->Load += gcnew System::EventHandler(this, &history::history_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int studentID;
		if (!Int32::TryParse(textBox1->Text, studentID)) {
			MessageBox::Show("Student ID must be a number!");
			return;
		}

		if (!studentLogic->IsStudentExists(studentID)) {
			MessageBox::Show("Student not found!");
			return;
		}

		if (String::IsNullOrWhiteSpace(maskedTextBox1->Text)) {
			MessageBox::Show("Course name is required!");
			return;
		}

		float grade;
		if (!Single::TryParse(textBox3->Text, grade)) {
			MessageBox::Show("Invalid grade!");
			return;
		}

		if (studentLogic->IsDuplicate(studentID, maskedTextBox1->Text)) {
			MessageBox::Show("This course already exists for this student!");
			return;
		}

		studentLogic->AddRecord(
			studentID,
			maskedTextBox1->Text,
			textBox2->Text,
			grade
		);

		MessageBox::Show("Record added successfully!");
	}



		   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int studentID;
	if (!Int32::TryParse(textBox1->Text, studentID)) {
		MessageBox::Show("Enter a valid Student ID!");
		return;
	}

	dataGridView1->Rows->Clear();

	
	HistoryNode^ result = studentLogic->GetStudentDataAsDLL(studentID);

	if (result == nullptr) {
		MessageBox::Show("No records found for this student.");
		return;
	}

	while (result != nullptr) {
		dataGridView1->Rows->Add(
			result->studentID,
			result->courseName,
			result->semester,
			result->grade
		);
		result = result->next;
	}
}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		maskedTextBox1->Clear();
		dataGridView1->Rows->Clear();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void history_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ parentForm = this->FindForm();

	parentForm->Controls->Remove(this);

	parentForm->Text = "Home";
}
};
}