#pragma once

namespace lab1z1 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(194, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Виберіть колір фону і тексту";
		
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(127, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Колір тексту";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(470, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Колір фону";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(112, 204);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(102, 24);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Червоний";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(112, 251);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 24);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Жовтий";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(112, 295);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(93, 24);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Рожевий";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(112, 342);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(93, 24);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Зелений";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(112, 388);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(68, 24);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Синій";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(455, 204);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(113, 24);
			this->radioButton6->TabIndex = 8;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Оранжевий";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(455, 251);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(110, 24);
			this->radioButton7->TabIndex = 9;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Блакитний";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(455, 295);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(93, 24);
			this->radioButton8->TabIndex = 10;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Зелений";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->Location = System::Drawing::Point(455, 342);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(85, 24);
			this->radioButton9->TabIndex = 11;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Жовтий";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton9_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton10->Location = System::Drawing::Point(455, 388);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(102, 24);
			this->radioButton10->TabIndex = 12;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Червоний";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton10_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 539);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Red;
	}
    private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Yellow;
}
    private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Pink;
}
    private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
    private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::DarkBlue;
}
    private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor =Color::Orange;
}

    private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::Blue;
}
    private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::ForestGreen;
}
    private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::Yellow;
}
    private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label1->BackColor = Color::DarkRed;
}
};
}
