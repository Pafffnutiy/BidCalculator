#pragma once
#include <string>
#include <cmath>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ num;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:




	private:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(66, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 88);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчет ставок заказчика";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(247, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 88);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Расчет ставок перевозчика";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// num
			// 
			this->num->Location = System::Drawing::Point(229, 201);
			this->num->Multiline = true;
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(181, 22);
			this->num->TabIndex = 2;
			this->num->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(62, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите ставку";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(247, 274);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 33);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Рассчитать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(480, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(571, 327);
			this->dataGridView1->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(322, 229);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(88, 21);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Без НДС";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(213, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(222, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Выберите один из пунктов!";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(130, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Выберите один из режимов!";
			this->label3->Visible = false;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 621);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 39);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Return";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(226, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Обязательное поле!";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(71, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label 5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(405, 389);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(248, 24);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Расчет рентабельности";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 450);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(235, 20);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Введите ставку заказчика";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(229, 229);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(73, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"С НДС";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(275, 478);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(73, 21);
			this->checkBox3->TabIndex = 17;
			this->checkBox3->Text = L"С НДС";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(368, 478);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(88, 21);
			this->checkBox4->TabIndex = 18;
			this->checkBox4->Text = L"Без НДС";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 450);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 22);
			this->textBox1->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 530);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(318, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Введите ставку перевозчика .с НДС";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(637, 452);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(453, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Рентабельность перевозки при ставке перевозчика";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(409, 611);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 33);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Рассчитать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(253, 501);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 18);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Выберите один из пунктов!";
			this->label7->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(272, 431);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(169, 18);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Обязательное поле!";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 567);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(338, 20);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Введите ставку перевозчика .без НДС";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(368, 567);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 31;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(368, 530);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(181, 22);
			this->textBox4->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(654, 511);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(141, 22);
			this->textBox3->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(910, 511);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(141, 22);
			this->textBox5->TabIndex = 34;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(949, 491);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 17);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Без НДС";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(698, 491);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 17);
			this->label14->TabIndex = 36;
			this->label14->Text = L"С НДС";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(336, 549);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(266, 18);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Введите хотя бы один параметр!";
			this->label15->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"RUS", L"ENG" });
			this->comboBox1->Location = System::Drawing::Point(1065, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(73, 24);
			this->comboBox1->TabIndex = 38;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectedIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 672);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Bid Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:static bool flag = false;
	public:static bool flag1 = false;
	public:static bool flag2 = false;
	public:static bool flag3 = false;
	public:static bool flag4 = false;
	public:static bool flag5 = false;
	public:static bool flag6 = false;
	public:static bool flag7 = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Visible = false;
		flag = true;
		button2->Enabled = false;
		label5->Visible = true;
		if (comboBox1->SelectedIndex == 0) { label5->Text = "перевозчика"; }
		else { label5->Text = "of carrier"; }
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Visible = false;
		flag1 = true;
		button1->Enabled = false;
		label5->Visible = true;
		if (comboBox1->SelectedIndex == 0) { label5->Text = "заказчика"; }
		else { label5->Text = "of customer"; }
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label4->Visible = false;
	}
	private:System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (num->Text == "") { label4->Visible = true; dataGridView1->Rows->Clear(); }
		else {
			double Stavka = System::Convert::ToDouble(num->Text);
			if ((flag1 == false) && (flag == false)) { label3->Visible = true; }
			if ((flag2 == false) && (flag3 == false)) { label2->Visible = true; }
			if (flag1 == true) {
				if (comboBox1->SelectedIndex == 0) {
					Column1->HeaderText = "Рентабельность";
					Column2->HeaderText = "Ставка перевозчика без НДС";
					Column3->HeaderText = "Ставка перевозчика с НДС";
				} else {
					Column1->HeaderText = "Profitability";
					Column2->HeaderText = "Carrier's bid without VAT";
					Column3->HeaderText = "Carrier's bid with VAT";
				}
				if (flag2 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(8);
					dataGridView1->Rows[0]->Cells[0]->Value = 40;
					dataGridView1->Rows[0]->Cells[1]->Value = std::round(Stavka * (1 - 0.4));
					dataGridView1->Rows[0]->Cells[2]->Value = std::round(Stavka * (1 - 0.4) * 1.15);
					dataGridView1->Rows[1]->Cells[0]->Value = 35;
					dataGridView1->Rows[1]->Cells[1]->Value = std::round(Stavka * (1 - 0.35));
					dataGridView1->Rows[1]->Cells[2]->Value = std::round(Stavka * (1 - 0.35) * 1.15);
					size_t j{ 2 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = std::round(Stavka * (1 - R / 100.0));
						dataGridView1->Rows[j]->Cells[2]->Value = std::round(Stavka * (1 - R / 100.0) * 1.15);
						++j;
					}
				}
				if (flag3 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(8);
					Stavka *= 1.2;
					dataGridView1->Rows[0]->Cells[0]->Value = 40;
					dataGridView1->Rows[0]->Cells[1]->Value = std::round(Stavka * (1 - 0.4));
					dataGridView1->Rows[0]->Cells[2]->Value = std::round(Stavka * (1 - 0.4) * 1.15);	
					dataGridView1->Rows[1]->Cells[0]->Value = 35;
					dataGridView1->Rows[1]->Cells[1]->Value = std::round(Stavka * (1 - 0.35));
					dataGridView1->Rows[1]->Cells[2]->Value = std::round(Stavka * (1 - 0.35) * 1.15);
					size_t j{ 2 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = std::round(Stavka * (1 - R / 100.0));
						dataGridView1->Rows[j]->Cells[2]->Value = std::round(Stavka * (1 - R / 100.0) * 1.15);
						++j;
					}
				}
			}

			if (flag == true) {
				if (comboBox1->SelectedIndex == 0) {
					Column1->HeaderText = "Рентабельность";
					Column2->HeaderText = "Ставка\nзаказчика с\nНДС";
					Column3->HeaderText = "Ставка\nзаказчика без\nНДС";
				} else {
					Column1->HeaderText = "Profitability";
					Column2->HeaderText = "Customer's bid with VAT";
					Column3->HeaderText = "Customer's bid without VAT";
				}
				if (flag2 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(6);
					size_t j{ 0 };
					for (size_t R = 40; R >= 10; R -= 5) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = std::round(100 * Stavka / (1.2 * (100.0 - R))); 
						dataGridView1->Rows[j]->Cells[2]->Value = std::round((100 * Stavka / (1.44*(100.0 - R))));
						++j;
					}
				}
				if (flag3 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(8);
					dataGridView1->Rows[0]->Cells[0]->Value = 40;
					dataGridView1->Rows[0]->Cells[1]->Value = std::round(100 * Stavka / (100.0 - 40.0));
					dataGridView1->Rows[0]->Cells[2]->Value = std::round(100 * Stavka / (1.2 * (100.0 - 40.0)));
					dataGridView1->Rows[1]->Cells[0]->Value = 35;
					dataGridView1->Rows[1]->Cells[1]->Value = std::round(100 * Stavka / (100.0 - 35.0));
					dataGridView1->Rows[1]->Cells[2]->Value = std::round(100 * Stavka / (1.2 * (100.0 - 35.0)));
					size_t j{ 2 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value =std::round(100 * Stavka / (100.0 - R));
						dataGridView1->Rows[j]->Cells[2]->Value =std::round(100 * Stavka / (1.2 * (100.0 - R)));
						++j;
					}
				}
			}
		}



	}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked == true) {
		label2->Visible = false;
		flag2 = true;
		checkBox2->Enabled = false;
	}
	if (checkBox1->Checked == false) { checkBox2->Enabled = true; flag2 = false; }
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked == true) {
		label2->Visible = false;
		flag3 = true;
		checkBox1->Enabled = false;
	}

	if (checkBox2->Checked==false) { checkBox1->Enabled = true; flag3 = false;}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	flag = false;
	flag1 = false;
	flag2 = false; 
	flag3 = false;
	flag4 = false;
	flag5 = false;
	flag6 = false;
	flag7 = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label7->Visible = false;
	label12->Visible = false;
	label15->Visible = false;
	Column2->HeaderText = "Column2";
	Column3->HeaderText = "Column3";
	num->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	button1->Enabled = true;
	button2->Enabled = true;
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox1->Enabled = true;
	checkBox2->Enabled = true;
	checkBox3->Enabled = true;
	checkBox4->Enabled = true;
	dataGridView1->Rows->Clear();
	//this->dataGridView1->Size = System::Drawing::Size(428, 255);
	//this->dataGridView1->Location = System::Drawing::Point(300, 79);
	this->dataGridView1->RowHeadersWidth = 51;
	this->dataGridView1->RowTemplate->Height = 24;
	this->dataGridView1->Size = System::Drawing::Size(428, 266);
	this->dataGridView1->TabIndex = 6;
	this->Column1->MinimumWidth = 6;
	this->Column1->Width = 125;
	this->Column2->MinimumWidth = 6;
	this->Column2->Width = 125;
	this->Column3->MinimumWidth = 6;
	this->Column3->Width = 125;
	label5->Visible = false;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked == true) {
		flag4 = true;
		checkBox4->Enabled = false;
		label7->Visible = false;
	}
	else{ checkBox4->Enabled = true; flag4 = false; }
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked == true) {
		flag5 = true;
		checkBox3->Enabled = false;
		label7->Visible = false;
	}
	else { checkBox3->Enabled = true; flag5 = false; }
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label15->Visible = false;
	double StavkaZakazchika{ -1.0 };
	double StavkaPerevozchikaC{ 0.0 };
	double StavkaPerevozchikaBez{ 0.0 };
	if (textBox1->Text == "") { label12->Visible = true; }
	else { StavkaZakazchika = System::Convert::ToDouble(textBox1->Text); }

	if ((flag4 == false) && (flag5 == false)) { label7->Visible = true; }

	if (textBox4->Text != "") { StavkaPerevozchikaC = System::Convert::ToDouble(textBox4->Text); }

	if (textBox2->Text != "") { StavkaPerevozchikaBez = System::Convert::ToDouble(textBox2->Text); }

	if ((textBox2->Text == "") && (textBox4->Text == "")) { label15->Visible = true; }

	if (flag5 == true) { StavkaZakazchika *= 1.2; }

	double Rentabelnost1{ (StavkaZakazchika - StavkaPerevozchikaBez)/ StavkaZakazchika * 100 };
	double Rentabelnost2{ (StavkaZakazchika - StavkaPerevozchikaC) / StavkaZakazchika * 100 };

	if (Rentabelnost1 == 100) {
		if (comboBox1->SelectedIndex == 0) { textBox5->Text = "Параметр не задан"; }
		else { textBox5->Text = "Parameter not given"; }
	}
	else{ textBox5->Text = "              " + System::Convert::ToString(std::round(Rentabelnost1))+"%"; }

	if (Rentabelnost2 == 100) {
		if (comboBox1->SelectedIndex == 0) { textBox3->Text = "Параметр не задан"; }
		else { textBox3->Text = "Parameter not given"; }
	}
	else { textBox3->Text = "              "+System::Convert::ToString(std::round(Rentabelnost2))+"%"; }

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->SelectedIndex == 1) {
		if (Column2->HeaderText == "Ставка\nзаказчика с\nНДС") { Column2->HeaderText = "Customer's bid with VAT"; }
		if (Column3->HeaderText == "Ставка\nзаказчика без\nНДС") { Column3->HeaderText = "Customer's bid without VAT"; }
		if (Column2->HeaderText == "Ставка перевозчика без НДС") {Column2->HeaderText = "Carrier's bid without VAT"; }
		if (Column3->HeaderText == "Ставка перевозчика с НДС") { Column3->HeaderText = "Carrier's bid with VAT"; }
		if (Column1->HeaderText == "Рентабельность") { Column1->HeaderText = "Profitability"; }
		if (textBox3->Text == "Параметр не задан") { textBox3->Text = "Parameter not given"; }
		if (textBox5->Text == "Параметр не задан") { textBox5->Text = "Parameter not given"; }
		button1 -> Text = "Calculation of customer's bids";
		button2 -> Text = "Calculation of carrier's bids";
		label3->Text = "Select one of the modes!";
		label7->Text = "select one of the following options!";
		label2->Text = "select one of the following options!";
		label1->Text = "Enter bid";
		label4->Text = "Required field!";
		label12->Text = "Required field!";
		checkBox1->Text = "With VAT";
		checkBox2->Text = "Without VAT";
		checkBox3->Text = "With VAT";
		checkBox4->Text = "Without VAT";
		label13->Text = "Without VAT";
		label14->Text = "With VAT";
		label6->Text = "Сalculation of profitability";
		label8->Text = "Enter the customer's bid";
		label9->Text = "Enter the carrier's rate with VAT";
		label11->Text = "Enter the carrier's rate without VAT";
		label10->Text = "Profitability of transportation at the carrier's bid";
		button3->Text = "Calculate";
		button5->Text = "Calculate";
		label15->Text = "Enter at least one parameter!";
		if (flag1 == true) { label5->Text = "of customer"; }
		if (flag == true) { label5->Text = "of carrier"; }
	}
	if (comboBox1->SelectedIndex == 0) {

		if (Column2->HeaderText == "Customer's bid with VAT") { Column2->HeaderText = "Ставка\nзаказчика с\nНДС"; }
		if (Column3->HeaderText == "Customer's bid without VAT") { Column3->HeaderText = "Ставка\nзаказчика без\nНДС"; }
		if (Column2->HeaderText == "Carrier's bid without VAT") { Column2->HeaderText = "Ставка перевозчика без НДС"; }
		if (Column3->HeaderText == "Carrier's bid with VAT") { Column3->HeaderText = "Ставка перевозчика с НДС"; }
		if (Column1->HeaderText == "Profitability") { Column1->HeaderText = "Рентабельность"; }
		if (textBox3->Text == "Parameter not given") { textBox3->Text = "Параметр не задан"; }
		if (textBox5->Text == "Parameter not given") { textBox5->Text = "Параметр не задан"; }
		button1 -> Text = "Расчет ставок заказчика";
		button2 -> Text = "Расчет ставок перевозчика";
		label3->Text = "Выберите один из режимов!";
		label7->Text = "Выберите один из пунктов!";
		label2->Text = "Выберите один из пунктов!";
		label1->Text = "Введите ставку";
		label4->Text = "Обязательное поле!";
		label12->Text = "Обязательное поле!";
		checkBox1->Text = "С НДС";
		checkBox2->Text = "Без НДС";
		checkBox3->Text = "С НДС";
		checkBox4->Text = "Без НДС";
		label13->Text = "Без НДС";
		label14->Text = "С НДС";
		label6->Text = "Расчет рентабельности";
		label8->Text = "Введите ставку заказчика";
		label9->Text = "Введите ставку перевозчика с НДС";
		label11->Text = "Введите ставку перевозчика без НДС";
		label10->Text = "Рентабельность перевозки при ставке перевозчика";
		button3->Text = "Рассчитать";
		button5->Text = "Рассчитать";
		label15->Text = "Введите хотя бы один параметр!";
		if (flag1 == true) { label5->Text = "заказчика"; }
		if (flag == true) { label5->Text = "перевозчика"; }
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
