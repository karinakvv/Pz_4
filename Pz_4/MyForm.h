#pragma once
#include<math.h>
#include <cstdlib>
#include<ctime>
#include<random>
int a[100];
int n, i;
double sum = 0;
namespace Pz4 {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"������ ������� �������� ������ n=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(69, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"������ ����������� ������:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(69, 359);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(562, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"������ ����������� �������� ������ � �������� ���������: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(385, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(349, 322);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(222, 406);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(299, 22);
			this->textBox4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(265, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"��������� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(50, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"�����:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(402, 242);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 43);
			this->button3->TabIndex = 10;
			this->button3->Text = L"��������� ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 542);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		n = Convert::ToDouble(textBox1->Text);
		textBox2->Clear();
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 101 - 50;
			textBox2->AppendText(a[i] + " ; ");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double ser;
	textBox3->Clear();
		for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	ser = sum / n;
	textBox3->AppendText(Convert::ToString(ser));
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double ser2;
	double s = 0, k = 0;
	textBox4->Clear();
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			s += a[i];
			k += 1;
		}
	ser2 = s / k;	
	}
	
	textBox4->AppendText(Convert::ToString(ser2));
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
