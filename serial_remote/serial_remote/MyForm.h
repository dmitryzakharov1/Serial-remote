#pragma once

namespace serial_remote {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int servo1pos;
		int servo2pos;
		int servo3pos;
		bool nonNumberEntered;

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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;

	private: System::ComponentModel::IContainer^  components;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 393);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����� 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(98, 325);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 46);
			this->label7->TabIndex = 6;
			this->label7->Text = L"_";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 80);
			this->button2->TabIndex = 5;
			this->button2->Text = L"���� (A)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 80);
			this->button1->TabIndex = 4;
			this->button1->Text = L"����� (Q)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 38);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"70";
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"��";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 38);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"40";
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(255, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 393);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"����� 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(94, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 46);
			this->label8->TabIndex = 7;
			this->label8->Text = L"_";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 80);
			this->button3->TabIndex = 5;
			this->button3->Text = L"���� (S)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 144);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"����� (W)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(126, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 38);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"70";
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox3_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"��";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(126, 38);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 38);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"40";
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox4_KeyDown);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"��";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(498, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 393);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"����� 3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(98, 325);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 46);
			this->label9->TabIndex = 7;
			this->label9->Text = L"_";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(7, 231);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 80);
			this->button5->TabIndex = 5;
			this->button5->Text = L"���� (D)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(7, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 80);
			this->button6->TabIndex = 4;
			this->button6->Text = L"����� (E)";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(126, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 38);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"70";
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox5_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 32);
			this->label5->TabIndex = 2;
			this->label5->Text = L"��";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(126, 38);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 38);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"40";
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox6_KeyDown);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L"��";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 477);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(722, 210);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 425);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(215, 32);
			this->label10->TabIndex = 4;
			this->label10->Text = L"����� �������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(747, 699);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"��������/��������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void printtoserial() {
			String^ answer;
			SerialPort^ arduino;
			arduino = gcnew SerialPort("COM3", 9600);
			// open port
			arduino->Open();
			arduino->WriteLine(servo1pos + " " + servo2pos + " " + servo3pos); // send to arduino
			answer = arduino->ReadLine();
			richTextBox1->Text = answer + Environment::NewLine;
			// close port to arduino
			arduino->Close();
			
}

void keycheck(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//�������� �� ���� �� �������� �������� � ��������� ����
	// Initialize the flag to false.
	nonNumberEntered = false;

	// Determine whether the keystroke is a number from the top of the keyboard.
	if (e->KeyCode < Keys::D0 || e->KeyCode > Keys::D9)
	{
		// Determine whether the keystroke is a number from the keypad.
		if (e->KeyCode < Keys::NumPad0 || e->KeyCode > Keys::NumPad9)
		{
			// Determine whether the keystroke is a backspace.
			if (e->KeyCode != Keys::Back)
			{
				// A non-numerical keystroke was pressed.
				// Set the flag to true and evaluate in KeyPress event.
				nonNumberEntered = true;

			}
		}
	}
	//If shift key was pressed, it's not a number.
	if (Control::ModifierKeys == Keys::Shift) {
		nonNumberEntered = true;
	}

}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->KeyPreview = true;
		//����� 1 �����
		if (servo1pos > Convert::ToInt32(textBox2->Text)) { return; }
		servo1pos++;
		printtoserial();
		label7->Text = Convert::ToString(servo1pos);
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//��������� �������� ���������� ������� �������������
	servo1pos = Convert::ToInt32(textBox1->Text);
	servo2pos = Convert::ToInt32(textBox4->Text);
	servo3pos = Convert::ToInt32(textBox6->Text);
	label7->Text = Convert::ToString(servo1pos);
	label8->Text = Convert::ToString(servo2pos);
	label9->Text = Convert::ToString(servo3pos);

	this->KeyPreview = true;

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//����� 1 ����
	if (servo1pos > Convert::ToInt32(textBox1->Text))
	{
		servo1pos--;
		printtoserial();
		label7->Text = Convert::ToString(servo1pos);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//����� 2 �����
	if (servo2pos < Convert::ToInt32(textBox3->Text)) {
		servo2pos++;
		printtoserial();
		label8->Text = Convert::ToString(servo2pos);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//����� 2 ����
	if (servo2pos > Convert::ToInt32(textBox4->Text)) {
		servo2pos--;
		printtoserial();
		label8->Text = Convert::ToString(servo2pos);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//����� 3 �����
	if (servo3pos < Convert::ToInt32(textBox5->Text)) {
		servo3pos++;
		printtoserial();
		label9->Text = Convert::ToString(servo3pos);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//����� 3 ����
	if (servo3pos > Convert::ToInt32(textBox6->Text)) {
		servo3pos--;
		printtoserial();
		label9->Text = Convert::ToString(servo3pos);
	}
}

private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//���������� ������� ������

	// Initialize the flag to false.
	nonNumberEntered = false;

	//����� 1 �����
	if (e->KeyCode == Keys::Q) {
		button1_Click(sender, e);
	}

	//����� 1 ����
	if (e->KeyCode == Keys::A) {
		button2_Click(sender, e);
	}

	//����� 2 �����
	if (e->KeyCode == Keys::W) {
		button4_Click(sender, e);
	}

	//����� 2 ����
	if (e->KeyCode == Keys::S) {
		button3_Click(sender, e);
	}

	//����� 3 �����
	if (e->KeyCode == Keys::E) {
		button6_Click(sender, e);
	}

	//����� 3 ����
	if (e->KeyCode == Keys::D) {
		button5_Click(sender, e);
	}

}

private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Check for the flag being set in the KeyDown event.
	if (nonNumberEntered == true)
	{         // Stop the character from being entered into the control since it is non-numerical.
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	keycheck(sender, e);
}
};
}
