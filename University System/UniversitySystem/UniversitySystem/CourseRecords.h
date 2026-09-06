#pragma once
#include "CourseBST.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace UniversitySystem {

	/// <summary>

	/// Summary for CourseRecords

	/// </summary>

	public ref class CourseRecords : public System::Windows::Forms::UserControl

	{

	public:

		CourseRecords(CourseBST^ originalBST)

		{

			InitializeComponent();

			this->bst = originalBST;

			LoadFromFile();


		}



	protected:

		/// <summary>

		/// Clean up any resources being used.

		/// </summary>

		~CourseRecords()

		{

			if (components)

			{

				delete components;

			}

		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button4;

	private:

		CourseBST^ bst;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;





	protected:



	private:

		/// <summary>

		/// Required designer variable.

		/// </summary>

		System::ComponentModel::Container^ components;



#pragma region Windows Form Designer generated code

		/// <summary>

		/// Required method for Designer support - do not modify

		/// the contents of this method with the code editor.

		/// </summary>

		void InitializeComponent(void)

		{

			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CourseRecords::typeid));

			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());

			this->label1 = (gcnew System::Windows::Forms::Label());

			this->label2 = (gcnew System::Windows::Forms::Label());

			this->label3 = (gcnew System::Windows::Forms::Label());

			this->label4 = (gcnew System::Windows::Forms::Label());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->textBox3 = (gcnew System::Windows::Forms::TextBox());

			this->textBox4 = (gcnew System::Windows::Forms::TextBox());

			this->button1 = (gcnew System::Windows::Forms::Button());

			this->button2 = (gcnew System::Windows::Forms::Button());

			this->button3 = (gcnew System::Windows::Forms::Button());

			this->button4 = (gcnew System::Windows::Forms::Button());

			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());

			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();

			this->SuspendLayout();

			// 

			// pictureBox1

			// 

			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));

			this->pictureBox1->Location = System::Drawing::Point(37, 57);

			this->pictureBox1->Name = L"pictureBox1";

			this->pictureBox1->Size = System::Drawing::Size(191, 102);

			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			this->pictureBox1->TabIndex = 14;

			this->pictureBox1->TabStop = false;

			this->pictureBox1->Click += gcnew System::EventHandler(this, &CourseRecords::pictureBox1_Click);

			// 

			// label1

			// 

			this->label1->AutoSize = true;

			this->label1->Location = System::Drawing::Point(44, 205);

			this->label1->Name = L"label1";

			this->label1->Size = System::Drawing::Size(66, 16);

			this->label1->TabIndex = 16;

			this->label1->Text = L"Course ID";

			// 

			// label2

			// 

			this->label2->AutoSize = true;

			this->label2->Location = System::Drawing::Point(44, 243);

			this->label2->Name = L"label2";

			this->label2->Size = System::Drawing::Size(90, 16);

			this->label2->TabIndex = 17;

			this->label2->Text = L"Course Name";

			// 

			// label3

			// 

			this->label3->AutoSize = true;

			this->label3->Location = System::Drawing::Point(54, 290);

			this->label3->Name = L"label3";

			this->label3->Size = System::Drawing::Size(49, 16);

			this->label3->TabIndex = 18;

			this->label3->Text = L"Credits";

			// 

			// label4

			// 

			this->label4->AutoSize = true;

			this->label4->Location = System::Drawing::Point(34, 329);

			this->label4->Name = L"label4";

			this->label4->Size = System::Drawing::Size(100, 16);

			this->label4->TabIndex = 19;

			this->label4->Text = L"Instructor Name";

			// 

			// textBox1

			// 

			this->textBox1->Location = System::Drawing::Point(166, 199);

			this->textBox1->Name = L"textBox1";

			this->textBox1->Size = System::Drawing::Size(162, 22);

			this->textBox1->TabIndex = 20;

			// 

			// textBox2

			// 

			this->textBox2->Location = System::Drawing::Point(166, 237);

			this->textBox2->Name = L"textBox2";

			this->textBox2->Size = System::Drawing::Size(162, 22);

			this->textBox2->TabIndex = 21;

			// 

			// textBox3

			// 

			this->textBox3->Location = System::Drawing::Point(166, 287);

			this->textBox3->Name = L"textBox3";

			this->textBox3->Size = System::Drawing::Size(162, 22);

			this->textBox3->TabIndex = 22;

			// 

			// textBox4

			// 

			this->textBox4->Location = System::Drawing::Point(166, 329);

			this->textBox4->Name = L"textBox4";

			this->textBox4->Size = System::Drawing::Size(162, 22);

			this->textBox4->TabIndex = 23;

			// 

			// button1

			// 

			this->button1->Location = System::Drawing::Point(57, 395);

			this->button1->Name = L"button1";

			this->button1->Size = System::Drawing::Size(140, 50);

			this->button1->TabIndex = 24;

			this->button1->Text = L"Add Course";

			this->button1->UseVisualStyleBackColor = true;

			this->button1->Click += gcnew System::EventHandler(this, &CourseRecords::button1_Click);

			// 

			// button2

			// 

			this->button2->Location = System::Drawing::Point(284, 395);

			this->button2->Name = L"button2";

			this->button2->Size = System::Drawing::Size(140, 50);

			this->button2->TabIndex = 25;

			this->button2->Text = L"Delete Course";

			this->button2->UseVisualStyleBackColor = true;

			this->button2->Click += gcnew System::EventHandler(this, &CourseRecords::button2_Click);

			// 

			// button3

			// 

			this->button3->Location = System::Drawing::Point(513, 395);

			this->button3->Name = L"button3";

			this->button3->Size = System::Drawing::Size(140, 50);

			this->button3->TabIndex = 26;

			this->button3->Text = L"Search Course";

			this->button3->UseVisualStyleBackColor = true;

			this->button3->Click += gcnew System::EventHandler(this, &CourseRecords::button3_Click);

			// 

			// button4

			// 

			this->button4->BackColor = System::Drawing::Color::FloralWhite;

			this->button4->Location = System::Drawing::Point(712, 395);

			this->button4->Name = L"button4";

			this->button4->Size = System::Drawing::Size(140, 50);

			this->button4->TabIndex = 27;

			this->button4->Text = L"Display Courses";

			this->button4->UseVisualStyleBackColor = false;

			this->button4->Click += gcnew System::EventHandler(this, &CourseRecords::button4_Click);

			// 

			// dataGridView1

			// 

			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;

			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {

				this->Column1,

					this->Column2, this->Column3, this->Column4

			});

			this->dataGridView1->Location = System::Drawing::Point(372, 57);

			this->dataGridView1->Name = L"dataGridView1";

			this->dataGridView1->RowHeadersWidth = 51;

			this->dataGridView1->RowTemplate->Height = 24;

			this->dataGridView1->Size = System::Drawing::Size(492, 294);

			this->dataGridView1->TabIndex = 28;

			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CourseRecords::dataGridView1_CellContentClick);

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

			this->Column2->HeaderText = L"Course Name";

			this->Column2->MinimumWidth = 6;

			this->Column2->Name = L"Column2";

			this->Column2->ReadOnly = true;

			this->Column2->Width = 125;

			// 

			// Column3

			// 

			this->Column3->HeaderText = L"Credits";

			this->Column3->MinimumWidth = 6;

			this->Column3->Name = L"Column3";

			this->Column3->ReadOnly = true;

			this->Column3->Width = 125;

			// 

			// Column4

			// 

			this->Column4->HeaderText = L"Instructor Name";

			this->Column4->MinimumWidth = 6;

			this->Column4->Name = L"Column4";

			this->Column4->ReadOnly = true;

			this->Column4->Width = 125;

			// 

			// CourseRecords

			// 

			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);

			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::SkyBlue;

			this->Controls->Add(this->dataGridView1);

			this->Controls->Add(this->button4);

			this->Controls->Add(this->button3);

			this->Controls->Add(this->button2);

			this->Controls->Add(this->button1);

			this->Controls->Add(this->textBox4);

			this->Controls->Add(this->textBox3);

			this->Controls->Add(this->textBox2);

			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->label4);

			this->Controls->Add(this->label3);

			this->Controls->Add(this->label2);

			this->Controls->Add(this->label1);

			this->Controls->Add(this->pictureBox1);

			this->Name = L"CourseRecords";

			this->Size = System::Drawing::Size(916, 491);

			this->Load += gcnew System::EventHandler(this, &CourseRecords::CourseRecords_Load);

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();

			this->ResumeLayout(false);

			this->PerformLayout();



		}

#pragma endregion

		void SaveToFile() {

			StreamWriter^ sw = gcnew StreamWriter("courses.txt");
			SaveInOrder(bst->root, sw);
			sw->Close();

		}



		void SaveInOrder(CourseNode^ node, StreamWriter^ sw) {

			if (node == nullptr) return;

			SaveInOrder(node->left, sw);
			sw->WriteLine(node->CourseID + "," +
				node->CourseName + "," +
				node->CourseCredits + "," +
				node->CourseInstructor);
			SaveInOrder(node->right, sw);

		}


		void LoadFromFile() {

			if (!File::Exists("courses.txt")) return;

			bst->Clear(); 

			array<String^>^ lines = File::ReadAllLines("courses.txt");

			for each (String ^ line in lines) {

				if (String::IsNullOrWhiteSpace(line)) continue;

				array<String^>^ data = line->Split(',');

				if (data->Length < 4) continue;

				int credits;
				if (!Int32::TryParse(data[2]->Trim(), credits))
					continue;

				bst->AddCourse(
					data[0]->Trim(),
					data[1]->Trim(),
					credits,
					data[3]->Trim()
				);
			}
		}



	private: System::Void CourseRecords_Load(System::Object^ sender, System::EventArgs^ e) {



	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

		Form^ parentForm = this->FindForm();

		parentForm->Controls->Remove(this);

		parentForm->Text = "Home";

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ id = textBox1->Text;

		String^ name = textBox2->Text;

		int credits = Int32::Parse(textBox3->Text);


		String^ instructor = textBox4->Text;



		bst->AddCourse(id, name, credits, instructor);

		SaveToFile();



		MessageBox::Show("Course Added Successfully");

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text == "") {

			MessageBox::Show("Please enter Course ID");

			return;

		}



		String^ id = textBox1->Text;



		bst->DeleteCourse(id);

		SaveToFile();

		MessageBox::Show("Course Deleted Successfully");

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ id = textBox1->Text;

		CourseNode^ course = bst->SearchCourse(id);



		if (course != nullptr)

			MessageBox::Show("Found: " + course->CourseName);

		else

			MessageBox::Show("Course Not Found");

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		dataGridView1->Rows->Clear();

		bst->InOrderTraversal(bst->root, dataGridView1);

	}



	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


		if (e->RowIndex >= 0) {

			textBox1->Text = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();

			textBox2->Text = dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString();

			textBox3->Text = dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();

			textBox4->Text = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString();

		}

	}

	};

}