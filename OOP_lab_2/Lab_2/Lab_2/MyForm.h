#pragma once

namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			InitializeComponent();
		
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: Bitmap^ imgData;
	private: String^ path;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{	
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 326);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Image files|*.BMP;*.JPG;*.GIF|All|*.*";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(538, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"load picture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(528, 151);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Red only";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(528, 180);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Green only";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(528, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Blue Only";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(528, 238);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Monochromatic";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(528, 315);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(96, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"White/Black";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(528, 122);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(96, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Make normal";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(528, 289);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(525, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Threshold[0-255]:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 350);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog()) {
			path = openFileDialog1->FileName;
			
				imgData = gcnew Bitmap(path);
				pictureBox1->Image = imgData;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		for (size_t i = 0; i <imgData->Width; i++)
		{
			for (size_t j = 0; j < imgData->Height; j++)
			{
				Color pixelColor = imgData->GetPixel(i, j);
				Color color = Color::FromArgb(pixelColor.R, 0, 0);
				imgData->SetPixel(i, j, color);
			}
		}
		pictureBox1->Image = imgData;
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	for (size_t i = 0; i < imgData->Width; i++)
	{
		for (size_t j = 0; j < imgData->Height; j++)
		{
			Color pixelColor = imgData->GetPixel(i, j);
			Color color = Color::FromArgb(0, pixelColor.G, 0);
			imgData->SetPixel(i, j, color);
		}
	}
	pictureBox1->Image = imgData;
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (size_t i = 0; i < imgData->Width; i++)
	{
		for (size_t j = 0; j < imgData->Height; j++)
		{
			Color pixelColor = imgData->GetPixel(i, j);
			Color color = Color::FromArgb(0,0, pixelColor.B);
			imgData->SetPixel(i, j, color);
		}
	}
	pictureBox1->Image = imgData;
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for (size_t i = 0; i < imgData->Width; i++)
	{
		for (size_t j = 0; j < imgData->Height; j++)
		{
			Color pixelColor = imgData->GetPixel(i, j);
			int avg = (pixelColor.R + pixelColor.G + pixelColor.B)/3;
			Color color = Color::FromArgb(avg,avg,avg);
			imgData->SetPixel(i, j, color);
		}
	}
	pictureBox1->Image = imgData;
}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	imgData = gcnew Bitmap(path);
	pictureBox1->Image = imgData;
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int threshold = Convert::ToInt32(textBox1->Text);
	for (size_t i = 0; i < imgData->Width; i++)
	{
		for (size_t j = 0; j < imgData->Height; j++)
		{
			Color pixelColor = imgData->GetPixel(i, j);
			int avg = (pixelColor.R + pixelColor.G + pixelColor.B) / 3;
			Color color;
			if (avg >= threshold) {
				 color = Color::FromArgb(255,255,255);
			}
			else {
				 color = Color::FromArgb(0, 0, 0);
			}
			
			imgData->SetPixel(i, j, color);
		}
	}
	pictureBox1->Image = imgData;
}
};
}
