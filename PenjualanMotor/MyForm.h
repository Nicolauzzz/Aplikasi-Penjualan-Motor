#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>
namespace PenjualanMotor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace msclr::interop;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;



	private: System::Windows::Forms::Button^ button2;

	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(264, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Aplikasi Penjualan Motor";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(49, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nama Lengkap";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Data Motor\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(50, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Merk Motor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(50, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Jenis Motor";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(31, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Harga";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(73, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(442, 179);
			this->panel1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(190, 82);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(50, 20);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Matic";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(132, 82);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 20);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Sport";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Yamaha", L"Honda", L"Suzuki" });
			this->comboBox1->Location = System::Drawing::Point(133, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(73, 381);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(442, 167);
			this->panel2->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(123, 92);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(153, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(88, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(32, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 20);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Total Bayar";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(32, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 20);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Diskon";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(13, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Harga Motor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(49, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Pembayaran";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(156, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tunai", L"Kredit" });
			this->comboBox2->Location = System::Drawing::Point(142, 343);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(284, 326);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Teal;
			this->button3->Location = System::Drawing::Point(630, 578);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(246, 46);
			this->button3->TabIndex = 13;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Teal;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(108, 564);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 46);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Confirm";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Teal;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBox1->Location = System::Drawing::Point(607, 172);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(283, 349);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(700, 533);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 31);
			this->label11->TabIndex = 16;
			this->label11->Text = L"RECEIPT";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(316, 564);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 46);
			this->button2->TabIndex = 17;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(752, 132);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(124, 20);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(670, 130);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(76, 20);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Sisa Saldo";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(603, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 22);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Saldo Rp.50.000.000";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(960, 685);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			textBox2->Text = sportPrice.ToString();
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private:
		int sportPrice;
		int maticPrice;

public:
	property int SportPrice {
		int get() {
			return sportPrice;
		}
		void set(int value) {
			sportPrice = value;
		}
	}

	property int MaticPrice {
		int get() {
			return maticPrice;
		}
		void set(int value) {
			maticPrice = value;
		}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem != nullptr) {
			String^ selectedMerk = comboBox1->SelectedItem->ToString();

			if (selectedMerk == "Yamaha") {
				sportPrice = 28000000;
				maticPrice = 16000000;
			}
			else if (selectedMerk == "Honda") {
				sportPrice = 30000000;
				maticPrice = 15000000;
			}
			else if (selectedMerk == "Suzuki") {
				sportPrice = 29000000;
				maticPrice = 14000000;
			}

			if (radioButton1->Checked) {
				textBox2->Text = sportPrice.ToString();
			}
			else if (radioButton2->Checked) {
				textBox2->Text = maticPrice.ToString();
			}
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked) {
			textBox2->Text = maticPrice.ToString();
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Enabled = false;
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox2->SelectedItem != nullptr)
			if(comboBox1->SelectedItem != nullptr) {
			String^ selectedMerk = comboBox1->SelectedItem->ToString();
			String^ selectedPayment = comboBox2->SelectedItem->ToString();
			int diskon = 0;

			if (selectedMerk == "Yamaha") {
				if (selectedPayment == "Tunai") {
					diskon = 20;
				}
				else if (selectedPayment == "Kredit") {
					diskon = 8;
				}
			}
			else if (selectedMerk == "Honda") {
				if (selectedPayment == "Tunai") {
					diskon = 20;
				}
				else if (selectedPayment == "Kredit") {
					diskon = 9;
				}
			}
			else if (selectedMerk == "Suzuki") {
				if (selectedPayment == "Tunai") {
					diskon = 20;
				}
				else if (selectedPayment == "Kredit") {
					diskon = 7;
				}
			}

			textBox3->Text = diskon.ToString();
		}
	}
	private: System::Void textBox3_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		textBox3->Enabled = false;
	}

private:
	int saldo = 50000000; // Saldo awal diubah menjadi variabel global

	void HitungTotal() {
		int harga = Int32::Parse(textBox2->Text);
		int diskon = Int32::Parse(textBox3->Text);
		int totalDiskon = (diskon * harga) / 100;
		int total = harga - totalDiskon;
		int kembalian = saldo - total;

		textBox3->Text = totalDiskon.ToString();
		textBox4->Text = total.ToString();
		textBox5->Text = saldo.ToString(); // Menampilkan saldo pada TextBox5
	}
	private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {
		HitungTotal();
	}
	private: System::Void textBox4_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		textBox4->Enabled = false;
	}

	private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (MessageBox::Show("Yakin Mau Keluar Dari Aplikasi Nich?", "Exit Prompt", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || comboBox1->SelectedItem == nullptr || (radioButton1->Checked == false && radioButton2->Checked == false) || comboBox2->SelectedItem == nullptr) {
			MessageBox::Show("Isi Kolomnya Dong, Biar Programnya Jalan.", "Incomplete Information", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		Form^ loadingForm = gcnew Form();
		loadingForm->Text = "Loading...";
		Label^ loadingLabel = gcnew Label();
		loadingLabel->Text = "Sedang Mencetak Receipt, Mohon Tunggu";
		loadingLabel->AutoSize = true;
		loadingLabel->Location = Point(10, 10);
		loadingForm->Controls->Add(loadingLabel);
		loadingForm->Show();

		for (int i = 0; i < 5; i++) {
			System::Threading::Thread::Sleep(500);


			std::string loadingText = marshal_as<std::string>(loadingLabel->Text);
			loadingText += ".";
			loadingLabel->Text = marshal_as<String^>(loadingText);
			loadingForm->Refresh();
		}

		loadingForm->Close();

		String^ receipt = "   A P L I K A S I  P E N J U A L A N  M O T O R  \n";
		receipt += "========NICOLAUS EVAN WIDYATNA========\n";
		receipt += "===========(21120122140140)============\n";

		receipt += "\nStruk Pembelian Anda.\n";

		receipt += "Tanggal: " + DateTime::Now.ToString() + "\n";
		receipt += "Nama Pembeli: " + textBox1->Text + "\n";
		receipt += "Merk: " + comboBox1->SelectedItem->ToString() + "\n";

		if (radioButton1->Checked) {
			receipt += "Tipe: Sport\n";
		}
		else if (radioButton2->Checked) {
			receipt += "Tipe: Matic\n";
		}
		//receipt += "Uang Anda: Rp." + textBox5->Text + "\n";
		receipt += "Harga Awal: Rp. " + textBox2->Text + "\n";
		int total = Int32::Parse(textBox4->Text); // Mengambil nilai total dari TextBox4
		int kembalian = saldo - total; // Menghitung kembalian
		if (kembalian < 0) {
			MessageBox::Show("Gimana Mau Beli Motor, Kalo Duitnya Kurang .", "Balance Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		receipt += "Metode Pembayaran: " + comboBox2->SelectedItem->ToString() + "\n";
		receipt += "Total Diskon: Rp. " + textBox3->Text + "\n";
		receipt += "Total Pembayaran: Rp. " + textBox4->Text + "\n";
		receipt += "\n===========T E R I M A K A S I H============";
		saldo -= total; // Mengurangi saldo setelah pembelian
		richTextBox1->Text = receipt;
		textBox5->Text = saldo.ToString();

	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->SelectedIndex = -1;
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	textBox2->Text = "";
	textBox1->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	richTextBox1->Text = "";
	richTextBox1->Enabled = true;
	saldo = 50000000;

}
private:		   
		   String^ GetTextBox1Text() {
			   return textBox1->Text;
		   }

		   void SetTextBox1Text(String^ newText) {
			   textBox1->Text = newText;
		   }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = GetTextBox1Text();
}

private: System::Void SomeOtherMethod() {
	SetTextBox1Text("New text value");
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}