#pragma once
#include "Header.h"
#include <string>

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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;











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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
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
			this->dataGridView1->Location = System::Drawing::Point(479, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(570, 294);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
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
			this->button4->Location = System::Drawing::Point(12, 427);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 478);
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
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Bid Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:static bool flag = false;
	public:static bool flag1 = false;
	public:static bool flag2 = false;
	public:static bool flag3 = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Visible = false;
		flag = true;
		button2->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label3->Visible = false;
		flag1 = true;
		button1->Enabled = false;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label4->Visible = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}

	private:System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//double Stavka{ 0 };
		if (num->Text == "") { label4->Visible = true; dataGridView1->Rows->Clear(); }
		else {
			double Stavka = System::Convert::ToDouble(num->Text);
			if ((flag1 == false) && (flag == false)) { label3->Visible = true; }
			if ((flag2 == false) && (flag3 == false)) { label2->Visible = true; }
			if (flag1 == true) {
				/*dataGridView1->Location = System::Drawing::Point(497, 79);
				dataGridView1->RowHeadersWidth = 51;
				dataGridView1->RowTemplate->Height = 24;
				dataGridView1->Size = System::Drawing::Size(570, 294);
				dataGridView1->TabIndex = 6;*/
				Column1->HeaderText = "Рентабельность";
				Column2->HeaderText = "Ставка перевозчика с НДС";
				Column3->HeaderText = "Ставка перевозчика без НДС";
				if (flag2 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(7);
					dataGridView1->Rows[0]->Cells[0]->Value = 35;
					dataGridView1->Rows[0]->Cells[1]->Value = Stavka * (1 - 0.35);
					dataGridView1->Rows[0]->Cells[2]->Value = Stavka * (1 - 0.35) * 1.15;
					size_t j{ 1 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = Stavka * (1 - R / 100.0);
						dataGridView1->Rows[j]->Cells[2]->Value = Stavka * (1 - R / 100.0) * 1.15;
						++j;
					}
				}
				if (flag3 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(7);
					Stavka *= 1.2;
					dataGridView1->Rows[0]->Cells[0]->Value = 35;
					dataGridView1->Rows[0]->Cells[1]->Value = Stavka * (1 - 0.35);
					dataGridView1->Rows[0]->Cells[2]->Value = Stavka * (1 - 0.35) * 1.15;
					size_t j{ 1 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = Stavka * (1 - R / 100.0);
						dataGridView1->Rows[j]->Cells[2]->Value = Stavka * (1 - R / 100.0) * 1.15;
						++j;
					}
				}
			}

			if (flag == true) {
				Column1->HeaderText = "Рентабельность";
				Column2->HeaderText = "Ставка\nзаказчика с\nНДС";
				Column3->HeaderText = "Ставка\nзаказчика без\nНДС";
				if (flag2 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(3);
					/*dataGridView1->Rows[0]->Cells[0]->Value = 25;
					dataGridView1->Rows[0]->Cells[1]->Value = //Stavka * (1 - 0.35);
					dataGridView1->Rows[0]->Cells[2]->Value = //Stavka * (1 - 0.35) * 1.15;*/
					size_t j{ 0 };
					for (size_t R = 25; R >= 10; R -= 5) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = 100 * Stavka / (100.0 - R);
						dataGridView1->Rows[j]->Cells[2]->Value = 100 * Stavka / (1.2 * (100.0 - R));
						++j;
					}
				}
				if (flag3 == true) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(7);
				
					Stavka *= 1.2;
					dataGridView1->Rows[0]->Cells[0]->Value = 35;
					dataGridView1->Rows[0]->Cells[1]->Value = 100 * Stavka / (100.0 - 35.0);
					dataGridView1->Rows[0]->Cells[2]->Value = 100 * Stavka / (1.2 * (100.0 - 35.0));
					size_t j{ 1 };
					for (size_t R = 30; R >= 24; --R) {
						dataGridView1->Rows[j]->Cells[0]->Value = R;
						dataGridView1->Rows[j]->Cells[1]->Value = 100 * Stavka / (100.0 - R);
						dataGridView1->Rows[j]->Cells[2]->Value = 100 * Stavka / (1.2 * (100.0 - R));
						++j;
					}
				}
			}
		}



	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->Visible = false;
	flag2 = true;
	checkBox2->Enabled = false;
	//if (checkBox1->Checked == false) { checkBox2->Enabled = false; }
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label2->Visible = false;
	flag3 = true;
	checkBox1->Enabled = false;
	//if (checkBox2->Checked==false) { checkBox1->Enabled = false; }
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	flag = false;
	flag1 = false;
	flag2 = false; 
	flag3 = false;
	num->Text = "";
	button1->Enabled = true;
	button2->Enabled = true;
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox1->Enabled = true;
	checkBox2->Enabled = true;
	dataGridView1->Rows->Clear();
	//this->dataGridView1->Size = System::Drawing::Size(428, 255);
	//this->dataGridView1->Location = System::Drawing::Point(300, 79);
	this->dataGridView1->RowHeadersWidth = 51;
	this->dataGridView1->RowTemplate->Height = 24;
	this->dataGridView1->Size = System::Drawing::Size(428, 243);
	this->dataGridView1->TabIndex = 6;
	this->Column1->MinimumWidth = 6;
	this->Column1->Width = 125;
	this->Column2->MinimumWidth = 6;
	this->Column2->Width = 125;
	this->Column3->MinimumWidth = 6;
	this->Column3->Width = 125;
}
};
}
