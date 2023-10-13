#pragma once

namespace form1 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(2, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(278, 41);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(69, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(36, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(12, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(36, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"4";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(69, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(36, 33);
			this->button4->TabIndex = 4;
			this->button4->Text = L"5";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(129, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(36, 33);
			this->button5->TabIndex = 5;
			this->button5->Text = L"6";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(129, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(36, 33);
			this->button6->TabIndex = 6;
			this->button6->Text = L"3";
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(12, 165);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(36, 33);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(69, 165);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(36, 33);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(129, 165);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(36, 33);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(12, 216);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(36, 33);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(69, 216);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(96, 33);
			this->button11->TabIndex = 11;
			this->button11->Text = L"00";
			this->button11->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Enternum);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button12->Location = System::Drawing::Point(236, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(36, 33);
			this->button12->TabIndex = 12;
			this->button12->Text = L"C";
			this->button12->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::clear);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button13->Location = System::Drawing::Point(180, 115);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(36, 33);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::operators);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button14->Location = System::Drawing::Point(236, 115);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(36, 33);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::operators);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button15->Location = System::Drawing::Point(180, 165);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(36, 33);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::operators);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button16->Location = System::Drawing::Point(236, 165);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(36, 33);
			this->button16->TabIndex = 16;
			this->button16->Text = L"/";
			this->button16->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::operators);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button17->Location = System::Drawing::Point(180, 216);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(36, 33);
			this->button17->TabIndex = 17;
			this->button17->Text = L"%";
			this->button17->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::operators);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button18->Location = System::Drawing::Point(236, 216);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(36, 33);
			this->button18->TabIndex = 18;
			this->button18->Text = L"=";
			this->button18->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::re);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button19->Location = System::Drawing::Point(180, 65);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(36, 33);
			this->button19->TabIndex = 19;
			this->button19->Text = L"AC";
			this->button19->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::backclear);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double val1, val2 , result;
		String^ ope;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Enternum(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0") {
		textBox1->Text = Numbers->Text;
	}

	else {
		textBox1->Text = textBox1->Text + Numbers->Text;
	}

}
private: System::Void operators(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numberope = safe_cast<Button^>(sender);
	val1 = Double::Parse(textBox1->Text);
	textBox1->Text  = "";
	ope = Numberope->Text;

}
private: System::Void re(System::Object^ sender, System::EventArgs^ e) {
	val2 = Double::Parse(textBox1->Text);
	if (ope == "+") {
		result = val1 + val2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (ope == "-") {
		result = val1 - val2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (ope == "*") {
		result = val1 * val2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (ope == "/") {
		result = val1 / val2;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (ope == "%") {
		result = val1 / 100;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void backclear(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0){ 
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void clear(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";

}
};
}
