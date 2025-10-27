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
	private: System::Windows::Forms::MaskedTextBox^ Text1;

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

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox9;
	private: System::Windows::Forms::TextBox^ Memory0;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ mc;
	private: System::Windows::Forms::Button^ Btn_MC_real;



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
			this->Text1 = (gcnew System::Windows::Forms::MaskedTextBox());
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
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Memory0 = (gcnew System::Windows::Forms::TextBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->mc = (gcnew System::Windows::Forms::PictureBox());
			this->Btn_MC_real = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mc))->BeginInit();
			this->SuspendLayout();
			// 
			// Btn_1
			// 
			this->Btn_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_1->Location = System::Drawing::Point(15, 325);
			this->Btn_1->Name = L"Btn_1";
			this->Btn_1->Size = System::Drawing::Size(50, 50);
			this->Btn_1->TabIndex = 28;
			this->Btn_1->Text = L"1";
			this->Btn_1->UseVisualStyleBackColor = false;
			this->Btn_1->Click += gcnew System::EventHandler(this, &Calculator::Btn_1_Click);
			// 
			// Btn_2
			// 
			this->Btn_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_2->Location = System::Drawing::Point(71, 325);
			this->Btn_2->Name = L"Btn_2";
			this->Btn_2->Size = System::Drawing::Size(50, 50);
			this->Btn_2->TabIndex = 27;
			this->Btn_2->Text = L"2";
			this->Btn_2->UseVisualStyleBackColor = false;
			this->Btn_2->Click += gcnew System::EventHandler(this, &Calculator::Btn_2_Click);
			// 
			// Btn_5
			// 
			this->Btn_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_5->Location = System::Drawing::Point(71, 269);
			this->Btn_5->Name = L"Btn_5";
			this->Btn_5->Size = System::Drawing::Size(50, 50);
			this->Btn_5->TabIndex = 25;
			this->Btn_5->Text = L"5";
			this->Btn_5->UseVisualStyleBackColor = false;
			this->Btn_5->Click += gcnew System::EventHandler(this, &Calculator::Btn_5_Click);
			// 
			// Btn_4
			// 
			this->Btn_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_4->Location = System::Drawing::Point(15, 269);
			this->Btn_4->Name = L"Btn_4";
			this->Btn_4->Size = System::Drawing::Size(50, 50);
			this->Btn_4->TabIndex = 26;
			this->Btn_4->Text = L"4";
			this->Btn_4->UseVisualStyleBackColor = false;
			this->Btn_4->Click += gcnew System::EventHandler(this, &Calculator::Btn_4_Click);
			// 
			// Btn_6
			// 
			this->Btn_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_6->Location = System::Drawing::Point(127, 269);
			this->Btn_6->Name = L"Btn_6";
			this->Btn_6->Size = System::Drawing::Size(50, 50);
			this->Btn_6->TabIndex = 23;
			this->Btn_6->Text = L"6";
			this->Btn_6->UseVisualStyleBackColor = false;
			this->Btn_6->Click += gcnew System::EventHandler(this, &Calculator::Btn_6_Click);
			// 
			// Btn_3
			// 
			this->Btn_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_3->Location = System::Drawing::Point(127, 325);
			this->Btn_3->Name = L"Btn_3";
			this->Btn_3->Size = System::Drawing::Size(50, 50);
			this->Btn_3->TabIndex = 24;
			this->Btn_3->Text = L"3";
			this->Btn_3->UseVisualStyleBackColor = false;
			this->Btn_3->Click += gcnew System::EventHandler(this, &Calculator::Btn_3_Click);
			// 
			// Btn_9
			// 
			this->Btn_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_9->Location = System::Drawing::Point(127, 213);
			this->Btn_9->Name = L"Btn_9";
			this->Btn_9->Size = System::Drawing::Size(50, 50);
			this->Btn_9->TabIndex = 20;
			this->Btn_9->Text = L"9";
			this->Btn_9->UseVisualStyleBackColor = false;
			this->Btn_9->Click += gcnew System::EventHandler(this, &Calculator::Btn_9_Click);
			// 
			// Btn_8
			// 
			this->Btn_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_8->Location = System::Drawing::Point(71, 213);
			this->Btn_8->Name = L"Btn_8";
			this->Btn_8->Size = System::Drawing::Size(50, 50);
			this->Btn_8->TabIndex = 21;
			this->Btn_8->Text = L"8";
			this->Btn_8->UseVisualStyleBackColor = false;
			this->Btn_8->Click += gcnew System::EventHandler(this, &Calculator::Btn_8_Click);
			// 
			// Btn_7
			// 
			this->Btn_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_7->Location = System::Drawing::Point(15, 213);
			this->Btn_7->Name = L"Btn_7";
			this->Btn_7->Size = System::Drawing::Size(50, 50);
			this->Btn_7->TabIndex = 22;
			this->Btn_7->Text = L"7";
			this->Btn_7->UseVisualStyleBackColor = false;
			this->Btn_7->Click += gcnew System::EventHandler(this, &Calculator::Btn_7_Click);
			// 
			// Btn_dot
			// 
			this->Btn_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_dot->Location = System::Drawing::Point(127, 381);
			this->Btn_dot->Name = L"Btn_dot";
			this->Btn_dot->Size = System::Drawing::Size(50, 50);
			this->Btn_dot->TabIndex = 17;
			this->Btn_dot->Text = L".";
			this->Btn_dot->UseVisualStyleBackColor = false;
			this->Btn_dot->Click += gcnew System::EventHandler(this, &Calculator::Btn_dot_Click);
			// 
			// Btn_0
			// 
			this->Btn_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_0->Location = System::Drawing::Point(71, 381);
			this->Btn_0->Name = L"Btn_0";
			this->Btn_0->Size = System::Drawing::Size(50, 50);
			this->Btn_0->TabIndex = 18;
			this->Btn_0->Text = L"0";
			this->Btn_0->UseVisualStyleBackColor = false;
			this->Btn_0->Click += gcnew System::EventHandler(this, &Calculator::Btn_0_Click);
			// 
			// Btn_sign
			// 
			this->Btn_sign->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Btn_sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sign->Location = System::Drawing::Point(15, 381);
			this->Btn_sign->Name = L"Btn_sign";
			this->Btn_sign->Size = System::Drawing::Size(50, 50);
			this->Btn_sign->TabIndex = 19;
			this->Btn_sign->Text = L"+/-";
			this->Btn_sign->UseVisualStyleBackColor = false;
			this->Btn_sign->Click += gcnew System::EventHandler(this, &Calculator::Btn_sign_Click);
			// 
			// Text1
			// 
			this->Text1->BackColor = System::Drawing::SystemColors::Control;
			this->Text1->BeepOnError = true;
			this->Text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Text1->ForeColor = System::Drawing::Color::Black;
			this->Text1->Location = System::Drawing::Point(15, 57);
			this->Text1->Name = L"Text1";
			this->Text1->ReadOnly = true;
			this->Text1->Size = System::Drawing::Size(330, 38);
			this->Text1->TabIndex = 16;
			this->Text1->Text = L"0";
			this->Text1->ValidatingType = System::Int32::typeid;
			// 
			// Btn_equals
			// 
			this->Btn_equals->BackColor = System::Drawing::Color::MediumPurple;
			this->Btn_equals->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_equals->Location = System::Drawing::Point(183, 381);
			this->Btn_equals->Name = L"Btn_equals";
			this->Btn_equals->Size = System::Drawing::Size(50, 50);
			this->Btn_equals->TabIndex = 12;
			this->Btn_equals->Text = L"=";
			this->Btn_equals->UseVisualStyleBackColor = false;
			this->Btn_equals->Click += gcnew System::EventHandler(this, &Calculator::Btn_equals_Click);
			// 
			// Btn_multiply
			// 
			this->Btn_multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_multiply->Location = System::Drawing::Point(183, 213);
			this->Btn_multiply->Name = L"Btn_multiply";
			this->Btn_multiply->Size = System::Drawing::Size(50, 50);
			this->Btn_multiply->TabIndex = 13;
			this->Btn_multiply->Text = L"×";
			this->Btn_multiply->UseVisualStyleBackColor = false;
			this->Btn_multiply->Click += gcnew System::EventHandler(this, &Calculator::Btn_multiply_Click);
			// 
			// Btn_minus
			// 
			this->Btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_minus->Location = System::Drawing::Point(183, 269);
			this->Btn_minus->Name = L"Btn_minus";
			this->Btn_minus->Size = System::Drawing::Size(50, 50);
			this->Btn_minus->TabIndex = 14;
			this->Btn_minus->Text = L"-";
			this->Btn_minus->UseVisualStyleBackColor = false;
			this->Btn_minus->Click += gcnew System::EventHandler(this, &Calculator::Btn_minus_Click);
			// 
			// Btn_plus
			// 
			this->Btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_plus->Location = System::Drawing::Point(183, 325);
			this->Btn_plus->Name = L"Btn_plus";
			this->Btn_plus->Size = System::Drawing::Size(50, 50);
			this->Btn_plus->TabIndex = 15;
			this->Btn_plus->Text = L"+";
			this->Btn_plus->UseVisualStyleBackColor = false;
			this->Btn_plus->Click += gcnew System::EventHandler(this, &Calculator::Btn_plus_Click);
			// 
			// Btn_divide
			// 
			this->Btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_divide->Location = System::Drawing::Point(183, 157);
			this->Btn_divide->Name = L"Btn_divide";
			this->Btn_divide->Size = System::Drawing::Size(50, 50);
			this->Btn_divide->TabIndex = 11;
			this->Btn_divide->Text = L"÷";
			this->Btn_divide->UseVisualStyleBackColor = false;
			this->Btn_divide->Click += gcnew System::EventHandler(this, &Calculator::Btn_divide_Click);
			// 
			// Btn_sqr
			// 
			this->Btn_sqr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_sqr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sqr->Location = System::Drawing::Point(15, 157);
			this->Btn_sqr->Name = L"Btn_sqr";
			this->Btn_sqr->Size = System::Drawing::Size(50, 50);
			this->Btn_sqr->TabIndex = 10;
			this->Btn_sqr->Text = L"sqr(x)";
			this->Btn_sqr->UseVisualStyleBackColor = false;
			this->Btn_sqr->Click += gcnew System::EventHandler(this, &Calculator::Btn_sqr_Click);
			// 
			// Btn_sqrt
			// 
			this->Btn_sqrt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_sqrt->Location = System::Drawing::Point(71, 157);
			this->Btn_sqrt->Name = L"Btn_sqrt";
			this->Btn_sqrt->Size = System::Drawing::Size(50, 50);
			this->Btn_sqrt->TabIndex = 9;
			this->Btn_sqrt->Text = L"sqrt(x)";
			this->Btn_sqrt->UseVisualStyleBackColor = false;
			this->Btn_sqrt->Click += gcnew System::EventHandler(this, &Calculator::Btn_sqrt_Click);
			// 
			// Btn_erase
			// 
			this->Btn_erase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_erase->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_erase->Location = System::Drawing::Point(183, 101);
			this->Btn_erase->Name = L"Btn_erase";
			this->Btn_erase->Size = System::Drawing::Size(50, 50);
			this->Btn_erase->TabIndex = 8;
			this->Btn_erase->Text = L"⌫";
			this->Btn_erase->UseVisualStyleBackColor = false;
			this->Btn_erase->Click += gcnew System::EventHandler(this, &Calculator::Btn_erase_Click);
			// 
			// Btn_CE
			// 
			this->Btn_CE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_CE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_CE->Location = System::Drawing::Point(71, 101);
			this->Btn_CE->Name = L"Btn_CE";
			this->Btn_CE->Size = System::Drawing::Size(50, 50);
			this->Btn_CE->TabIndex = 7;
			this->Btn_CE->Text = L"CE";
			this->Btn_CE->UseVisualStyleBackColor = false;
			this->Btn_CE->Click += gcnew System::EventHandler(this, &Calculator::Btn_CE_Click);
			// 
			// Btn_C
			// 
			this->Btn_C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Btn_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_C->Location = System::Drawing::Point(127, 101);
			this->Btn_C->Name = L"Btn_C";
			this->Btn_C->Size = System::Drawing::Size(50, 50);
			this->Btn_C->TabIndex = 6;
			this->Btn_C->Text = L"C";
			this->Btn_C->UseVisualStyleBackColor = false;
			this->Btn_C->Click += gcnew System::EventHandler(this, &Calculator::Btn_C_Click);
			// 
			// Text2
			// 
			this->Text2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Text2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Text2->Location = System::Drawing::Point(15, 21);
			this->Text2->Name = L"Text2";
			this->Text2->ReadOnly = true;
			this->Text2->Size = System::Drawing::Size(330, 30);
			this->Text2->TabIndex = 5;
			// 
			// Btn_memory_substract
			// 
			this->Btn_memory_substract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_substract->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_substract->Location = System::Drawing::Point(239, 157);
			this->Btn_memory_substract->Name = L"Btn_memory_substract";
			this->Btn_memory_substract->Size = System::Drawing::Size(50, 50);
			this->Btn_memory_substract->TabIndex = 0;
			this->Btn_memory_substract->Text = L"M-";
			this->Btn_memory_substract->UseVisualStyleBackColor = false;
			this->Btn_memory_substract->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_substract_Click);
			// 
			// Btn_memory_add
			// 
			this->Btn_memory_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_add->Location = System::Drawing::Point(239, 101);
			this->Btn_memory_add->Name = L"Btn_memory_add";
			this->Btn_memory_add->Size = System::Drawing::Size(50, 50);
			this->Btn_memory_add->TabIndex = 1;
			this->Btn_memory_add->Text = L"M+";
			this->Btn_memory_add->UseVisualStyleBackColor = false;
			this->Btn_memory_add->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_add_Click);
			// 
			// Btn_memory_save
			// 
			this->Btn_memory_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_memory_save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_memory_save->Location = System::Drawing::Point(295, 157);
			this->Btn_memory_save->Name = L"Btn_memory_save";
			this->Btn_memory_save->Size = System::Drawing::Size(50, 50);
			this->Btn_memory_save->TabIndex = 2;
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
			this->Btn_memory_recall->Location = System::Drawing::Point(295, 101);
			this->Btn_memory_recall->Name = L"Btn_memory_recall";
			this->Btn_memory_recall->Size = System::Drawing::Size(50, 50);
			this->Btn_memory_recall->TabIndex = 3;
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
			this->Btn_memory_clear->Location = System::Drawing::Point(239, 213);
			this->Btn_memory_clear->Name = L"Btn_memory_clear";
			this->Btn_memory_clear->Size = System::Drawing::Size(50, 50);
			this->Btn_memory_clear->TabIndex = 4;
			this->Btn_memory_clear->Text = L"MC";
			this->Btn_memory_clear->UseVisualStyleBackColor = false;
			this->Btn_memory_clear->Click += gcnew System::EventHandler(this, &Calculator::Btn_memory_clear_Click);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox2->BeepOnError = true;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox2->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox2->Location = System::Drawing::Point(423, 65);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->ReadOnly = true;
			this->maskedTextBox2->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox2->TabIndex = 30;
			this->maskedTextBox2->Text = L"0";
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox3->BeepOnError = true;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox3->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox3->Location = System::Drawing::Point(423, 113);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->ReadOnly = true;
			this->maskedTextBox3->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox3->TabIndex = 31;
			this->maskedTextBox3->Text = L"0";
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox4->BeepOnError = true;
			this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox4->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox4->Location = System::Drawing::Point(423, 157);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->ReadOnly = true;
			this->maskedTextBox4->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox4->TabIndex = 32;
			this->maskedTextBox4->Text = L"0";
			this->maskedTextBox4->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox5->BeepOnError = true;
			this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox5->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox5->Location = System::Drawing::Point(423, 201);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->ReadOnly = true;
			this->maskedTextBox5->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox5->TabIndex = 33;
			this->maskedTextBox5->Text = L"0";
			this->maskedTextBox5->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox6->BeepOnError = true;
			this->maskedTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox6->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox6->Location = System::Drawing::Point(423, 245);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->ReadOnly = true;
			this->maskedTextBox6->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox6->TabIndex = 34;
			this->maskedTextBox6->Text = L"0";
			this->maskedTextBox6->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox7->BeepOnError = true;
			this->maskedTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox7->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox7->Location = System::Drawing::Point(423, 289);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->ReadOnly = true;
			this->maskedTextBox7->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox7->TabIndex = 35;
			this->maskedTextBox7->Text = L"0";
			this->maskedTextBox7->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox8->BeepOnError = true;
			this->maskedTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox8->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox8->Location = System::Drawing::Point(423, 333);
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->ReadOnly = true;
			this->maskedTextBox8->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox8->TabIndex = 36;
			this->maskedTextBox8->Text = L"0";
			this->maskedTextBox8->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->BackColor = System::Drawing::SystemColors::Control;
			this->maskedTextBox9->BeepOnError = true;
			this->maskedTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox9->ForeColor = System::Drawing::Color::Black;
			this->maskedTextBox9->Location = System::Drawing::Point(423, 382);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->ReadOnly = true;
			this->maskedTextBox9->Size = System::Drawing::Size(267, 38);
			this->maskedTextBox9->TabIndex = 37;
			this->maskedTextBox9->Text = L"0";
			this->maskedTextBox9->ValidatingType = System::Int32::typeid;
			// 
			// Memory0
			// 
			this->Memory0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Memory0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Memory0->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Memory0->Location = System::Drawing::Point(423, 21);
			this->Memory0->Name = L"Memory0";
			this->Memory0->ReadOnly = true;
			this->Memory0->Size = System::Drawing::Size(267, 30);
			this->Memory0->TabIndex = 38;
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
			this->mc->Location = System::Drawing::Point(423, 21);
			this->mc->Name = L"mc";
			this->mc->Size = System::Drawing::Size(267, 399);
			this->mc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mc->TabIndex = 39;
			this->mc->TabStop = false;
			this->mc->Visible = false;
			// 
			// Btn_MC_real
			// 
			this->Btn_MC_real->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Btn_MC_real->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_MC_real->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Btn_MC_real->Location = System::Drawing::Point(239, 269);
			this->Btn_MC_real->Name = L"Btn_MC_real";
			this->Btn_MC_real->Size = System::Drawing::Size(122, 50);
			this->Btn_MC_real->TabIndex = 40;
			this->Btn_MC_real->Text = L"MC President";
			this->Btn_MC_real->UseVisualStyleBackColor = false;
			this->Btn_MC_real->Click += gcnew System::EventHandler(this, &Calculator::Btn_MC_real_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(702, 442);
			this->Controls->Add(this->Btn_MC_real);
			this->Controls->Add(this->mc);
			this->Controls->Add(this->Memory0);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
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
			this->Controls->Add(this->Text1);
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
			this->HelpButton = true;
			this->Name = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mc))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:Random^ rnd;
	private: array<String^>^ imageFiles;
	private: enum class Operations
	{
		Add,
		Minus,
		Multiply,
		Divide,
		Square,
		SquareRoot
	};
	private: Operations Operation, prevOperation;
	private: double N1, N2, Result;
	private: bool isOperationClicked = false, justPressedEqual = false, justPressedOperation = false, isError = false;
	//private: array<double>^ Memory = gcnew array<double>(10);
	private: double Memory;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (Text1->Culture->Name == "uk-UA")
			Btn_dot->Text = ",";
		rnd = gcnew Random();
		String^ folder = Path::Combine(Application::StartupPath, "images");
		imageFiles = Directory::GetFiles(folder, "*.jpg");
	}
	private: void ResetStuff()
	{
		isOperationClicked = false;
		justPressedEqual = false;
		justPressedOperation = false;
		isError = false;
	}
	private: double DoOperation(Operations operation)
	{
		switch (operation)
		{
			case Operations::Add:
				return N1 + N2;
			case Operations::Minus:
				return N1 - N2;
			case Operations::Multiply:
				return N1 * N2;
			case Operations::Divide:
				if (N2 == 0)
					return Double::PositiveInfinity;
				return N1 / N2;
			case Operations::Square:
				return Math::Pow(N1, 2);
			case Operations::SquareRoot:
				if (N1 < 0)
					return Double::PositiveInfinity;
				return Math::Sqrt(N1);
		}
		return 0;
	}

#pragma region digits
	private: String^ GetNewNum(String^ digit)
	{
		if (Text1->Text == "0" || justPressedEqual || justPressedOperation || isError)
		{
			isError = false;
			ToggleOperations(true);
			justPressedOperation = false;
			justPressedEqual = false;
			return Convert::ToString(digit);
		}
		else
			return Text1->Text + Convert::ToString(digit);
	}

	private: System::Void Btn_1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("1");
	}
	private: System::Void Btn_2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("2");
	}
	private: System::Void Btn_3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("3");
	}
	private: System::Void Btn_4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("4");
	}
	private: System::Void Btn_5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("5");
	}
	private: System::Void Btn_6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("6");
	}
	private: System::Void Btn_7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("7");
	}
	private: System::Void Btn_8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("8");
	}
	private: System::Void Btn_9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("9");
	}
	private: System::Void Btn_0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = GetNewNum("0");
	}
#pragma endregion
#pragma region signs
	private: String^ GetOperation()
	{
		switch (Operation)
		{
		case Operations::Add:
			return "+";
		case Operations::Minus:
			return "-";
		case Operations::Multiply:
			return "*";
		case Operations::Divide:
			return "/";
		}
	}

	private: void WriteOperation()
	{
		justPressedEqual = false;
		double tempN = Double::Parse(Text1->Text);
		if (justPressedOperation)
		{
			Text2->Text = Text1->Text + " " + GetOperation();
		}
		else if (isOperationClicked && tempN != N1)
		{
			N2 = tempN;
			Result = DoOperation(prevOperation);
			Text2->Text = Convert::ToString(Result) + " " + GetOperation();
			Text1->Text = Convert::ToString(Result);
		}
		else
		{
			N1 = tempN;
			Text2->Text = Text1->Text + " " + GetOperation();
			isOperationClicked = true;
		}
		prevOperation = Operation;
		justPressedOperation = true;
	}

	private: System::Void Btn_plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = Operations::Add;
		WriteOperation();
	}
	private: System::Void Btn_minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = Operations::Minus;
		WriteOperation();
	}
	private: System::Void Btn_multiply_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = Operations::Multiply;
		WriteOperation();
	}
	private: System::Void Btn_divide_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Operation = Operations::Divide;
		WriteOperation();
	}
#pragma endregion

	private: void ToggleOperations(bool toggle)
	{
		Btn_dot->Enabled = toggle;
		Btn_plus->Enabled = toggle;
		Btn_minus->Enabled = toggle;
		Btn_multiply->Enabled = toggle;
		Btn_divide->Enabled = toggle;
		Btn_sign->Enabled = toggle;
		Btn_sign->Enabled = toggle;
		Btn_sqr->Enabled = toggle;
		Btn_sqrt->Enabled = toggle;
		Btn_equals->Enabled = toggle;
		//Btn_memory_add->Enabled = toggle;
		//Btn_memory_substract->Enabled = toggle;
		//Btn_memory_clear->Enabled = toggle;
		//Btn_memory_save->Enabled = toggle;
		//Btn_memory_recall->Enabled = toggle;
	}
	private: System::Void Btn_equals_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!isOperationClicked && !justPressedEqual)
			return;
		if (justPressedEqual)
		{
			N1 = Double::Parse(Text1->Text);
			Text2->Text = Text1->Text + Text2->Text->Remove(0, Text2->Text->IndexOf(' '));
		}
		else
		{
			Text2->Text = Text2->Text + " " + Text1->Text + " =";
			N2 = Double::Parse(Text1->Text);
		}
		Result = DoOperation(Operation);
		if (Result == Double::PositiveInfinity)
		{
			Text1->Text = "ERROR :3";
			isError = true;
			ToggleOperations(false);
			return;
		}
		else
			Text1->Text = Convert::ToString(Result);
		isOperationClicked = false;
		justPressedEqual = true;
	}
	private: System::Void Btn_CE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = "0";
	}
	private: System::Void Btn_C_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = "0";
		Text2->Text = "";
		ResetStuff();
	}
	private: System::Void Btn_dot_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Text1->Text->Contains(Btn_dot->Text))
			Text1->Text = Text1->Text + Convert::ToString(Btn_dot->Text);
	}
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
		N1 = Double::Parse(Text1->Text);
		Operation = Operations::SquareRoot;
		Result = DoOperation(Operation);
		if (Result == Double::PositiveInfinity)
		{
			Text1->Text = "ERROR :3";
			isError = true;
			ToggleOperations(false);
			return;
		}
		else
			Text1->Text = Convert::ToString(Result);
	}
	private: System::Void Btn_sqr_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text2->Text = "sqr(" + Text1->Text + ")";
		N1 = Double::Parse(Text1->Text);
		Operation = Operations::Square;
		Result = DoOperation(Operation);
		Text1->Text = Convert::ToString(Result);
	}
	private: System::Void Btn_erase_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Text1->Text->Length > 1)
			Text1->Text = Text1->Text->Remove(Text1->Text->Length - 1);
		else if (Text1->Text->Length == 1)
			Text1->Text = "0";
	}
#pragma region memory
	private: System::Void Btn_memory_clear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory = 0;
		Memory0->Text = "0";
		Btn_memory_recall->Enabled = false;
		Btn_memory_clear->Enabled = false;
	}
	private: System::Void Btn_memory_recall_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Text1->Text = Convert::ToString(Memory);
	}
	private: System::Void Btn_memory_add_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory += Double::Parse(Text1->Text);
		Memory0->Text = Convert::ToString(Memory);
		Btn_memory_recall->Enabled = true;
		Btn_memory_clear->Enabled = true;
	}
	private: System::Void Btn_memory_substract_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory -= Double::Parse(Text1->Text);
		Memory0->Text = Convert::ToString(Memory);
		Btn_memory_recall->Enabled = true;
		Btn_memory_clear->Enabled = true;
	}
	private: System::Void Btn_memory_save_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Memory = Double::Parse(Text1->Text);
		Memory0->Text = Convert::ToString(Memory);
		Btn_memory_recall->Enabled = true;
		Btn_memory_clear->Enabled = true;
	}
#pragma endregion
	private: System::Void Btn_MC_real_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		mc->Visible = !mc->Visible;
		if (mc->Visible)
		mc->Image = Image::FromFile(imageFiles[rnd->Next(imageFiles->Length)]);
	}
};
}