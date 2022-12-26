#pragma once
#include <iostream>

using namespace std;

namespace NotHesaplama {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ svLayout;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnHesapla;
	private: System::Windows::Forms::Button^ btnTemizle;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->svLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnHesapla = (gcnew System::Windows::Forms::Button());
			this->btnTemizle = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->svLayout->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// svLayout
			// 
			this->svLayout->ColumnCount = 2;
			this->svLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->svLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->svLayout->Controls->Add(this->radioButton1, 0, 0);
			this->svLayout->Controls->Add(this->radioButton2, 1, 0);
			this->svLayout->ForeColor = System::Drawing::Color::White;
			this->svLayout->Location = System::Drawing::Point(13, 13);
			this->svLayout->Name = L"svLayout";
			this->svLayout->RowCount = 1;
			this->svLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->svLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->svLayout->Size = System::Drawing::Size(336, 23);
			this->svLayout->TabIndex = 0;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(3, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(160, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Sýnav Ortalamasý Hesaplama";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::radioButton1_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(171, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(156, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Vizel/Final Notu Hesaplama";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(150, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1. Sýnav Notunuzu Giriniz: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"2. Sýnav Notunuzu Giriniz: ";
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(150, 69);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"3. Vize Notunuzu Giriniz: ";
			this->label3->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(150, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Visible = false;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(379, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"3. Vize Oranýný Giriniz: ";
			this->label4->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(517, 95);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(199, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->Visible = false;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(379, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"2. Vize Oranýný Giriniz: ";
			this->label5->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(517, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->Visible = false;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(379, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(112, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"1. Vize Oranýný Giriniz: ";
			this->label6->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(517, 43);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(199, 20);
			this->textBox6->TabIndex = 7;
			this->textBox6->Visible = false;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				108)));
			this->tableLayoutPanel1->Controls->Add(this->radioButton3, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->radioButton4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->radioButton5, 2, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel1->Location = System::Drawing::Point(382, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(334, 23);
			this->tableLayoutPanel1->TabIndex = 13;
			this->tableLayoutPanel1->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(3, 3);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(54, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->Text = L"1 Vize";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(116, 3);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(54, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->Text = L"2 Vize";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Click += gcnew System::EventHandler(this, &MyForm::radioButton4_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(229, 3);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(54, 17);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->Text = L"3 Vize";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->Click += gcnew System::EventHandler(this, &MyForm::radioButton5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(379, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Final Oranýný Giriniz: ";
			this->label7->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(517, 121);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(199, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btnHesapla, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnTemizle, 1, 0);
			this->tableLayoutPanel2->ForeColor = System::Drawing::Color::Black;
			this->tableLayoutPanel2->Location = System::Drawing::Point(13, 147);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(334, 31);
			this->tableLayoutPanel2->TabIndex = 16;
			// 
			// btnHesapla
			// 
			this->btnHesapla->BackColor = System::Drawing::Color::Lime;
			this->btnHesapla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnHesapla->Location = System::Drawing::Point(3, 3);
			this->btnHesapla->Name = L"btnHesapla";
			this->btnHesapla->Size = System::Drawing::Size(161, 23);
			this->btnHesapla->TabIndex = 0;
			this->btnHesapla->Text = L"Hesapla";
			this->btnHesapla->UseVisualStyleBackColor = false;
			this->btnHesapla->Click += gcnew System::EventHandler(this, &MyForm::btnHesapla_Click);
			// 
			// btnTemizle
			// 
			this->btnTemizle->BackColor = System::Drawing::Color::Red;
			this->btnTemizle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btnTemizle->Location = System::Drawing::Point(170, 3);
			this->btnTemizle->Name = L"btnTemizle";
			this->btnTemizle->Size = System::Drawing::Size(161, 23);
			this->btnTemizle->TabIndex = 1;
			this->btnTemizle->Text = L"Temizle";
			this->btnTemizle->UseVisualStyleBackColor = false;
			this->btnTemizle->Click += gcnew System::EventHandler(this, &MyForm::btnTemizle_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(12, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Final Notunuzu Giriniz: ";
			this->label8->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->ForeColor = System::Drawing::Color::Black;
			this->textBox8->Location = System::Drawing::Point(150, 121);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(199, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(95, 224);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 20);
			this->label9->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(13, 221);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 24);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Sonuç:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(728, 629);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->svLayout);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Not Hesaplayýcý";
			this->svLayout->ResumeLayout(false);
			this->svLayout->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (!isdigit(e->KeyChar) && e->KeyChar != (char)8)
			{
				e->Handled = true;
			}
		}
		private: System::Void radioButton1_Click(System::Object^ sender, System::EventArgs^ e) {

			label1->Text = "1. Sýnav Notunuzu Giriniz: ";
			label2->Text = "2. Sýnav Notunuzu Giriniz: ";

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = false;
			label6->Visible = false;
			label7->Visible = false;
			label8->Visible = false;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = false;
			textBox4->Visible = false;
			textBox5->Visible = false;
			textBox6->Visible = false;
			textBox7->Visible = false;
			textBox8->Visible = false;

			tableLayoutPanel1->Visible = false;

		}
		private: System::Void radioButton2_Click(System::Object^ sender, System::EventArgs^ e) {

			label1->Text = "1. Vize Notunuzu Giriniz: ";
			label2->Text = "Final Notunuzu Giriniz: ";
			label5->Text = "Final Oranýný Giriniz: ";

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = false;
			label8->Visible = false;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = false;
			textBox4->Visible = false;
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = false;
			textBox8->Visible = false;

			tableLayoutPanel1->Visible = true;

			radioButton3->Checked = true;
			radioButton4->Checked = false;
			radioButton5->Checked = false;

		}
		private: System::Void radioButton3_Click(System::Object^ sender, System::EventArgs^ e) {

			label1->Text = "1. Vize Notunuzu Giriniz: ";
			label2->Text = "Final Notunuzu Giriniz: ";
			label5->Text = "Final Oranýný Giriniz: ";

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = false;
			label4->Visible = false;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = false;
			label8->Visible = false;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = false;
			textBox4->Visible = false;
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = false;
			textBox8->Visible = false;

			tableLayoutPanel1->Visible = true;

			radioButton3->Checked = true;
			radioButton4->Checked = false;
			radioButton5->Checked = false;

		}
		private: System::Void radioButton4_Click(System::Object^ sender, System::EventArgs^ e) {

			label1->Text = "1. Vize Notunuzu Giriniz: ";
			label2->Text = "2. Vize Notunuzu Giriniz: ";
			label3->Text = "Final Notunuzu Giriniz: ";
			label4->Text = "Final Oranýný Giriniz: ";
			label5->Text = "2. Vize Oranýný Giriniz: ";

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = false;
			label8->Visible = false;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = true;
			textBox4->Visible = true;
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = false;
			textBox8->Visible = false;

			tableLayoutPanel1->Visible = true;

			radioButton3->Checked = false;
			radioButton4->Checked = true;
			radioButton5->Checked = false;

		}
		private: System::Void radioButton5_Click(System::Object^ sender, System::EventArgs^ e) {

			label1->Text = "1. Vize Notunuzu Giriniz: ";
			label2->Text = "2. Vize Notunuzu Giriniz: ";
			label3->Text = "3. Vize Oranýný Giriniz: ";
			label4->Text = "3. Vize Oranýný Giriniz: ";
			label5->Text = "2. Vize Oranýný Giriniz: ";
			label6->Text = "1. Vize Oranýný Giriniz: ";
			label7->Text = "Final Notunuzu Giriniz: ";
			label8->Text = "Final Oranýný Giriniz: ";

			label1->Visible = true;
			label2->Visible = true;
			label3->Visible = true;
			label4->Visible = true;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
			label8->Visible = true;

			textBox1->Visible = true;
			textBox2->Visible = true;
			textBox3->Visible = true;
			textBox4->Visible = true;
			textBox5->Visible = true;
			textBox6->Visible = true;
			textBox7->Visible = true;
			textBox8->Visible = true;

			tableLayoutPanel1->Visible = true;

			radioButton3->Checked = false;
			radioButton4->Checked = false;
			radioButton5->Checked = true;

		}
		private: System::Void btnTemizle_Click(System::Object^ sender, System::EventArgs^ e) {

			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			textBox8->Text = "";

		}
		private: System::Void btnHesapla_Click(System::Object^ sender, System::EventArgs^ e) {

			if (radioButton1->Checked == true) {
				if (textBox1->TextLength <= 0 || textBox2->TextLength <= 0) {
					label9->Text = "Lütfen Kutucuklarý Doldurunuz!";
				}
				else if (textBox1->TextLength > 0 && textBox2->TextLength > 0) {
					
					int number1 = System::Convert::ToInt32(textBox1->Text);
					int number2 = System::Convert::ToInt32(textBox2->Text);

					if (number1 > 100 || number2 > 100) {
						label9->Text = "Girilen Sayýlar 100'den Büyük Olamaz!";
					}
					else if (number1 <= 100 && number2 <= 100) {
						
						int ort = (number1 + number2) / 2;

						if (ort >= 90) {
							label9->Text = "Dersten Baþarýlý Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", AA" + ", 4.0";
						}
						else if (ort >= 85) {
							label9->Text = "Dersten Baþarýlý Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", BA" + ", 3.5";
						}
						else if (ort >= 80) {
							label9->Text = "Dersten Baþarýlý Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", BB" + ", 3.0";
						}
						else if (ort >= 75) {
							label9->Text = "Dersten Normal Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", CB" + ", 2.5";
						}
						else if (ort >= 70) {
							label9->Text = "Dersten Normal Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", CC" + ", 2.0";
						}
						else if (ort >= 65) {
							label9->Text = "Dersten Koþullu Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", DC" + ", 1.5";
						}
						else if (ort >= 60) {
							label9->Text = "Dersten Koþullu Olarak Geçtiniz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", DD" + ", 1.0";
						}
						else if (ort >= 50) {
							label9->Text = "Dersten Baþarýsýz Olarak Kaldýnýz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", FD" + ", 0.5";
						}
						else {
							label9->Text = "Dersten Baþarýsýz Olarak Kaldýnýz. Ortlamanýz, Ders Notunuz, Katsayýnýz: " + System::Convert::ToString(ort) + ", FF" + ", 0.0";
						}

					}

				}
			}
			else if (radioButton2->Checked == true) {
				
				if (radioButton3->Checked == true) {

					if (textBox1->TextLength <= 0 || textBox2->TextLength <= 0 || textBox5->TextLength <= 0 || textBox6->TextLength <= 0) {
						label9->Text = "Lütfen Kutucuklarý Doldurunuz!";
					}
					else if (textBox1->TextLength > 0 && textBox2->TextLength > 0 && textBox5->TextLength > 0 && textBox6->TextLength > 0) {

						int vnotu = System::Convert::ToInt32(textBox1->Text);
						int fnotu = System::Convert::ToInt32(textBox2->Text);

						int yOran = System::Convert::ToInt32(textBox5->Text) + System::Convert::ToInt32(textBox6->Text);

						if (yOran > 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Büyük Olamaz!";
						}
						else if (yOran < 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Küçük Olamaz!";
						}
						else if (yOran == 100) {

							int hvnotu = vnotu * System::Convert::ToInt32(textBox6->Text) / 100;
							int hfnotu = fnotu * System::Convert::ToInt32(textBox5->Text) / 100;

							int hortalama = hvnotu + hfnotu;

							label9->Text = "1 Vizeye Göre Vize ve Final Notu Ortalamanýz: " + System::Convert::ToString(hortalama);
							
						}

					}

				}
				else if (radioButton4->Checked == true) {

					if (textBox1->TextLength <= 0 || textBox2->TextLength <= 0 || textBox3->TextLength <= 0 || textBox4->TextLength <= 0 || textBox5->TextLength <= 0 || textBox6->TextLength <= 0) {
						label9->Text = "Lütfen Kutucuklarý Doldurunuz!";
					}
					else if (textBox1->TextLength > 0 && textBox2->TextLength > 0 && textBox3->TextLength > 0 && textBox4->TextLength > 0 && textBox5->TextLength > 0 && textBox6->TextLength > 0) {

						int vnotu1 = System::Convert::ToInt32(textBox1->Text);
						int vorani1 = System::Convert::ToInt32(textBox6->Text);

						int vnotu2 = System::Convert::ToInt32(textBox2->Text);
						int vorani2 = System::Convert::ToInt32(textBox5->Text);

						int fnotu = System::Convert::ToInt32(textBox3->Text);
						int forani = System::Convert::ToInt32(textBox4->Text);

						int yOran = vorani1 + vorani2 + forani;

						if (yOran > 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Büyük Olamaz!";
						}
						else if (yOran < 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Küçük Olamaz!";
						}
						else if (yOran == 100) {

							int hvnotu1 = vnotu1 * vorani1 / 100;
							int hvnotu2 = vnotu2 * vorani2 / 100;
							int hfnotu = fnotu * forani / 100;

							int hvfort = hvnotu1 + hvnotu2 + hfnotu;

							label9->Text = "2 Vizeye Göre Vize ve Final Notu Ortalamanýz: " + System::Convert::ToString(hvfort);
							
						}

					}

				}
				else if (radioButton5->Checked == true) {

					if (textBox1->TextLength <= 0 || textBox2->TextLength <= 0 || textBox3->TextLength <= 0 || 
						textBox4->TextLength <= 0 || textBox5->TextLength <= 0 || textBox6->TextLength <= 0 || 
						textBox7->TextLength <= 0 || textBox8->TextLength <= 0) {
						label9->Text = "Lütfen Kutucuklarý Doldurunuz!";
					}
					else if (textBox1->TextLength > 0 && textBox2->TextLength > 0 && textBox3->TextLength > 0 && 
						textBox4->TextLength > 0 && textBox5->TextLength > 0 && textBox6->TextLength > 0 && 
						textBox7->TextLength > 0 && textBox8->TextLength > 0) {

						int vnotu1 = System::Convert::ToInt32(textBox1->Text);
						int vorani1 = System::Convert::ToInt32(textBox6->Text);

						int vnotu2 = System::Convert::ToInt32(textBox2->Text);
						int vorani2 = System::Convert::ToInt32(textBox5->Text);

						int vnotu3 = System::Convert::ToInt32(textBox3->Text);
						int vorani3 = System::Convert::ToInt32(textBox4->Text);

						int fnotu = System::Convert::ToInt32(textBox8->Text);
						int forani = System::Convert::ToInt32(textBox7->Text);

						int yOran = vorani1 + vorani2 + vorani3 + forani;

						if (yOran > 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Büyük Olamaz!";
						}
						else if (yOran < 100) {
							label9->Text = "Girilen Oralarýn Toplamý 100'den Küçük Olamaz!";
						}
						else if (yOran == 100) {

							int hvnotu1 = vnotu1 * vorani1 / 100;
							int hvnotu2 = vnotu2 * vorani2 / 100;
							int hvnotu3 = vnotu3 * vorani3 / 100;
							int hfnotu = fnotu * forani / 100;

							int hvfort = hvnotu1 + hvnotu2 + hvnotu3 + hfnotu;

							label9->Text = "3 Vizeye Göre Vize ve Final Notu Ortalamanýz: " + System::Convert::ToString(hvfort);
							
						}

					}

				}

			}

		}
	};
}
