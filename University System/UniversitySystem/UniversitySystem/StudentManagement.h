#pragma once
#include"SLL.h"
#include "DataStore.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UniversitySystem {

	/// <summary>
	/// Summary for StudentManagement
	/// </summary>
	public ref class StudentManagement : public System::Windows::Forms::UserControl
	{
	public:
		StudentManagement(void)
		{
			InitializeComponent();
			studentList = DataStore::studentList;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentManagement()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ Display;
	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Label^ Email;
	private: System::Windows::Forms::Label^ Adress;
	private: System::Windows::Forms::Label^ Phone;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;




	private:
		System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Iddd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ emailll;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ addresss;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phonee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ passwordd;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:
		SLL^ studentList;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentManagement::typeid));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->add = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Button());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->Adress = (gcnew System::Windows::Forms::Label());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Iddd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nameee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->emailll = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addresss = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phonee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->passwordd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::Color::WhiteSmoke;
			this->add->Location = System::Drawing::Point(93, 415);
			this->add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(131, 44);
			this->add->TabIndex = 2;
			this->add->Text = L"Add student";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &StudentManagement::button1_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Delete->Location = System::Drawing::Point(728, 415);
			this->Delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(153, 46);
			this->Delete->TabIndex = 3;
			this->Delete->Text = L"Delete Student";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &StudentManagement::Delete_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Display->Location = System::Drawing::Point(395, 415);
			this->Display->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(158, 46);
			this->Display->TabIndex = 4;
			this->Display->Text = L"Display Students";
			this->Display->UseVisualStyleBackColor = false;
			this->Display->Click += gcnew System::EventHandler(this, &StudentManagement::Display_Click);
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(17, 123);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(69, 16);
			this->Id->TabIndex = 5;
			this->Id->Text = L"Student Id:";
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Location = System::Drawing::Point(5, 167);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(95, 16);
			this->Name->TabIndex = 6;
			this->Name->Text = L"Student Name:";
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Location = System::Drawing::Point(8, 212);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(92, 16);
			this->Email->TabIndex = 7;
			this->Email->Text = L"Student Email:";
			// 
			// Adress
			// 
			this->Adress->AutoSize = true;
			this->Adress->Location = System::Drawing::Point(8, 255);
			this->Adress->Name = L"Adress";
			this->Adress->Size = System::Drawing::Size(101, 16);
			this->Adress->TabIndex = 8;
			this->Adress->Text = L"Student Adress:";
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->Location = System::Drawing::Point(8, 302);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(97, 16);
			this->Phone->TabIndex = 9;
			this->Phone->Text = L"Student Phone:";
			this->Phone->Click += gcnew System::EventHandler(this, &StudentManagement::Phone_Click);
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->Location = System::Drawing::Point(3, 353);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(118, 16);
			this->Password->TabIndex = 10;
			this->Password->Text = L"Student Password:";
			this->Password->Click += gcnew System::EventHandler(this, &StudentManagement::Password_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 113);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 26);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 155);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 28);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(133, 199);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 29);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(133, 244);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 27);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(132, 290);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(162, 28);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(132, 340);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(162, 29);
			this->textBox6->TabIndex = 16;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Iddd, this->nameee,
					this->emailll, this->addresss, this->phonee, this->passwordd
			});
			this->dataGridView1->Location = System::Drawing::Point(358, 59);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(583, 310);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentManagement::dataGridView1_CellContentClick);
			// 
			// Iddd
			// 
			this->Iddd->HeaderText = L"id";
			this->Iddd->MinimumWidth = 8;
			this->Iddd->Name = L"Iddd";
			this->Iddd->Width = 150;
			// 
			// nameee
			// 
			this->nameee->HeaderText = L"name";
			this->nameee->MinimumWidth = 8;
			this->nameee->Name = L"nameee";
			this->nameee->Width = 150;
			// 
			// emailll
			// 
			this->emailll->HeaderText = L"email";
			this->emailll->MinimumWidth = 8;
			this->emailll->Name = L"emailll";
			this->emailll->Width = 150;
			// 
			// addresss
			// 
			this->addresss->HeaderText = L"address";
			this->addresss->MinimumWidth = 8;
			this->addresss->Name = L"addresss";
			this->addresss->Width = 150;
			// 
			// phonee
			// 
			this->phonee->HeaderText = L"phone";
			this->phonee->MinimumWidth = 8;
			this->phonee->Name = L"phonee";
			this->phonee->Width = 150;
			// 
			// passwordd
			// 
			this->passwordd->HeaderText = L"password";
			this->passwordd->MinimumWidth = 8;
			this->passwordd->Name = L"passwordd";
			this->passwordd->Width = 150;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 92);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &StudentManagement::pictureBox1_Click);
			// 
			// StudentManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Adress);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Name);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->add);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);

			this->Size = System::Drawing::Size(944, 495);
			this->Load += gcnew System::EventHandler(this, &StudentManagement::StudentManagement_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void DisplayStudents() {
		dataGridView1->Rows->Clear();
		StudentNode^ curr = studentList->GetHead();
		while (curr != nullptr) {
			dataGridView1->Rows->Add(curr->id, curr->name, curr->email,
				curr->address, curr->phone, curr->password);
			curr = curr->next;
		}
	}

	private: void ClearTextBoxes() {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
	}

	private: System::Void StudentManagement_Load(System::Object^ sender, System::EventArgs^ e) {
		DisplayStudents();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Int32::Parse(textBox1->Text);
			String^ name = textBox2->Text;
			String^ email = textBox3->Text;
			String^ address = textBox4->Text;
			String^ phone = textBox5->Text;
			String^ password = textBox6->Text;

			studentList->Add(id, name, email, address, phone, password);

			MessageBox::Show("Student added successfully!");

			ClearTextBoxes();
			DisplayStudents();   
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}


	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ idStr = textBox1->Text;
			String^ name = textBox2->Text;
			String^ email = textBox3->Text;
			String^ address = textBox4->Text;
			String^ phone = textBox5->Text;
			String^ password = textBox6->Text;

			bool deleted = studentList->DeleteByAny(idStr, name, email, address, phone, password);

			if (deleted) {
				MessageBox::Show("Student deleted successfully!");
				ClearTextBoxes();
				DisplayStudents();
			}
			else {
				MessageBox::Show("Student not found!");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void Display_Click(System::Object^ sender, System::EventArgs^ e) {
		DisplayStudents();
	}
	private: System::Void Phone_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0) {
			DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
			textBox1->Text = row->Cells[0]->Value->ToString();
			textBox2->Text = row->Cells[1]->Value->ToString();
			textBox3->Text = row->Cells[2]->Value->ToString();
			textBox4->Text = row->Cells[3]->Value->ToString();
			textBox5->Text = row->Cells[4]->Value->ToString();
			textBox6->Text = row->Cells[5]->Value->ToString();
		}
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ parentForm = this->FindForm();
		parentForm->Controls->Remove(this);
		parentForm->Text = "Home";
	}
};
}