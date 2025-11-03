#pragma once

namespace calculator
{
	using namespace System;
	using namespace System::IO;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_1;
	protected:

	private: System::Windows::Forms::Button^ Btn_2;
	protected:

	private: System::Windows::Forms::Button^ Btn_5;
	private: System::Windows::Forms::Button^ Btn_4;



	private: System::Windows::Forms::Button^ Btn_6;

	private: System::Windows::Forms::Button^ Btn_3;
	private: System::Windows::Forms::Button^ Btn_9;
	private: System::Windows::Forms::Button^ Btn_8;
	private: System::Windows::Forms::Button^ Btn_7;





	private: System::Windows::Forms::Button^ Btn_dot;
	private: System::Windows::Forms::Button^ Btn_0;

	private: System::Windows::Forms::Button^ Btn_sign;


	private: System::Windows::Forms::Button^ Btn_equals;
	private: System::Windows::Forms::Button^ Btn_multiply;

	private: System::Windows::Forms::Button^ Btn_minus;

	private: System::Windows::Forms::Button^ Btn_plus;
	private: System::Windows::Forms::Button^ Btn_divide;
	private: System::Windows::Forms::Button^ Btn_sqr;
	private: System::Windows::Forms::Button^ Btn_sqrt;
	private: System::Windows::Forms::Button^ Btn_erase;
	private: System::Windows::Forms::Button^ Btn_CE;

	private: System::Windows::Forms::Button^ Btn_C;
	private: System::Windows::Forms::TextBox^ Text2;
	private: System::Windows::Forms::Button^ Btn_memory_substract;



	private: System::Windows::Forms::Button^ Btn_memory_add;
	private: System::Windows::Forms::Button^ Btn_memory_save;



	private: System::Windows::Forms::Button^ Btn_memory_recall;
	private: System::Windows::Forms::Button^ Btn_memory_clear;


	private: System::Windows::Forms::Button^ Btn_clearMemory;
	private: System::Windows::Forms::TextBox^ MemoryText0;










	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ mc;
	private: System::Windows::Forms::Button^ Btn_MC_real;
	private: System::Windows::Forms::TextBox^ MemoryText1;
	private: System::Windows::Forms::TextBox^ MemoryText2;
	private: System::Windows::Forms::TextBox^ MemoryText3;
	private: System::Windows::Forms::TextBox^ MemoryText4;
	private: System::Windows::Forms::TextBox^ MemoryText5;
	private: System::Windows::Forms::TextBox^ MemoryText6;
	private: System::Windows::Forms::TextBox^ MemoryText7;
	private: System::Windows::Forms::TextBox^ MemoryText8;
	private: System::Windows::Forms::TextBox^ MemoryText9;









	private: System::Windows::Forms::MaskedTextBox^ Text1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::Button^ MemorySelect0;
private: System::Windows::Forms::Button^ MemorySelect1;
private: System::Windows::Forms::Button^ MemorySelect2;
private: System::Windows::Forms::Button^ MemorySelect3;
private: System::Windows::Forms::Button^ MemorySelect4;
private: System::Windows::Forms::Button^ MemorySelect5;
private: System::Windows::Forms::Button^ MemorySelect6;
private: System::Windows::Forms::Button^ MemorySelect7;
private: System::Windows::Forms::Button^ MemorySelect8;
private: System::Windows::Forms::Button^ MemorySelect9;
private: System::Windows::Forms::ComboBox^ NumberSystemBox;
private: System::Windows::Forms::Button^ Btn_A;
private: System::Windows::Forms::Button^ Btn_B;
private: System::Windows::Forms::Button^ Btn_D;

private: System::Windows::Forms::Button^ Btn_C_Digit;
private: System::Windows::Forms::Button^ Btn_H;
private: System::Windows::Forms::Button^ Btn_G;
private: System::Windows::Forms::Button^ Btn_F;
private: System::Windows::Forms::Button^ Btn_E;
private: System::Windows::Forms::Button^ Btn_P;

private: System::Windows::Forms::Button^ Btn_O;

private: System::Windows::Forms::Button^ Btn_N;

private: System::Windows::Forms::Button^ Btn_M;

private: System::Windows::Forms::Button^ Btn_L;

private: System::Windows::Forms::Button^ Btn_K;

private: System::Windows::Forms::Button^ Btn_J;

private: System::Windows::Forms::Button^ Btn_I;
private: System::Windows::Forms::Button^ Btn_X;


private: System::Windows::Forms::Button^ Btn_W;

private: System::Windows::Forms::Button^ Btn_V;

private: System::Windows::Forms::Button^ Btn_U;

private: System::Windows::Forms::Button^ Btn_T;

private: System::Windows::Forms::Button^ Btn_S;

private: System::Windows::Forms::Button^ Btn_R;

private: System::Windows::Forms::Button^ Btn_Q;
private: System::Windows::Forms::Button^ Btn_Z;


private: System::Windows::Forms::Button^ Btn_Y;
private: System::Windows::Forms::Button^ Btn_SqrNeg1;
private: System::Windows::Forms::Button^ Btn_power;



















	private: System::ComponentModel::IContainer^ components;









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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->Btn_1 = (gcnew System::Windows::Forms::Button());
			this->Btn_2 = (gcnew System::Windows::Forms::Button());
			this->Btn_5 = (gcnew System::Windows::Forms::Button());
			this->Btn_4 = (gcnew System::Windows::Forms::Button());
			this->Btn_6 = (gcnew System::Windows::Forms::Button());
			this->Btn_3 = (gcnew System::Windows::Forms::Button());
			this->Btn_9 = (gcnew System::Windows::Forms::Button());
			this->Btn_8 = (gcnew System::Windows::Forms::Button());
			this->Btn_7 = (gcnew System::Windows::Forms::Button());
			this->Btn_dot = (gcnew System::Windows::Forms::Button());
			this->Btn_0 = (gcnew System::Windows::Forms::Button());
			this->Btn_sign = (gcnew System::Windows::Forms::Button());
			this->Btn_equals = (gcnew System::Windows::Forms::Button());
			this->Btn_multiply = (gcnew System::Windows::Forms::Button());
			this->Btn_minus = (gcnew System::Windows::Forms::Button());
			this->Btn_plus = (gcnew System::Windows::Forms::Button());
			this->Btn_divide = (gcnew System::Windows::Forms::Button());
			this->Btn_sqr = (gcnew System::Windows::Forms::Button());
			this->Btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->Btn_erase = (gcnew System::Windows::Forms::Button());
			this->Btn_CE = (gcnew System::Windows::Forms::Button());
			this->Btn_C = (gcnew System::Windows::Forms::Button());
			this->Text2 = (gcnew System::Windows::Forms::TextBox());
			this->Btn_memory_substract = (gcnew System::Windows::Forms::Button());
			this->Btn_memory_add = (gcnew System::Windows::Forms::Button());
			this->Btn_memory_save = (gcnew System::Windows::Forms::Button());
			this->Btn_memory_recall = (gcnew System::Windows::Forms::Button());
			this->Btn_memory_clear = (gcnew System::Windows::Forms::Button());
			this->MemoryText0 = (gcnew System::Windows::Forms::TextBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->mc = (gcnew System::Windows::Forms::PictureBox());
			this->Btn_MC_real = (gcnew System::Windows::Forms::Button());
			this->MemoryText1 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText2 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText3 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText4 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText5 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText6 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText7 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText8 = (gcnew System::Windows::Forms::TextBox());
			this->MemoryText9 = (gcnew System::Windows::Forms::TextBox());
			this->Text1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->MemorySelect0 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect1 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect2 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect3 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect4 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect5 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect6 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect7 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect8 = (gcnew System::Windows::Forms::Button());
			this->MemorySelect9 = (gcnew System::Windows::Forms::Button());
			this->NumberSystemBox = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_A = (gcnew System::Windows::Forms::Button());
			this->Btn_B = (gcnew System::Windows::Forms::Button());
			this->Btn_D = (gcnew System::Windows::Forms::Button());
			this->Btn_C_Digit = (gcnew System::Windows::Forms::Button());
			this->Btn_H = (gcnew System::Windows::Forms::Button());
			this->Btn_G = (gcnew System::Windows::Forms::Button());
			this->Btn_F = (gcnew System::Windows::Forms::Button());
			this->Btn_E = (gcnew System::Windows::Forms::Button());
			this->Btn_P = (gcnew System::Windows::Forms::Button());
			this->Btn_O = (gcnew System::Windows::Forms::Button());
			this->Btn_N = (gcnew System::Windows::Forms::Button());
			this->Btn_M = (gcnew System::Windows::Forms::Button());
			this->Btn_L = (gcnew System::Windows::Forms::Button());
			this->Btn_K = (gcnew System::Windows::Forms::Button());
			this->Btn_J = (gcnew System::Windows::Forms::Button());
			this->Btn_I = (gcnew System::Windows::Forms::Button());
			this->Btn_X = (gcnew System::Windows::Forms::Button());
			this->Btn_W = (gcnew System::Windows::Forms::Button());
			this->Btn_V = (gcnew System::Windows::Forms::Button());
			this->Btn_U = (gcnew System::Windows::Forms::Button());
			this->Btn_T = (gcnew System::Windows::Forms::Button());
			this->Btn_S = (gcnew System::Windows::Forms::Button());
			this->Btn_R = (gcnew System::Windows::Forms::Button());
			this->Btn_Q = (gcnew System::Windows::Forms::Button());
			this->Btn_Z = (gcnew System::Windows::Forms::Button());
			this->Btn_Y = (gcnew System::Windows::Forms::Button());
			this->Btn_SqrNeg1 = (gcnew System::Windows::Forms::Button());
			this->Btn_power = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mc))->BeginInit();
			this->SuspendLayout();
			// 
			// Btn_1
			// 
			this->Btn_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_1->Location = System::Drawing::Point(12, 449);
			this->Btn_1->Name = L"Btn_1";
			this->Btn_1->Size = System::Drawing::Size(80, 80);
			this->Btn_1->TabIndex = 28;
			this->Btn_1->TabStop = false;
			this->Btn_1->Text = L"1";
			this->Btn_1->UseVisualStyleBackColor = false;
			this->Btn_1->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_2
			// 
			this->Btn_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_2->Location = System::Drawing::Point(98, 449);
			this->Btn_2->Name = L"Btn_2";
			this->Btn_2->Size = System::Drawing::Size(80, 80);
			this->Btn_2->TabIndex = 27;
			this->Btn_2->TabStop = false;
			this->Btn_2->Text = L"2";
			this->Btn_2->UseVisualStyleBackColor = false;
			this->Btn_2->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_5
			// 
			this->Btn_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_5->Location = System::Drawing::Point(98, 363);
			this->Btn_5->Name = L"Btn_5";
			this->Btn_5->Size = System::Drawing::Size(80, 80);
			this->Btn_5->TabIndex = 25;
			this->Btn_5->TabStop = false;
			this->Btn_5->Text = L"5";
			this->Btn_5->UseVisualStyleBackColor = false;
			this->Btn_5->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_4
			// 
			this->Btn_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_4->Location = System::Drawing::Point(12, 363);
			this->Btn_4->Name = L"Btn_4";
			this->Btn_4->Size = System::Drawing::Size(80, 80);
			this->Btn_4->TabIndex = 26;
			this->Btn_4->TabStop = false;
			this->Btn_4->Text = L"4";
			this->Btn_4->UseVisualStyleBackColor = false;
			this->Btn_4->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_6
			// 
			this->Btn_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_6->Location = System::Drawing::Point(184, 363);
			this->Btn_6->Name = L"Btn_6";
			this->Btn_6->Size = System::Drawing::Size(80, 80);
			this->Btn_6->TabIndex = 23;
			this->Btn_6->TabStop = false;
			this->Btn_6->Text = L"6";
			this->Btn_6->UseVisualStyleBackColor = false;
			this->Btn_6->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_3
			// 
			this->Btn_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_3->Location = System::Drawing::Point(184, 449);
			this->Btn_3->Name = L"Btn_3";
			this->Btn_3->Size = System::Drawing::Size(80, 80);
			this->Btn_3->TabIndex = 24;
			this->Btn_3->TabStop = false;
			this->Btn_3->Text = L"3";
			this->Btn_3->UseVisualStyleBackColor = false;
			this->Btn_3->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_9
			// 
			this->Btn_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_9->Location = System::Drawing::Point(184, 277);
			this->Btn_9->Name = L"Btn_9";
			this->Btn_9->Size = System::Drawing::Size(80, 80);
			this->Btn_9->TabIndex = 20;
			this->Btn_9->TabStop = false;
			this->Btn_9->Text = L"9";
			this->Btn_9->UseVisualStyleBackColor = false;
			this->Btn_9->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_8
			// 
			this->Btn_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_8->Location = System::Drawing::Point(98, 277);
			this->Btn_8->Name = L"Btn_8";
			this->Btn_8->Size = System::Drawing::Size(80, 80);
			this->Btn_8->TabIndex = 21;
			this->Btn_8->TabStop = false;
			this->Btn_8->Text = L"8";
			this->Btn_8->UseVisualStyleBackColor = false;
			this->Btn_8->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_7
			// 
			this->Btn_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_7->Location = System::Drawing::Point(12, 277);
			this->Btn_7->Name = L"Btn_7";
			this->Btn_7->Size = System::Drawing::Size(80, 80);
			this->Btn_7->TabIndex = 22;
			this->Btn_7->TabStop = false;
			this->Btn_7->Text = L"7";
			this->Btn_7->UseVisualStyleBackColor = false;
			this->Btn_7->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_dot
			// 
			this->Btn_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_dot->Location = System::Drawing::Point(184, 535);
			this->Btn_dot->Name = L"Btn_dot";
			this->Btn_dot->Size = System::Drawing::Size(80, 80);
			this->Btn_dot->TabIndex = 17;
			this->Btn_dot->TabStop = false;
			this->Btn_dot->Text = L".";
			this->Btn_dot->UseVisualStyleBackColor = false;
			this->Btn_dot->Click += gcnew System::EventHandler(this, &Calculator::Btn_dot_Click);
			// 
			// Btn_0
			// 
			this->Btn_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_0->Location = System::Drawing::Point(98, 535);
			this->Btn_0->Name = L"Btn_0";
			this->Btn_0->Size = System::Drawing::Size(80, 80);
			this->Btn_0->TabIndex = 18;
			this->Btn_0->TabStop = false;
			this->Btn_0->Text = L"0";
			this->Btn_0->UseVisualStyleBackColor = false;
			this->Btn_0->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_sign
			// 
			this->Btn_sign->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_sign->Location = System::Drawing::Point(12, 535);
			this->Btn_sign->Name = L"Btn_sign";
			this->Btn_sign->Size = System::Drawing::Size(80, 80);
			this->Btn_sign->TabIndex = 19;
			this->Btn_sign->TabStop = false;
			this->Btn_sign->Text = L"+/-";
			this->Btn_sign->UseVisualStyleBackColor = false;
			this->Btn_sign->Click += gcnew System::EventHandler(this, &Calculator::Btn_sign_Click);
			// 
			// Btn_equals
			// 
			this->Btn_equals->BackColor = System::Drawing::Color::MediumPurple;
			this->Btn_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_equals->Location = System::Drawing::Point(270, 535);
			this->Btn_equals->Name = L"Btn_equals";
			this->Btn_equals->Size = System::Drawing::Size(80, 80);
			this->Btn_equals->TabIndex = 12;
			this->Btn_equals->TabStop = false;
			this->Btn_equals->Text = L"=";
			this->Btn_equals->UseVisualStyleBackColor = false;
			this->Btn_equals->Click += gcnew System::EventHandler(this, &Calculator::Btn_equals_Click);
			// 
			// Btn_multiply
			// 
			this->Btn_multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_multiply->Location = System::Drawing::Point(270, 277);
			this->Btn_multiply->Name = L"Btn_multiply";
			this->Btn_multiply->Size = System::Drawing::Size(80, 80);
			this->Btn_multiply->TabIndex = 13;
			this->Btn_multiply->TabStop = false;
			this->Btn_multiply->Text = L"×";
			this->Btn_multiply->UseVisualStyleBackColor = false;
			this->Btn_multiply->Click += gcnew System::EventHandler(this, &Calculator::Btn_multiply_Click);
			// 
			// Btn_minus
			// 
			this->Btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_minus->Location = System::Drawing::Point(270, 363);
			this->Btn_minus->Name = L"Btn_minus";
			this->Btn_minus->Size = System::Drawing::Size(80, 80);
			this->Btn_minus->TabIndex = 14;
			this->Btn_minus->TabStop = false;
			this->Btn_minus->Text = L"-";
			this->Btn_minus->UseVisualStyleBackColor = false;
			this->Btn_minus->Click += gcnew System::EventHandler(this, &Calculator::Btn_minus_Click);
			// 
			// Btn_plus
			// 
			this->Btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_plus->Location = System::Drawing::Point(270, 449);
			this->Btn_plus->Name = L"Btn_plus";
			this->Btn_plus->Size = System::Drawing::Size(80, 80);
			this->Btn_plus->TabIndex = 15;
			this->Btn_plus->TabStop = false;
			this->Btn_plus->Text = L"+";
			this->Btn_plus->UseVisualStyleBackColor = false;
			this->Btn_plus->Click += gcnew System::EventHandler(this, &Calculator::Btn_plus_Click);
			// 
			// Btn_divide
			// 
			this->Btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_divide->Location = System::Drawing::Point(270, 191);
			this->Btn_divide->Name = L"Btn_divide";
			this->Btn_divide->Size = System::Drawing::Size(80, 80);
			this->Btn_divide->TabIndex = 11;
			this->Btn_divide->TabStop = false;
			this->Btn_divide->Text = L"÷";
			this->Btn_divide->UseVisualStyleBackColor = false;
			this->Btn_divide->Click += gcnew System::EventHandler(this, &Calculator::Btn_divide_Click);
			// 
			// Btn_sqr
			// 
			this->Btn_sqr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_sqr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_sqr->Location = System::Drawing::Point(12, 191);
			this->Btn_sqr->Name = L"Btn_sqr";
			this->Btn_sqr->Size = System::Drawing::Size(80, 80);
			this->Btn_sqr->TabIndex = 10;
			this->Btn_sqr->TabStop = false;
			this->Btn_sqr->Text = L"sqr(x)";
			this->Btn_sqr->UseVisualStyleBackColor = false;
			this->Btn_sqr->Click += gcnew System::EventHandler(this, &Calculator::Btn_sqr_Click);
			// 
			// Btn_sqrt
			// 
			this->Btn_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_sqrt->Location = System::Drawing::Point(98, 191);
			this->Btn_sqrt->Name = L"Btn_sqrt";
			this->Btn_sqrt->Size = System::Drawing::Size(80, 80);
			this->Btn_sqrt->TabIndex = 9;
			this->Btn_sqrt->TabStop = false;
			this->Btn_sqrt->Text = L"sqrt(x)";
			this->Btn_sqrt->UseVisualStyleBackColor = false;
			this->Btn_sqrt->Click += gcnew System::EventHandler(this, &Calculator::Btn_sqrt_Click);
			// 
			// Btn_erase
			// 
			this->Btn_erase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_erase->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_erase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_erase->Location = System::Drawing::Point(270, 105);
			this->Btn_erase->Name = L"Btn_erase";
			this->Btn_erase->Size = System::Drawing::Size(80, 80);
			this->Btn_erase->TabIndex = 8;
			this->Btn_erase->TabStop = false;
			this->Btn_erase->Text = L"⌫";
			this->Btn_erase->UseVisualStyleBackColor = false;
			this->Btn_erase->Click += gcnew System::EventHandler(this, &Calculator::Btn_erase_Click);
			// 
			// Btn_CE
			// 
			this->Btn_CE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_CE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_CE->Location = System::Drawing::Point(98, 105);
			this->Btn_CE->Name = L"Btn_CE";
			this->Btn_CE->Size = System::Drawing::Size(80, 80);
			this->Btn_CE->TabIndex = 7;
			this->Btn_CE->TabStop = false;
			this->Btn_CE->Text = L"CE";
			this->Btn_CE->UseVisualStyleBackColor = false;
			this->Btn_CE->Click += gcnew System::EventHandler(this, &Calculator::Btn_CE_Click);
			// 
			// Btn_C
			// 
			this->Btn_C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_C->Location = System::Drawing::Point(184, 105);
			this->Btn_C->Name = L"Btn_C";
			this->Btn_C->Size = System::Drawing::Size(80, 80);
			this->Btn_C->TabIndex = 6;
			this->Btn_C->TabStop = false;
			this->Btn_C->Text = L"C";
			this->Btn_C->UseVisualStyleBackColor = false;
			this->Btn_C->Click += gcnew System::EventHandler(this, &Calculator::Btn_C_Click);
			// 
			// Text2
			// 
			this->Text2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Text2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Text2->Location = System::Drawing::Point(9, 33);
			this->Text2->Name = L"Text2";
			this->Text2->ReadOnly = true;
			this->Text2->Size = System::Drawing::Size(341, 26);
			this->Text2->TabIndex = 5;
			this->Text2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Btn_memory_substract
			// 
			this->Btn_memory_substract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_substract->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_substract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_memory_substract->Location = System::Drawing::Point(536, 32);
			this->Btn_memory_substract->Name = L"Btn_memory_substract";
			this->Btn_memory_substract->Size = System::Drawing::Size(150, 100);
			this->Btn_memory_substract->TabIndex = 0;
			this->Btn_memory_substract->TabStop = false;
			this->Btn_memory_substract->Text = L"M-";
			this->Btn_memory_substract->UseVisualStyleBackColor = false;
			this->Btn_memory_substract->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_substract_Click);
			// 
			// Btn_memory_add
			// 
			this->Btn_memory_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_memory_add->Location = System::Drawing::Point(368, 32);
			this->Btn_memory_add->Name = L"Btn_memory_add";
			this->Btn_memory_add->Size = System::Drawing::Size(150, 100);
			this->Btn_memory_add->TabIndex = 1;
			this->Btn_memory_add->TabStop = false;
			this->Btn_memory_add->Text = L"M+";
			this->Btn_memory_add->UseVisualStyleBackColor = false;
			this->Btn_memory_add->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_add_Click);
			// 
			// Btn_memory_save
			// 
			this->Btn_memory_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_memory_save->Location = System::Drawing::Point(704, 32);
			this->Btn_memory_save->Name = L"Btn_memory_save";
			this->Btn_memory_save->Size = System::Drawing::Size(150, 100);
			this->Btn_memory_save->TabIndex = 2;
			this->Btn_memory_save->TabStop = false;
			this->Btn_memory_save->Text = L"MS";
			this->Btn_memory_save->UseVisualStyleBackColor = false;
			this->Btn_memory_save->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_save_Click);
			// 
			// Btn_memory_recall
			// 
			this->Btn_memory_recall->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_recall->Enabled = false;
			this->Btn_memory_recall->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_recall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_memory_recall->Location = System::Drawing::Point(536, 150);
			this->Btn_memory_recall->Name = L"Btn_memory_recall";
			this->Btn_memory_recall->Size = System::Drawing::Size(150, 100);
			this->Btn_memory_recall->TabIndex = 3;
			this->Btn_memory_recall->TabStop = false;
			this->Btn_memory_recall->Text = L"MR";
			this->Btn_memory_recall->UseVisualStyleBackColor = false;
			this->Btn_memory_recall->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_recall_Click);
			// 
			// Btn_memory_clear
			// 
			this->Btn_memory_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_clear->Enabled = false;
			this->Btn_memory_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_memory_clear->Location = System::Drawing::Point(368, 150);
			this->Btn_memory_clear->Name = L"Btn_memory_clear";
			this->Btn_memory_clear->Size = System::Drawing::Size(150, 100);
			this->Btn_memory_clear->TabIndex = 4;
			this->Btn_memory_clear->TabStop = false;
			this->Btn_memory_clear->Text = L"MC";
			this->Btn_memory_clear->UseVisualStyleBackColor = false;
			this->Btn_memory_clear->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_clear_Click);
			// 
			// MemoryText0
			// 
			this->MemoryText0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText0->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText0->Location = System::Drawing::Point(924, 32);
			this->MemoryText0->Name = L"MemoryText0";
			this->MemoryText0->ReadOnly = true;
			this->MemoryText0->Size = System::Drawing::Size(267, 53);
			this->MemoryText0->TabIndex = 38;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// mc
			// 
			this->mc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mc.Image")));
			this->mc->Location = System::Drawing::Point(924, 35);
			this->mc->Name = L"mc";
			this->mc->Size = System::Drawing::Size(267, 580);
			this->mc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mc->TabIndex = 39;
			this->mc->TabStop = false;
			this->mc->Visible = false;
			// 
			// Btn_MC_real
			// 
			this->Btn_MC_real->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Btn_MC_real->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_MC_real->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->Btn_MC_real->Location = System::Drawing::Point(704, 150);
			this->Btn_MC_real->Name = L"Btn_MC_real";
			this->Btn_MC_real->Size = System::Drawing::Size(150, 100);
			this->Btn_MC_real->TabIndex = 40;
			this->Btn_MC_real->TabStop = false;
			this->Btn_MC_real->Text = L"MC President";
			this->Btn_MC_real->UseVisualStyleBackColor = false;
			this->Btn_MC_real->Click += gcnew System::EventHandler(this, &Calculator::Btn_MC_real_Click);
			// 
			// MemoryText1
			// 
			this->MemoryText1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText1->Location = System::Drawing::Point(924, 91);
			this->MemoryText1->Name = L"MemoryText1";
			this->MemoryText1->ReadOnly = true;
			this->MemoryText1->Size = System::Drawing::Size(267, 53);
			this->MemoryText1->TabIndex = 41;
			// 
			// MemoryText2
			// 
			this->MemoryText2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText2->Location = System::Drawing::Point(924, 150);
			this->MemoryText2->Name = L"MemoryText2";
			this->MemoryText2->ReadOnly = true;
			this->MemoryText2->Size = System::Drawing::Size(267, 53);
			this->MemoryText2->TabIndex = 42;
			// 
			// MemoryText3
			// 
			this->MemoryText3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText3->Location = System::Drawing::Point(924, 209);
			this->MemoryText3->Name = L"MemoryText3";
			this->MemoryText3->ReadOnly = true;
			this->MemoryText3->Size = System::Drawing::Size(267, 53);
			this->MemoryText3->TabIndex = 43;
			// 
			// MemoryText4
			// 
			this->MemoryText4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText4->Location = System::Drawing::Point(924, 268);
			this->MemoryText4->Name = L"MemoryText4";
			this->MemoryText4->ReadOnly = true;
			this->MemoryText4->Size = System::Drawing::Size(267, 53);
			this->MemoryText4->TabIndex = 44;
			// 
			// MemoryText5
			// 
			this->MemoryText5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText5->Location = System::Drawing::Point(924, 327);
			this->MemoryText5->Name = L"MemoryText5";
			this->MemoryText5->ReadOnly = true;
			this->MemoryText5->Size = System::Drawing::Size(267, 53);
			this->MemoryText5->TabIndex = 45;
			// 
			// MemoryText6
			// 
			this->MemoryText6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText6->Location = System::Drawing::Point(924, 386);
			this->MemoryText6->Name = L"MemoryText6";
			this->MemoryText6->ReadOnly = true;
			this->MemoryText6->Size = System::Drawing::Size(267, 53);
			this->MemoryText6->TabIndex = 46;
			// 
			// MemoryText7
			// 
			this->MemoryText7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText7->Location = System::Drawing::Point(924, 444);
			this->MemoryText7->Name = L"MemoryText7";
			this->MemoryText7->ReadOnly = true;
			this->MemoryText7->Size = System::Drawing::Size(267, 53);
			this->MemoryText7->TabIndex = 47;
			// 
			// MemoryText8
			// 
			this->MemoryText8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText8->Location = System::Drawing::Point(924, 503);
			this->MemoryText8->Name = L"MemoryText8";
			this->MemoryText8->ReadOnly = true;
			this->MemoryText8->Size = System::Drawing::Size(267, 53);
			this->MemoryText8->TabIndex = 48;
			// 
			// MemoryText9
			// 
			this->MemoryText9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->MemoryText9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->MemoryText9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MemoryText9->Location = System::Drawing::Point(924, 562);
			this->MemoryText9->Name = L"MemoryText9";
			this->MemoryText9->ReadOnly = true;
			this->MemoryText9->Size = System::Drawing::Size(267, 53);
			this->MemoryText9->TabIndex = 49;
			// 
			// Text1
			// 
			this->Text1->AllowPromptAsInput = false;
			this->Text1->BackColor = System::Drawing::Color::White;
			this->Text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Text1->Location = System::Drawing::Point(9, 62);
			this->Text1->Name = L"Text1";
			this->Text1->ReadOnly = true;
			this->Text1->Size = System::Drawing::Size(341, 38);
			this->Text1->TabIndex = 50;
			this->Text1->Text = L"0";
			this->Text1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MemorySelect0
			// 
			this->MemorySelect0->AccessibleName = L"";
			this->MemorySelect0->BackColor = System::Drawing::Color::Lime;
			this->MemorySelect0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect0->Location = System::Drawing::Point(888, 32);
			this->MemorySelect0->Name = L"MemorySelect0";
			this->MemorySelect0->Size = System::Drawing::Size(30, 53);
			this->MemorySelect0->TabIndex = 51;
			this->MemorySelect0->TabStop = false;
			this->MemorySelect0->UseVisualStyleBackColor = false;
			this->MemorySelect0->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect1
			// 
			this->MemorySelect1->AccessibleName = L"";
			this->MemorySelect1->BackColor = System::Drawing::Color::Red;
			this->MemorySelect1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect1->Location = System::Drawing::Point(888, 91);
			this->MemorySelect1->Name = L"MemorySelect1";
			this->MemorySelect1->Size = System::Drawing::Size(30, 53);
			this->MemorySelect1->TabIndex = 52;
			this->MemorySelect1->TabStop = false;
			this->MemorySelect1->UseVisualStyleBackColor = false;
			this->MemorySelect1->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect2
			// 
			this->MemorySelect2->AccessibleName = L"";
			this->MemorySelect2->BackColor = System::Drawing::Color::Red;
			this->MemorySelect2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect2->Location = System::Drawing::Point(888, 150);
			this->MemorySelect2->Name = L"MemorySelect2";
			this->MemorySelect2->Size = System::Drawing::Size(30, 53);
			this->MemorySelect2->TabIndex = 53;
			this->MemorySelect2->TabStop = false;
			this->MemorySelect2->UseVisualStyleBackColor = false;
			this->MemorySelect2->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect3
			// 
			this->MemorySelect3->AccessibleName = L"";
			this->MemorySelect3->BackColor = System::Drawing::Color::Red;
			this->MemorySelect3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect3->Location = System::Drawing::Point(888, 209);
			this->MemorySelect3->Name = L"MemorySelect3";
			this->MemorySelect3->Size = System::Drawing::Size(30, 53);
			this->MemorySelect3->TabIndex = 54;
			this->MemorySelect3->TabStop = false;
			this->MemorySelect3->UseVisualStyleBackColor = false;
			this->MemorySelect3->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect4
			// 
			this->MemorySelect4->AccessibleName = L"";
			this->MemorySelect4->BackColor = System::Drawing::Color::Red;
			this->MemorySelect4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect4->Location = System::Drawing::Point(888, 268);
			this->MemorySelect4->Name = L"MemorySelect4";
			this->MemorySelect4->Size = System::Drawing::Size(30, 53);
			this->MemorySelect4->TabIndex = 55;
			this->MemorySelect4->TabStop = false;
			this->MemorySelect4->UseVisualStyleBackColor = false;
			this->MemorySelect4->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect5
			// 
			this->MemorySelect5->AccessibleName = L"";
			this->MemorySelect5->BackColor = System::Drawing::Color::Red;
			this->MemorySelect5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect5->Location = System::Drawing::Point(888, 327);
			this->MemorySelect5->Name = L"MemorySelect5";
			this->MemorySelect5->Size = System::Drawing::Size(30, 53);
			this->MemorySelect5->TabIndex = 56;
			this->MemorySelect5->TabStop = false;
			this->MemorySelect5->UseVisualStyleBackColor = false;
			this->MemorySelect5->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect6
			// 
			this->MemorySelect6->AccessibleName = L"";
			this->MemorySelect6->BackColor = System::Drawing::Color::Red;
			this->MemorySelect6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect6->Location = System::Drawing::Point(888, 386);
			this->MemorySelect6->Name = L"MemorySelect6";
			this->MemorySelect6->Size = System::Drawing::Size(30, 53);
			this->MemorySelect6->TabIndex = 57;
			this->MemorySelect6->TabStop = false;
			this->MemorySelect6->UseVisualStyleBackColor = false;
			this->MemorySelect6->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect7
			// 
			this->MemorySelect7->AccessibleName = L"";
			this->MemorySelect7->BackColor = System::Drawing::Color::Red;
			this->MemorySelect7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect7->Location = System::Drawing::Point(888, 444);
			this->MemorySelect7->Name = L"MemorySelect7";
			this->MemorySelect7->Size = System::Drawing::Size(30, 53);
			this->MemorySelect7->TabIndex = 58;
			this->MemorySelect7->TabStop = false;
			this->MemorySelect7->UseVisualStyleBackColor = false;
			this->MemorySelect7->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect8
			// 
			this->MemorySelect8->AccessibleName = L"";
			this->MemorySelect8->BackColor = System::Drawing::Color::Red;
			this->MemorySelect8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect8->Location = System::Drawing::Point(888, 503);
			this->MemorySelect8->Name = L"MemorySelect8";
			this->MemorySelect8->Size = System::Drawing::Size(30, 53);
			this->MemorySelect8->TabIndex = 59;
			this->MemorySelect8->TabStop = false;
			this->MemorySelect8->UseVisualStyleBackColor = false;
			this->MemorySelect8->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// MemorySelect9
			// 
			this->MemorySelect9->BackColor = System::Drawing::Color::Red;
			this->MemorySelect9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MemorySelect9->Location = System::Drawing::Point(888, 562);
			this->MemorySelect9->Name = L"MemorySelect9";
			this->MemorySelect9->Size = System::Drawing::Size(30, 53);
			this->MemorySelect9->TabIndex = 60;
			this->MemorySelect9->TabStop = false;
			this->MemorySelect9->UseVisualStyleBackColor = false;
			this->MemorySelect9->Click += gcnew System::EventHandler(this, &Calculator::MemorySelect_Click);
			// 
			// NumberSystemBox
			// 
			this->NumberSystemBox->DropDownHeight = 500;
			this->NumberSystemBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->NumberSystemBox->DropDownWidth = 100;
			this->NumberSystemBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->NumberSystemBox->FormattingEnabled = true;
			this->NumberSystemBox->IntegralHeight = false;
			this->NumberSystemBox->Items->AddRange(gcnew cli::array< System::Object^  >(35) {
				L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36"
			});
			this->NumberSystemBox->Location = System::Drawing::Point(564, 535);
			this->NumberSystemBox->MaxLength = 2;
			this->NumberSystemBox->Name = L"NumberSystemBox";
			this->NumberSystemBox->Size = System::Drawing::Size(106, 69);
			this->NumberSystemBox->TabIndex = 61;
			this->NumberSystemBox->TabStop = false;
			this->NumberSystemBox->SelectionChangeCommitted += gcnew System::EventHandler(this, &Calculator::ChangedNumberSystem);
			// 
			// Btn_A
			// 
			this->Btn_A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_A->Enabled = false;
			this->Btn_A->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_A->Location = System::Drawing::Point(396, 295);
			this->Btn_A->Name = L"Btn_A";
			this->Btn_A->Size = System::Drawing::Size(50, 50);
			this->Btn_A->TabIndex = 62;
			this->Btn_A->TabStop = false;
			this->Btn_A->Text = L"A";
			this->Btn_A->UseVisualStyleBackColor = false;
			this->Btn_A->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_B
			// 
			this->Btn_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_B->Enabled = false;
			this->Btn_B->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_B->Location = System::Drawing::Point(452, 295);
			this->Btn_B->Name = L"Btn_B";
			this->Btn_B->Size = System::Drawing::Size(50, 50);
			this->Btn_B->TabIndex = 63;
			this->Btn_B->TabStop = false;
			this->Btn_B->Text = L"B";
			this->Btn_B->UseVisualStyleBackColor = false;
			this->Btn_B->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_D
			// 
			this->Btn_D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_D->Enabled = false;
			this->Btn_D->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_D->Location = System::Drawing::Point(564, 295);
			this->Btn_D->Name = L"Btn_D";
			this->Btn_D->Size = System::Drawing::Size(50, 50);
			this->Btn_D->TabIndex = 65;
			this->Btn_D->TabStop = false;
			this->Btn_D->Text = L"D";
			this->Btn_D->UseVisualStyleBackColor = false;
			this->Btn_D->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_C_Digit
			// 
			this->Btn_C_Digit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_C_Digit->Enabled = false;
			this->Btn_C_Digit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_C_Digit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_C_Digit->Location = System::Drawing::Point(508, 295);
			this->Btn_C_Digit->Name = L"Btn_C_Digit";
			this->Btn_C_Digit->Size = System::Drawing::Size(50, 50);
			this->Btn_C_Digit->TabIndex = 64;
			this->Btn_C_Digit->TabStop = false;
			this->Btn_C_Digit->Text = L"C";
			this->Btn_C_Digit->UseVisualStyleBackColor = false;
			this->Btn_C_Digit->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_H
			// 
			this->Btn_H->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_H->Enabled = false;
			this->Btn_H->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_H->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_H->Location = System::Drawing::Point(788, 295);
			this->Btn_H->Name = L"Btn_H";
			this->Btn_H->Size = System::Drawing::Size(50, 50);
			this->Btn_H->TabIndex = 69;
			this->Btn_H->TabStop = false;
			this->Btn_H->Text = L"H";
			this->Btn_H->UseVisualStyleBackColor = false;
			this->Btn_H->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_G
			// 
			this->Btn_G->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_G->Enabled = false;
			this->Btn_G->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_G->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_G->Location = System::Drawing::Point(732, 295);
			this->Btn_G->Name = L"Btn_G";
			this->Btn_G->Size = System::Drawing::Size(50, 50);
			this->Btn_G->TabIndex = 68;
			this->Btn_G->TabStop = false;
			this->Btn_G->Text = L"G";
			this->Btn_G->UseVisualStyleBackColor = false;
			this->Btn_G->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_F
			// 
			this->Btn_F->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_F->Enabled = false;
			this->Btn_F->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_F->Location = System::Drawing::Point(676, 295);
			this->Btn_F->Name = L"Btn_F";
			this->Btn_F->Size = System::Drawing::Size(50, 50);
			this->Btn_F->TabIndex = 67;
			this->Btn_F->TabStop = false;
			this->Btn_F->Text = L"F";
			this->Btn_F->UseVisualStyleBackColor = false;
			this->Btn_F->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_E
			// 
			this->Btn_E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_E->Enabled = false;
			this->Btn_E->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_E->Location = System::Drawing::Point(620, 295);
			this->Btn_E->Name = L"Btn_E";
			this->Btn_E->Size = System::Drawing::Size(50, 50);
			this->Btn_E->TabIndex = 66;
			this->Btn_E->TabStop = false;
			this->Btn_E->Text = L"E";
			this->Btn_E->UseVisualStyleBackColor = false;
			this->Btn_E->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_P
			// 
			this->Btn_P->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_P->Enabled = false;
			this->Btn_P->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_P->Location = System::Drawing::Point(788, 351);
			this->Btn_P->Name = L"Btn_P";
			this->Btn_P->Size = System::Drawing::Size(50, 50);
			this->Btn_P->TabIndex = 77;
			this->Btn_P->TabStop = false;
			this->Btn_P->Text = L"P";
			this->Btn_P->UseVisualStyleBackColor = false;
			this->Btn_P->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_O
			// 
			this->Btn_O->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_O->Enabled = false;
			this->Btn_O->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_O->Location = System::Drawing::Point(732, 351);
			this->Btn_O->Name = L"Btn_O";
			this->Btn_O->Size = System::Drawing::Size(50, 50);
			this->Btn_O->TabIndex = 76;
			this->Btn_O->TabStop = false;
			this->Btn_O->Text = L"O";
			this->Btn_O->UseVisualStyleBackColor = false;
			this->Btn_O->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_N
			// 
			this->Btn_N->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_N->Enabled = false;
			this->Btn_N->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_N->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_N->Location = System::Drawing::Point(676, 351);
			this->Btn_N->Name = L"Btn_N";
			this->Btn_N->Size = System::Drawing::Size(50, 50);
			this->Btn_N->TabIndex = 75;
			this->Btn_N->TabStop = false;
			this->Btn_N->Text = L"N";
			this->Btn_N->UseVisualStyleBackColor = false;
			this->Btn_N->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_M
			// 
			this->Btn_M->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_M->Enabled = false;
			this->Btn_M->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_M->Location = System::Drawing::Point(620, 351);
			this->Btn_M->Name = L"Btn_M";
			this->Btn_M->Size = System::Drawing::Size(50, 50);
			this->Btn_M->TabIndex = 74;
			this->Btn_M->TabStop = false;
			this->Btn_M->Text = L"M";
			this->Btn_M->UseVisualStyleBackColor = false;
			this->Btn_M->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_L
			// 
			this->Btn_L->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_L->Enabled = false;
			this->Btn_L->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_L->Location = System::Drawing::Point(564, 351);
			this->Btn_L->Name = L"Btn_L";
			this->Btn_L->Size = System::Drawing::Size(50, 50);
			this->Btn_L->TabIndex = 73;
			this->Btn_L->TabStop = false;
			this->Btn_L->Text = L"L";
			this->Btn_L->UseVisualStyleBackColor = false;
			this->Btn_L->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_K
			// 
			this->Btn_K->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_K->Enabled = false;
			this->Btn_K->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_K->Location = System::Drawing::Point(508, 351);
			this->Btn_K->Name = L"Btn_K";
			this->Btn_K->Size = System::Drawing::Size(50, 50);
			this->Btn_K->TabIndex = 72;
			this->Btn_K->TabStop = false;
			this->Btn_K->Text = L"K";
			this->Btn_K->UseVisualStyleBackColor = false;
			this->Btn_K->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_J
			// 
			this->Btn_J->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_J->Enabled = false;
			this->Btn_J->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_J->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_J->Location = System::Drawing::Point(452, 351);
			this->Btn_J->Name = L"Btn_J";
			this->Btn_J->Size = System::Drawing::Size(50, 50);
			this->Btn_J->TabIndex = 71;
			this->Btn_J->TabStop = false;
			this->Btn_J->Text = L"J";
			this->Btn_J->UseVisualStyleBackColor = false;
			this->Btn_J->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_I
			// 
			this->Btn_I->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_I->Enabled = false;
			this->Btn_I->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_I->Location = System::Drawing::Point(396, 351);
			this->Btn_I->Name = L"Btn_I";
			this->Btn_I->Size = System::Drawing::Size(50, 50);
			this->Btn_I->TabIndex = 70;
			this->Btn_I->TabStop = false;
			this->Btn_I->Text = L"I";
			this->Btn_I->UseVisualStyleBackColor = false;
			this->Btn_I->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_X
			// 
			this->Btn_X->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_X->Enabled = false;
			this->Btn_X->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_X->Location = System::Drawing::Point(564, 463);
			this->Btn_X->Name = L"Btn_X";
			this->Btn_X->Size = System::Drawing::Size(50, 50);
			this->Btn_X->TabIndex = 85;
			this->Btn_X->TabStop = false;
			this->Btn_X->Text = L"X";
			this->Btn_X->UseVisualStyleBackColor = false;
			this->Btn_X->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_W
			// 
			this->Btn_W->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_W->Enabled = false;
			this->Btn_W->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_W->Location = System::Drawing::Point(508, 463);
			this->Btn_W->Name = L"Btn_W";
			this->Btn_W->Size = System::Drawing::Size(50, 50);
			this->Btn_W->TabIndex = 84;
			this->Btn_W->TabStop = false;
			this->Btn_W->Text = L"W";
			this->Btn_W->UseVisualStyleBackColor = false;
			this->Btn_W->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_V
			// 
			this->Btn_V->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_V->Enabled = false;
			this->Btn_V->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_V->Location = System::Drawing::Point(732, 407);
			this->Btn_V->Name = L"Btn_V";
			this->Btn_V->Size = System::Drawing::Size(50, 50);
			this->Btn_V->TabIndex = 83;
			this->Btn_V->TabStop = false;
			this->Btn_V->Text = L"V";
			this->Btn_V->UseVisualStyleBackColor = false;
			this->Btn_V->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_U
			// 
			this->Btn_U->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_U->Enabled = false;
			this->Btn_U->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_U->Location = System::Drawing::Point(676, 407);
			this->Btn_U->Name = L"Btn_U";
			this->Btn_U->Size = System::Drawing::Size(50, 50);
			this->Btn_U->TabIndex = 82;
			this->Btn_U->TabStop = false;
			this->Btn_U->Text = L"U";
			this->Btn_U->UseVisualStyleBackColor = false;
			this->Btn_U->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_T
			// 
			this->Btn_T->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_T->Enabled = false;
			this->Btn_T->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_T->Location = System::Drawing::Point(620, 407);
			this->Btn_T->Name = L"Btn_T";
			this->Btn_T->Size = System::Drawing::Size(50, 50);
			this->Btn_T->TabIndex = 81;
			this->Btn_T->TabStop = false;
			this->Btn_T->Text = L"T";
			this->Btn_T->UseVisualStyleBackColor = false;
			this->Btn_T->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_S
			// 
			this->Btn_S->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_S->Enabled = false;
			this->Btn_S->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_S->Location = System::Drawing::Point(564, 407);
			this->Btn_S->Name = L"Btn_S";
			this->Btn_S->Size = System::Drawing::Size(50, 50);
			this->Btn_S->TabIndex = 80;
			this->Btn_S->TabStop = false;
			this->Btn_S->Text = L"S";
			this->Btn_S->UseVisualStyleBackColor = false;
			this->Btn_S->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_R
			// 
			this->Btn_R->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_R->Enabled = false;
			this->Btn_R->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_R->Location = System::Drawing::Point(508, 407);
			this->Btn_R->Name = L"Btn_R";
			this->Btn_R->Size = System::Drawing::Size(50, 50);
			this->Btn_R->TabIndex = 79;
			this->Btn_R->TabStop = false;
			this->Btn_R->Text = L"R";
			this->Btn_R->UseVisualStyleBackColor = false;
			this->Btn_R->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_Q
			// 
			this->Btn_Q->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_Q->Enabled = false;
			this->Btn_Q->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Q->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_Q->Location = System::Drawing::Point(452, 407);
			this->Btn_Q->Name = L"Btn_Q";
			this->Btn_Q->Size = System::Drawing::Size(50, 50);
			this->Btn_Q->TabIndex = 78;
			this->Btn_Q->TabStop = false;
			this->Btn_Q->Text = L"Q";
			this->Btn_Q->UseVisualStyleBackColor = false;
			this->Btn_Q->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_Z
			// 
			this->Btn_Z->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_Z->Enabled = false;
			this->Btn_Z->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_Z->Location = System::Drawing::Point(676, 463);
			this->Btn_Z->Name = L"Btn_Z";
			this->Btn_Z->Size = System::Drawing::Size(50, 50);
			this->Btn_Z->TabIndex = 87;
			this->Btn_Z->TabStop = false;
			this->Btn_Z->Text = L"Z";
			this->Btn_Z->UseVisualStyleBackColor = false;
			this->Btn_Z->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_Y
			// 
			this->Btn_Y->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_Y->Enabled = false;
			this->Btn_Y->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_Y->Location = System::Drawing::Point(620, 463);
			this->Btn_Y->Name = L"Btn_Y";
			this->Btn_Y->Size = System::Drawing::Size(50, 50);
			this->Btn_Y->TabIndex = 86;
			this->Btn_Y->TabStop = false;
			this->Btn_Y->Text = L"Y";
			this->Btn_Y->UseVisualStyleBackColor = false;
			this->Btn_Y->Click += gcnew System::EventHandler(this, &Calculator::DigitClick);
			// 
			// Btn_SqrNeg1
			// 
			this->Btn_SqrNeg1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_SqrNeg1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_SqrNeg1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_SqrNeg1->Location = System::Drawing::Point(12, 105);
			this->Btn_SqrNeg1->Name = L"Btn_SqrNeg1";
			this->Btn_SqrNeg1->Size = System::Drawing::Size(80, 80);
			this->Btn_SqrNeg1->TabIndex = 88;
			this->Btn_SqrNeg1->TabStop = false;
			this->Btn_SqrNeg1->Text = L"1/x";
			this->Btn_SqrNeg1->UseVisualStyleBackColor = false;
			this->Btn_SqrNeg1->Click += gcnew System::EventHandler(this, &Calculator::Btn_SqrNeg1_Click);
			// 
			// Btn_power
			// 
			this->Btn_power->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_power->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Btn_power->Location = System::Drawing::Point(184, 191);
			this->Btn_power->Name = L"Btn_power";
			this->Btn_power->Size = System::Drawing::Size(80, 80);
			this->Btn_power->TabIndex = 89;
			this->Btn_power->TabStop = false;
			this->Btn_power->Text = L"x^y";
			this->Btn_power->UseVisualStyleBackColor = false;
			this->Btn_power->Click += gcnew System::EventHandler(this, &Calculator::Btn_power_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1215, 635);
			this->Controls->Add(this->Btn_power);
			this->Controls->Add(this->Btn_SqrNeg1);
			this->Controls->Add(this->Btn_Z);
			this->Controls->Add(this->Btn_Y);
			this->Controls->Add(this->Btn_X);
			this->Controls->Add(this->Btn_W);
			this->Controls->Add(this->Btn_V);
			this->Controls->Add(this->Btn_U);
			this->Controls->Add(this->Btn_T);
			this->Controls->Add(this->Btn_S);
			this->Controls->Add(this->Btn_R);
			this->Controls->Add(this->Btn_Q);
			this->Controls->Add(this->Btn_P);
			this->Controls->Add(this->Btn_O);
			this->Controls->Add(this->Btn_N);
			this->Controls->Add(this->Btn_M);
			this->Controls->Add(this->Btn_L);
			this->Controls->Add(this->Btn_K);
			this->Controls->Add(this->Btn_J);
			this->Controls->Add(this->Btn_I);
			this->Controls->Add(this->Btn_H);
			this->Controls->Add(this->Btn_G);
			this->Controls->Add(this->Btn_F);
			this->Controls->Add(this->Btn_E);
			this->Controls->Add(this->Btn_D);
			this->Controls->Add(this->Btn_C_Digit);
			this->Controls->Add(this->Btn_B);
			this->Controls->Add(this->Btn_A);
			this->Controls->Add(this->NumberSystemBox);
			this->Controls->Add(this->MemorySelect9);
			this->Controls->Add(this->MemorySelect8);
			this->Controls->Add(this->MemorySelect7);
			this->Controls->Add(this->MemorySelect6);
			this->Controls->Add(this->MemorySelect5);
			this->Controls->Add(this->MemorySelect4);
			this->Controls->Add(this->MemorySelect3);
			this->Controls->Add(this->MemorySelect2);
			this->Controls->Add(this->MemorySelect1);
			this->Controls->Add(this->MemorySelect0);
			this->Controls->Add(this->Text1);
			this->Controls->Add(this->MemoryText9);
			this->Controls->Add(this->MemoryText8);
			this->Controls->Add(this->MemoryText7);
			this->Controls->Add(this->MemoryText6);
			this->Controls->Add(this->MemoryText5);
			this->Controls->Add(this->MemoryText4);
			this->Controls->Add(this->MemoryText3);
			this->Controls->Add(this->MemoryText2);
			this->Controls->Add(this->MemoryText1);
			this->Controls->Add(this->Btn_MC_real);
			this->Controls->Add(this->MemoryText0);
			this->Controls->Add(this->Btn_memory_substract);
			this->Controls->Add(this->Btn_memory_add);
			this->Controls->Add(this->Btn_memory_save);
			this->Controls->Add(this->Btn_memory_recall);
			this->Controls->Add(this->Btn_memory_clear);
			this->Controls->Add(this->Text2);
			this->Controls->Add(this->Btn_C);
			this->Controls->Add(this->Btn_CE);
			this->Controls->Add(this->Btn_erase);
			this->Controls->Add(this->Btn_sqrt);
			this->Controls->Add(this->Btn_sqr);
			this->Controls->Add(this->Btn_divide);
			this->Controls->Add(this->Btn_equals);
			this->Controls->Add(this->Btn_multiply);
			this->Controls->Add(this->Btn_minus);
			this->Controls->Add(this->Btn_plus);
			this->Controls->Add(this->Btn_dot);
			this->Controls->Add(this->Btn_0);
			this->Controls->Add(this->Btn_sign);
			this->Controls->Add(this->Btn_9);
			this->Controls->Add(this->Btn_8);
			this->Controls->Add(this->Btn_7);
			this->Controls->Add(this->Btn_6);
			this->Controls->Add(this->Btn_3);
			this->Controls->Add(this->Btn_5);
			this->Controls->Add(this->Btn_4);
			this->Controls->Add(this->Btn_2);
			this->Controls->Add(this->Btn_1);
			this->Controls->Add(this->mc);
			this->HelpButton = true;
			this->KeyPreview = true;
			this->Name = L"Calculator";
			this->Text = L"Clanker";
			this->Load += gcnew System::EventHandler(this, &Calculator::Form1_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::OnKeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mc))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void OnKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)

	{
		if (isError)
		{
			Btn_C->PerformClick();
			return;
		}
		Char c = Char::ToUpper(e->KeyChar);
		if (c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
		{
			if (Array::IndexOf(digits, (char)c) >= currentBase)
				return;
			WriteNewNum(Char::ToUpper(e->KeyChar));
			return;
		}
		switch (c)
		{
			case '+':
			case '-':
			case '*':
			case '/':
				Operation = e->KeyChar;
				WriteOperation();
				return;
			case '=':
			case '\r':
				Btn_equals->PerformClick();
				break;
			case '.':
			case ',':
				Btn_dot->PerformClick();
				return;
			case '\b':
				Btn_erase->PerformClick();
				return;
		}
	}

	private: enum class ButtonTypes
	{
		Digit,
		Operation,
		Equals,
		Function,
	};
	private: ButtonTypes LastButtonType;
	private:Random^ rnd;
	private: array<String^>^ imageFiles;
	private: char Operation, prevOperation;
	/*
	private: ref class BaseNumber
	{
		public: String^ value;
			  static int currentBase;
			  BaseNumber operator+(BaseNumber value1)
			  {
				  double tempValue = FromBaseToDouble(value, currentBase);
				  double tempValue1 = FromBaseToDouble(value1, currentBase);
				  double result = tempValue + tempValue1;
				  return FromDoubleToBase(result, currentBase);
			  }
	};
	*/
	private: double N1, N2, Result;
	private: bool isOperationClicked = false, isError = false;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (Text1->Culture->Name == "uk-UA")
			Btn_dot->Text = ",";

		rnd = gcnew Random();
		String^ folder = Path::Combine(Application::StartupPath, "images");
		imageFiles = Directory::GetFiles(folder, "*.jpg");
		mc->BringToFront();
		NumberSystemBox->Text = "10";
		digitButtons = gcnew array<Button^>
		{
			Btn_0, Btn_1, Btn_2, Btn_3, Btn_4,
			Btn_5, Btn_6, Btn_7, Btn_8, Btn_9,
			Btn_A, Btn_B, Btn_C_Digit, Btn_D, Btn_E,
			Btn_F, Btn_G, Btn_H, Btn_I, Btn_J,
			Btn_K, Btn_L, Btn_M, Btn_N, Btn_O,
			Btn_P, Btn_Q, Btn_R, Btn_S, Btn_T,
			Btn_U, Btn_V, Btn_W, Btn_X, Btn_Y,
			Btn_Z
		};

		Memory = gcnew array<MemoryButtonInfo^>
		{
			gcnew MemoryButtonInfo(MemoryText0, MemorySelect0),
			gcnew MemoryButtonInfo(MemoryText1, MemorySelect1),
			gcnew MemoryButtonInfo(MemoryText2, MemorySelect2),
			gcnew MemoryButtonInfo(MemoryText3, MemorySelect3),
			gcnew MemoryButtonInfo(MemoryText4, MemorySelect4),
			gcnew MemoryButtonInfo(MemoryText5, MemorySelect5),
			gcnew MemoryButtonInfo(MemoryText6, MemorySelect6),
			gcnew MemoryButtonInfo(MemoryText7, MemorySelect7),
			gcnew MemoryButtonInfo(MemoryText8, MemorySelect8),
			gcnew MemoryButtonInfo(MemoryText9, MemorySelect9),
		};

		digits = gcnew array<char>
		{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z' };
	}

	private: void ToggleButtons(bool toggle)
	{
		Btn_dot->Enabled = toggle;
		Btn_plus->Enabled = toggle;
		Btn_minus->Enabled = toggle;
		Btn_multiply->Enabled = toggle;
		Btn_divide->Enabled = toggle;
		Btn_sign->Enabled = toggle;
		Btn_sign->Enabled = toggle;
		Btn_sqr->Enabled = toggle;
		Btn_SqrNeg1->Enabled = toggle;
		Btn_sqrt->Enabled = toggle;
		Btn_equals->Enabled = toggle;
		Btn_memory_add->Enabled = toggle;
		Btn_memory_substract->Enabled = toggle;
		Btn_memory_save->Enabled = toggle;
		Btn_CE->Enabled = toggle;
		if (toggle)
			CheckMemoryButtons();
		else
		{
			Btn_memory_recall->Enabled = false;
			Btn_memory_clear->Enabled = false;
		}
	}
#pragma region digits
	private: array<Button^>^ digitButtons;
	private: void WriteNewNum(Char digit)
	{
		if (Text1->Text == "0" || LastButtonType != ButtonTypes::Digit || isError)
		{
			isError = false;
			ToggleButtons(true);		
			Text1->Text = digit.ToString();
		}
		else
			Text1->Text = Text1->Text + digit;
		LastButtonType = ButtonTypes::Digit;
	}

	private: System::Void DigitClick(System::Object^ sender, EventArgs^ e)
	{
		Button^ btn = safe_cast<Button^>(sender);
		WriteNewNum(btn->Text[0]);
	}

#pragma endregion
#pragma region operations
	private: double DoOperation(char operation)
	{
		switch (operation)
		{
		case '+':
			return N1 + N2;
		case '-':
			return N1 - N2;
		case '*':
			return N1 * N2;
		case '/':
			if (N2 == 0)
				return Double::PositiveInfinity;
			return N1 / N2;
		case '^':
			if (N2 == 0)
				return 1;
			if (N1 == 0 && N2 < 0)
				return Double::PositiveInfinity;
			return Math::Pow(N1, N2);
		}
		return 0;
	}

	private: void WriteOperation()
	{
		double tempN = FromBaseToDouble(Text1->Text, currentBase);
		if (LastButtonType == ButtonTypes::Operation)
		{
			Text2->Text = Text1->Text + " " + (Char)Operation;
		}
		else if (isOperationClicked && LastButtonType == ButtonTypes::Digit)
		{
			N2 = tempN;
			Result = DoOperation(prevOperation);
			Text2->Text = FromDoubleToBase(Result, currentBase) + " " + (Char)Operation;
			Text1->Text = FromDoubleToBase(Result, currentBase);
			N1 = Result;
		}
		else
		{
			N1 = tempN;
			Text2->Text = Text1->Text + " " + (Char)Operation;
			isOperationClicked = true;
		}
		prevOperation = Operation;
		LastButtonType = ButtonTypes::Operation;
	}

	private: System::Void Btn_plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = '+';
		WriteOperation();
	}

	private: System::Void Btn_minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = '-';
		WriteOperation();
	}

	private: System::Void Btn_multiply_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = '*';
		WriteOperation();
	}

	private: System::Void Btn_divide_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = '/';
		WriteOperation();
	}
	
	private: System::Void Btn_power_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Operation = '^';
		WriteOperation();
	}
	private: System::Void Btn_equals_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!isOperationClicked && LastButtonType == ButtonTypes::Digit)
			return;
		if (LastButtonType == ButtonTypes::Equals)
		{
			N1 = FromBaseToDouble(Text1->Text, currentBase);
			Text2->Text = Text1->Text + Text2->Text->Remove(0, Text2->Text->IndexOf(' '));
		}
		else
		{
			Text2->Text = Text2->Text + " " + Text1->Text + " =";
			N2 = FromBaseToDouble(Text1->Text, currentBase);
		}
		Result = DoOperation(Operation);
		if (Result == Double::PositiveInfinity)
		{
			Text1->Text = "ERROR :3";
			isError = true;
			ToggleButtons(false);
			return;
		}
		else
			Text1->Text = FromDoubleToBase(Result, currentBase);
		isOperationClicked = false;
		LastButtonType = ButtonTypes::Equals;
	}

	private: System::Void Btn_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Text1->Text->Contains(Btn_dot->Text))
			Text1->Text = Text1->Text + Btn_dot->Text;
	}
#pragma endregion
#pragma region clear
	private: System::Void Btn_CE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = "0";
		isOperationClicked = false;
	}
	private: System::Void Btn_C_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = "0";
		Text2->Text = "";
		isOperationClicked = false;
		isError = false;
		ToggleButtons(true);
	}
	private: System::Void Btn_erase_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Text1->Text->Length == 1 || isError)
		{
			Text1->Text = "0";
			Text2->Text = "";
			isError = false;
			ToggleButtons(true);
		}
		else if (Text1->Text->Substring(0, 1) == "-" && Text1->Text->Length == 2)
			Text1->Text = "0";
		else
			Text1->Text = Text1->Text->Remove(Text1->Text->Length - 1);
	}
#pragma endregion
#pragma region functions
	private: System::Void Btn_sign_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Text1->Text != "0")
		{
			if (Text1->Text->Substring(0, 1) == "-")
				Text1->Text = Text1->Text->Remove(0, 1);
			else
				Text1->Text = "-" + Text1->Text;
		}
	}
	private: System::Void Btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text2->Text = "sqrt(" + Text1->Text + ")";
		N1 = FromBaseToDouble(Text1->Text, currentBase);
		if (N1 < 0)
		{
			Text1->Text = "ERROR :3";
			isError = true;
			ToggleButtons(false);
			return;
		}
		else
		{
			Result = Math::Sqrt(N1);
			Text1->Text = FromDoubleToBase(Result, currentBase);
		}
		LastButtonType = ButtonTypes::Function;
	}
	private: System::Void Btn_sqr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text2->Text = "sqr(" + Text1->Text + ")";
		N1 = FromBaseToDouble(Text1->Text, currentBase);
		Result = Math::Pow(N1, 2);
		Text1->Text = FromDoubleToBase(Result, currentBase);
		LastButtonType = ButtonTypes::Function;
	}

	private: System::Void Btn_SqrNeg1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double tempN = FromBaseToDouble(Text1->Text, currentBase);
		Text1->Text = "1";
		Btn_divide_Click(sender, e);
		Text1->Text = FromDoubleToBase(tempN, currentBase);
		Btn_equals_Click(sender, e);
	}
#pragma endregion
#pragma region memory
	private: ref struct MemoryButtonInfo
	{
		TextBox^ textBox;
		Button^ selectButton;

		MemoryButtonInfo(TextBox^ textbox, Button^ button)
		{
			textBox = textbox;
			selectButton = button;
		}
	};

	private: array<MemoryButtonInfo^>^ Memory;
	private: int memoryIndex = 0;

	private: void MemorySelect(int index)
	{
		memoryIndex = index;
		for (int i = 0; i < Memory->Length; i++)
			Memory[i]->selectButton->BackColor = System::Drawing::Color::Red;
		Memory[index]->selectButton->BackColor = System::Drawing::Color::Lime;
		if (Memory[index]->textBox->Text == "0" || Memory[index]->textBox->Text == "")
		{
			Btn_memory_recall->Enabled = false;
			Btn_memory_clear->Enabled = false;
		}
		else
		{
			Btn_memory_recall->Enabled = true;
			Btn_memory_clear->Enabled = true;
		}
	}

	private: void CheckMemoryButtons()
	{
		if (Memory[memoryIndex]->textBox->Text == "0" || Memory[memoryIndex]->textBox->Text == "")
		{
			Btn_memory_recall->Enabled = false;
			Btn_memory_clear->Enabled = false;
		}
		else
		{
			Btn_memory_recall->Enabled = true;
			Btn_memory_clear->Enabled = true;
		}
	}

	private: System::Void Btn_memory_clear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory[memoryIndex]->textBox->Text = "0";
		Btn_memory_recall->Enabled = false;
		Btn_memory_clear->Enabled = false;
	}

	private: System::Void Btn_memory_recall_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = Memory[memoryIndex]->textBox->Text;
	}

	private: System::Void Btn_memory_add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Memory[memoryIndex]->textBox->Text == "")
			Memory[memoryIndex]->textBox->Text = Text1->Text;
		else
			Memory[memoryIndex]->textBox->Text = Convert::ToString(Double::Parse(Memory[memoryIndex]->textBox->Text) + Double::Parse(Text1->Text));
		CheckMemoryButtons();
	}

	private: System::Void Btn_memory_substract_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Memory[memoryIndex]->textBox->Text == "")
		{
			if (Text1->Text[0] == '-')
				Memory[memoryIndex]->textBox->Text = Text1->Text;
			else
				Memory[memoryIndex]->textBox->Text = "-" + Text1->Text;
		}
		else
			Memory[memoryIndex]->textBox->Text = Convert::ToString(Double::Parse(Memory[memoryIndex]->textBox->Text) - Double::Parse(Text1->Text));
		CheckMemoryButtons();
	}

	private: System::Void Btn_memory_save_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory[memoryIndex]->textBox->Text = Text1->Text;
		CheckMemoryButtons();
	}

	private: System::Void Btn_MC_real_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		mc->Visible = !mc->Visible;
		if (mc->Visible)
		mc->Image = Image::FromFile(imageFiles[rnd->Next(imageFiles->Length)]);
	}

	private: System::Void MemorySelect_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Button^ btn = safe_cast<Button^>(sender);
		MemorySelect(btn->Name[btn->Name->Length - 1] - '0');
	}
#pragma endregion
#pragma region number systems
	private: array<char>^ digits;
	private: int currentBase = 10, prevBase = 10;
	private: double FromBaseToDouble(String^ S, int base)
	{
		if (S == "0" || base == 10)
			return Convert::ToDouble(S);
		bool isNegative = false;
		if (S != "" && S[0] == '-')
		{
			isNegative = true;
			S = S->Remove(0, 1);
		}
		int N_whole = 0;
		double N_fraction = 0.0;
		String^ wholePart = S;
		String^ fractionPart = "";
		if (S->Contains(Btn_dot->Text))
		{
			wholePart = S->Substring(0, S->IndexOf(Btn_dot->Text));
			fractionPart = S->Substring(S->IndexOf(Btn_dot->Text) + 1);
		}
		if (wholePart == "0")
			N_whole = 0;
		else
			for (int i = 0; i < wholePart->Length; i++)
				N_whole += Array::IndexOf(digits, (char)wholePart[i]) * Math::Pow(base , wholePart->Length - i - 1);
		if (fractionPart != "")
			for (int i = 0; i < fractionPart->Length; i++)
				N_fraction += Array::IndexOf(digits, (char)fractionPart[i]) * Math::Pow(base, -i - 1);
		if (isNegative)
			return -(N_whole + N_fraction);
		return N_whole + N_fraction;
	}

	private: String^ FromDoubleToBase(double N, int base)
	{
		if (N == 0 || base == 10)
			return Convert::ToString(N);
		bool isNegative = false;
		if (N < 0)
		{
			isNegative = true;
			N = -N;
		}
		int N_whole = (int)N;
		double N_fraction = N - N_whole;
		String^ wholePart = "";
		String^ fractionPart = "";
		while (N_whole != 0)
		{
			wholePart = (Char)digits[N_whole % base] + wholePart;
			N_whole /= base;
		}
		for (int i = 0; i < 8 && N_fraction != 0.0; i++)
		{
			N_fraction *= base;
			fractionPart += digits[(int)N_fraction];
			N_fraction -= (int)N_fraction;
		}
		if (wholePart == "")
			wholePart = "0";
		if (isNegative)
			wholePart = "-" + wholePart;
		if (fractionPart != "")
			return wholePart + Btn_dot->Text + fractionPart;
		return wholePart;
	}

	private: String^ FromBaseToBase(String^ S, int fromBase, int toBase)
	{
		if (toBase == 10)
			return FromBaseToDouble(S, fromBase).ToString();

		if (fromBase == 10)
		{
			if (S == "")
				return "";
			return FromDoubleToBase(Double::Parse(S), toBase);
		}

		double N = FromBaseToDouble(S, fromBase);
		return FromDoubleToBase(N, toBase);
	}

	private: void ConvertNumberSystem(int base)
	{
		if (isError)
			return;
		Text1->Text = FromBaseToBase(Text1->Text, prevBase, base);
		if (isOperationClicked)
		{
			Text2->Text = FromDoubleToBase(N1, base) + " " + (Char)Operation;
		}
		else if (LastButtonType == ButtonTypes::Equals)
		{
			Text2->Text = FromDoubleToBase(N1, base) + " " + (Char)Operation + " " + FromDoubleToBase(N2, base) + " =";
		}
		else
		{
			Text2->Text = FromBaseToBase(Text2->Text, prevBase, base);
		}
		for (int i = 0; i < Memory->Length; i++)
		{
			if (Memory[i]->textBox->Text != "")
				Memory[i]->textBox->Text = FromBaseToBase(Memory[i]->textBox->Text, prevBase, base);
		}
		for (int i = 0; i < digitButtons->Length; i++)
		{
			if (i < base)
				digitButtons[i]->Enabled = true;
			else
				digitButtons[i]->Enabled = false;
		}
	}

	private: System::Void TextUpdate(System::Object^ sender, System::EventArgs^ e)
	{
		if (Convert::ToInt16(NumberSystemBox->Text) > 36 || Convert::ToInt16(NumberSystemBox->Text) < 2)
		{
			NumberSystemBox->Text = "10";
			return;
		}

	}

	private: System::Void ChangedNumberSystem(System::Object^ sender, System::EventArgs^ e)
	{
		prevBase = currentBase;
		currentBase = Convert::ToInt16(NumberSystemBox->Text);
		ConvertNumberSystem(currentBase);
	}
#pragma endregion
};
}