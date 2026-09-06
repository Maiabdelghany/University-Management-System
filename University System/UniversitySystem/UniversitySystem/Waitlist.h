#pragma once
#include "WaitlistQueue.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace UniversitySystem {

	/// <summary>
	/// Summary for Waitlist
	/// </summary>
	public ref class Waitlist : public System::Windows::Forms::UserControl
	{
	public:
		Waitlist(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Waitlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: UniversitySystem::WaitlistQueue^ waitlistQueue;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Waitlist::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(54, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add to Waitlist";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Waitlist::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(323, 374);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Enroll from Waitlist";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Waitlist::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(589, 374);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"View Waitlist";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Waitlist::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(76, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(177, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Waitlist::pictureBox1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(159, 204);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Waitlist::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(159, 252);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Waitlist::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Student ID";
			this->label1->Click += gcnew System::EventHandler(this, &Waitlist::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 258);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Course ID";
			this->label2->Click += gcnew System::EventHandler(this, &Waitlist::label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(435, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(356, 222);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Course ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Student ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Waitlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Waitlist";
			this->Size = System::Drawing::Size(900, 479);
			this->Load += gcnew System::EventHandler(this, &Waitlist::Waitlist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ studentID = textBox1->Text;
		String^ courseID = textBox2->Text;

		if (studentID == "" || courseID == "") {
			MessageBox::Show("Please enter both Student ID and Course ID");
			return;
		}

		
		if (!File::Exists("students.txt") || !CheckExistsInFile("students.txt", studentID)) {
			MessageBox::Show("Student ID not found!");
			return;
		}

		if (!File::Exists("courses.txt") || !CheckExistsInFile("courses.txt", courseID)) {
			MessageBox::Show("Course ID not found!");
			return;
		}

		waitlistQueue->enqueue(studentID, courseID);
		MessageBox::Show("Student added to Waitlist");
	}

		   bool CheckExistsInFile(String^ filename, String^ id) {
			   array<String^>^ lines = File::ReadAllLines(filename);
			   for each (String ^ line in lines) {
				   array<String^>^ data = line->Split(',');
				   if (data[0]->Equals(id)) return true;
			   }
			   return false;
		   }

	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ parentForm = this->FindForm();
	parentForm->Controls->Remove(this);
	parentForm->Text = "Home";
}
private: System::Void Waitlist_Load(System::Object^ sender, System::EventArgs^ e) {
	waitlistQueue = gcnew UniversitySystem::WaitlistQueue("waitlist.txt");
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ courseID = textBox2->Text;

	if (courseID == "") {
		MessageBox::Show("Please enter the Course ID to enroll from waitlist");
		return;
	}

	String^ student = waitlistQueue->dequeueByCourse(courseID);

	if (student != nullptr) {
		MessageBox::Show("Student enrolled: " + student);
		waitlistQueue->DisplayByCourse(dataGridView1, courseID);
	}
	else {
		MessageBox::Show("Waitlist for this course is empty");
	}

	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ courseID = textBox2->Text;

	if (courseID == "") {
		MessageBox::Show("Please enter the Course ID to view waitlist");
		return;
	}

	waitlistQueue->DisplayByCourse(dataGridView1, courseID);

}
};
}
