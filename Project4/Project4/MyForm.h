#pragma once
	#include "MyForm1.h"
namespace Project4 {

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
	private: System::Windows::Forms::Label^ labelResult;
	protected:


	private: System::Windows::Forms::Button^ butClear;
	private: System::Windows::Forms::Button^ butPercent;


	private: System::Windows::Forms::Button^ butErraze;
	private: System::Windows::Forms::Button^ butDivision;




	private: System::Windows::Forms::Button^ but1;
	private: System::Windows::Forms::Button^ but2;
	private: System::Windows::Forms::Button^ but3;
	private: System::Windows::Forms::Button^ but4;
	private: System::Windows::Forms::Button^ but7;
	private: System::Windows::Forms::Button^ but00;






	private: System::Windows::Forms::Button^ but5;
	private: System::Windows::Forms::Button^ but6;
	private: System::Windows::Forms::Button^ but8;
	private: System::Windows::Forms::Button^ but0;
	private: System::Windows::Forms::Button^ butMulti;





	private: System::Windows::Forms::Button^ butMinus;

	private: System::Windows::Forms::Button^ but9;
	private: System::Windows::Forms::Button^ butPlus;


	private: System::Windows::Forms::Button^ butt;
	private: System::Windows::Forms::Button^ butEqual;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ butMinus1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ butLog;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button37;




private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ labelRes;





















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
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->butClear = (gcnew System::Windows::Forms::Button());
			this->butPercent = (gcnew System::Windows::Forms::Button());
			this->butErraze = (gcnew System::Windows::Forms::Button());
			this->butDivision = (gcnew System::Windows::Forms::Button());
			this->but1 = (gcnew System::Windows::Forms::Button());
			this->but2 = (gcnew System::Windows::Forms::Button());
			this->but3 = (gcnew System::Windows::Forms::Button());
			this->but4 = (gcnew System::Windows::Forms::Button());
			this->but7 = (gcnew System::Windows::Forms::Button());
			this->but00 = (gcnew System::Windows::Forms::Button());
			this->but5 = (gcnew System::Windows::Forms::Button());
			this->but6 = (gcnew System::Windows::Forms::Button());
			this->but8 = (gcnew System::Windows::Forms::Button());
			this->but0 = (gcnew System::Windows::Forms::Button());
			this->butMulti = (gcnew System::Windows::Forms::Button());
			this->butMinus = (gcnew System::Windows::Forms::Button());
			this->but9 = (gcnew System::Windows::Forms::Button());
			this->butPlus = (gcnew System::Windows::Forms::Button());
			this->butt = (gcnew System::Windows::Forms::Button());
			this->butEqual = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->butMinus1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->butLog = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelResult
			// 
			this->labelResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->ForeColor = System::Drawing::Color::White;
			this->labelResult->Location = System::Drawing::Point(41, 117);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(325, 48);
			this->labelResult->TabIndex = 0;
			this->labelResult->Text = L"0";
			// 
			// butClear
			// 
			this->butClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butClear->ForeColor = System::Drawing::Color::White;
			this->butClear->Location = System::Drawing::Point(32, 128);
			this->butClear->Name = L"butClear";
			this->butClear->Size = System::Drawing::Size(62, 65);
			this->butClear->TabIndex = 2;
			this->butClear->Text = L"C";
			this->butClear->UseVisualStyleBackColor = false;
			this->butClear->Click += gcnew System::EventHandler(this, &MyForm::butClear_Click);
			// 
			// butPercent
			// 
			this->butPercent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butPercent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butPercent->ForeColor = System::Drawing::Color::White;
			this->butPercent->Location = System::Drawing::Point(119, 128);
			this->butPercent->Name = L"butPercent";
			this->butPercent->Size = System::Drawing::Size(62, 65);
			this->butPercent->TabIndex = 3;
			this->butPercent->Text = L"%";
			this->butPercent->UseVisualStyleBackColor = false;
			this->butPercent->Click += gcnew System::EventHandler(this, &MyForm::butPercent_Click);
			// 
			// butErraze
			// 
			this->butErraze->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butErraze->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butErraze->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butErraze->ForeColor = System::Drawing::Color::White;
			this->butErraze->Location = System::Drawing::Point(207, 128);
			this->butErraze->Name = L"butErraze";
			this->butErraze->Size = System::Drawing::Size(62, 65);
			this->butErraze->TabIndex = 4;
			this->butErraze->Text = L"⌫";
			this->butErraze->UseVisualStyleBackColor = false;
			this->butErraze->Click += gcnew System::EventHandler(this, &MyForm::butErraze_Click);
			// 
			// butDivision
			// 
			this->butDivision->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butDivision->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butDivision->ForeColor = System::Drawing::Color::White;
			this->butDivision->Location = System::Drawing::Point(295, 128);
			this->butDivision->Name = L"butDivision";
			this->butDivision->Size = System::Drawing::Size(62, 65);
			this->butDivision->TabIndex = 5;
			this->butDivision->Text = L"/";
			this->butDivision->UseVisualStyleBackColor = false;
			this->butDivision->Click += gcnew System::EventHandler(this, &MyForm::butDivision_Click);
			// 
			// but1
			// 
			this->but1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but1->ForeColor = System::Drawing::Color::White;
			this->but1->Location = System::Drawing::Point(32, 214);
			this->but1->Name = L"but1";
			this->but1->Size = System::Drawing::Size(62, 65);
			this->but1->TabIndex = 6;
			this->but1->Text = L"1";
			this->but1->UseVisualStyleBackColor = false;
			this->but1->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but2
			// 
			this->but2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but2->ForeColor = System::Drawing::Color::White;
			this->but2->Location = System::Drawing::Point(119, 214);
			this->but2->Name = L"but2";
			this->but2->Size = System::Drawing::Size(62, 65);
			this->but2->TabIndex = 7;
			this->but2->Text = L"2";
			this->but2->UseVisualStyleBackColor = false;
			this->but2->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but3
			// 
			this->but3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but3->ForeColor = System::Drawing::Color::White;
			this->but3->Location = System::Drawing::Point(207, 214);
			this->but3->Name = L"but3";
			this->but3->Size = System::Drawing::Size(62, 65);
			this->but3->TabIndex = 8;
			this->but3->Text = L"3";
			this->but3->UseVisualStyleBackColor = false;
			this->but3->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but4
			// 
			this->but4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but4->ForeColor = System::Drawing::Color::White;
			this->but4->Location = System::Drawing::Point(32, 301);
			this->but4->Name = L"but4";
			this->but4->Size = System::Drawing::Size(62, 65);
			this->but4->TabIndex = 9;
			this->but4->Text = L"4";
			this->but4->UseVisualStyleBackColor = false;
			this->but4->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but7
			// 
			this->but7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but7->ForeColor = System::Drawing::Color::White;
			this->but7->Location = System::Drawing::Point(32, 393);
			this->but7->Name = L"but7";
			this->but7->Size = System::Drawing::Size(62, 65);
			this->but7->TabIndex = 10;
			this->but7->Text = L"7";
			this->but7->UseVisualStyleBackColor = false;
			this->but7->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but00
			// 
			this->but00->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but00->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but00->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but00->ForeColor = System::Drawing::Color::White;
			this->but00->Location = System::Drawing::Point(32, 482);
			this->but00->Name = L"but00";
			this->but00->Size = System::Drawing::Size(62, 65);
			this->but00->TabIndex = 11;
			this->but00->Text = L"00";
			this->but00->UseVisualStyleBackColor = false;
			this->but00->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but5
			// 
			this->but5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but5->ForeColor = System::Drawing::Color::White;
			this->but5->Location = System::Drawing::Point(119, 301);
			this->but5->Name = L"but5";
			this->but5->Size = System::Drawing::Size(62, 65);
			this->but5->TabIndex = 12;
			this->but5->Text = L"5";
			this->but5->UseVisualStyleBackColor = false;
			this->but5->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but6
			// 
			this->but6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but6->ForeColor = System::Drawing::Color::White;
			this->but6->Location = System::Drawing::Point(207, 301);
			this->but6->Name = L"but6";
			this->but6->Size = System::Drawing::Size(62, 65);
			this->but6->TabIndex = 13;
			this->but6->Text = L"6";
			this->but6->UseVisualStyleBackColor = false;
			this->but6->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but8
			// 
			this->but8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but8->ForeColor = System::Drawing::Color::White;
			this->but8->Location = System::Drawing::Point(119, 393);
			this->but8->Name = L"but8";
			this->but8->Size = System::Drawing::Size(62, 65);
			this->but8->TabIndex = 13;
			this->but8->Text = L"8";
			this->but8->UseVisualStyleBackColor = false;
			this->but8->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// but0
			// 
			this->but0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but0->ForeColor = System::Drawing::Color::White;
			this->but0->Location = System::Drawing::Point(119, 482);
			this->but0->Name = L"but0";
			this->but0->Size = System::Drawing::Size(62, 65);
			this->but0->TabIndex = 14;
			this->but0->Text = L"0";
			this->but0->UseVisualStyleBackColor = false;
			this->but0->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// butMulti
			// 
			this->butMulti->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butMulti->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMulti->ForeColor = System::Drawing::Color::White;
			this->butMulti->Location = System::Drawing::Point(295, 214);
			this->butMulti->Name = L"butMulti";
			this->butMulti->Size = System::Drawing::Size(62, 65);
			this->butMulti->TabIndex = 15;
			this->butMulti->Text = L"*";
			this->butMulti->UseVisualStyleBackColor = false;
			this->butMulti->Click += gcnew System::EventHandler(this, &MyForm::butMulti_Click);
			// 
			// butMinus
			// 
			this->butMinus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butMinus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMinus->ForeColor = System::Drawing::Color::White;
			this->butMinus->Location = System::Drawing::Point(295, 301);
			this->butMinus->Name = L"butMinus";
			this->butMinus->Size = System::Drawing::Size(62, 65);
			this->butMinus->TabIndex = 16;
			this->butMinus->Text = L"-";
			this->butMinus->UseVisualStyleBackColor = false;
			this->butMinus->Click += gcnew System::EventHandler(this, &MyForm::butMinus_Click);
			// 
			// but9
			// 
			this->but9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but9->ForeColor = System::Drawing::Color::White;
			this->but9->Location = System::Drawing::Point(207, 393);
			this->but9->Name = L"but9";
			this->but9->Size = System::Drawing::Size(62, 65);
			this->but9->TabIndex = 17;
			this->but9->Text = L"9";
			this->but9->UseVisualStyleBackColor = false;
			this->but9->Click += gcnew System::EventHandler(this, &MyForm::math_operators);
			// 
			// butPlus
			// 
			this->butPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butPlus->ForeColor = System::Drawing::Color::White;
			this->butPlus->Location = System::Drawing::Point(295, 393);
			this->butPlus->Name = L"butPlus";
			this->butPlus->Size = System::Drawing::Size(62, 65);
			this->butPlus->TabIndex = 18;
			this->butPlus->Text = L"+";
			this->butPlus->UseVisualStyleBackColor = false;
			this->butPlus->Click += gcnew System::EventHandler(this, &MyForm::butPlus_Click);
			// 
			// butt
			// 
			this->butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->butt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt->ForeColor = System::Drawing::Color::White;
			this->butt->Location = System::Drawing::Point(207, 482);
			this->butt->Name = L"butt";
			this->butt->Size = System::Drawing::Size(62, 65);
			this->butt->TabIndex = 19;
			this->butt->Text = L",";
			this->butt->UseVisualStyleBackColor = false;
			this->butt->Click += gcnew System::EventHandler(this, &MyForm::butt_Click);
			// 
			// butEqual
			// 
			this->butEqual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->butEqual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butEqual->ForeColor = System::Drawing::Color::White;
			this->butEqual->Location = System::Drawing::Point(295, 482);
			this->butEqual->Name = L"butEqual";
			this->butEqual->Size = System::Drawing::Size(62, 65);
			this->butEqual->TabIndex = 20;
			this->butEqual->Text = L"=";
			this->butEqual->UseVisualStyleBackColor = false;
			this->butEqual->Click += gcnew System::EventHandler(this, &MyForm::butEqual_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->groupBox1->Controls->Add(this->button37);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->butMinus1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->butLog);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->labelResult);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button26);
			this->groupBox1->Controls->Add(this->button27);
			this->groupBox1->Controls->Add(this->button28);
			this->groupBox1->Controls->Add(this->button29);
			this->groupBox1->Controls->Add(this->button30);
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->button32);
			this->groupBox1->Controls->Add(this->button33);
			this->groupBox1->Controls->Add(this->button34);
			this->groupBox1->Controls->Add(this->button35);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->ForeColor = System::Drawing::Color::Coral;
			this->groupBox1->Location = System::Drawing::Point(-9, -40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(459, 621);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(21, 52);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(37, 40);
			this->button37->TabIndex = 94;
			this->button37->Text = L"≡";
			this->button37->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(236, 188);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(59, 44);
			this->button13->TabIndex = 93;
			this->button13->Text = L"CE";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(171, 189);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(59, 44);
			this->button16->TabIndex = 92;
			this->button16->Text = L"e";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204), true));
			this->button19->ForeColor = System::Drawing::Color::Tomato;
			this->button19->Location = System::Drawing::Point(106, 188);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(59, 44);
			this->button19->TabIndex = 91;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(41, 188);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(59, 44);
			this->button22->TabIndex = 90;
			this->button22->Text = L"e^x";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(301, 188);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(59, 44);
			this->button25->TabIndex = 89;
			this->button25->Text = L"⌫";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(236, 288);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(59, 44);
			this->button23->TabIndex = 88;
			this->button23->Text = L"n!";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(236, 238);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(59, 44);
			this->button24->TabIndex = 87;
			this->button24->Text = L"exp";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(171, 288);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(59, 44);
			this->button20->TabIndex = 86;
			this->button20->Text = L"x^3";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(171, 238);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(59, 44);
			this->button21->TabIndex = 85;
			this->button21->Text = L"|x|";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(106, 288);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(59, 44);
			this->button17->TabIndex = 84;
			this->button17->Text = L"2^x";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(113, 238);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(59, 44);
			this->button18->TabIndex = 83;
			this->button18->Text = L"1/x";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(41, 288);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(59, 44);
			this->button14->TabIndex = 82;
			this->button14->Text = L"2√x";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(41, 238);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(59, 44);
			this->button15->TabIndex = 81;
			this->button15->Text = L"x^2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(301, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 44);
			this->button3->TabIndex = 80;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::butDivision_Click_1);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(301, 238);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(59, 44);
			this->button12->TabIndex = 79;
			this->button12->Text = L"mod";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(301, 438);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 44);
			this->button4->TabIndex = 78;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::butPlus_Click_1);
			// 
			// butMinus1
			// 
			this->butMinus1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butMinus1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butMinus1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMinus1->ForeColor = System::Drawing::Color::White;
			this->butMinus1->Location = System::Drawing::Point(301, 388);
			this->butMinus1->Name = L"butMinus1";
			this->butMinus1->Size = System::Drawing::Size(59, 44);
			this->butMinus1->TabIndex = 77;
			this->butMinus1->Text = L"-";
			this->butMinus1->UseVisualStyleBackColor = false;
			this->butMinus1->Click += gcnew System::EventHandler(this, &MyForm::butMinus_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(301, 338);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 44);
			this->button5->TabIndex = 76;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::butMulti_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(301, 488);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 44);
			this->button7->TabIndex = 75;
			this->button7->Text = L"=";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::butEqual1_Click);
			// 
			// butLog
			// 
			this->butLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butLog->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butLog->ForeColor = System::Drawing::Color::White;
			this->butLog->Location = System::Drawing::Point(41, 438);
			this->butLog->Name = L"butLog";
			this->butLog->Size = System::Drawing::Size(59, 44);
			this->butLog->TabIndex = 74;
			this->butLog->Text = L"log";
			this->butLog->UseVisualStyleBackColor = false;
			this->butLog->Click += gcnew System::EventHandler(this, &MyForm::butLog_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(41, 388);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 44);
			this->button6->TabIndex = 73;
			this->button6->Text = L"10^x";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(41, 338);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 44);
			this->button8->TabIndex = 72;
			this->button8->Text = L"x^y";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(41, 488);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 44);
			this->button9->TabIndex = 71;
			this->button9->Text = L"ln";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(236, 488);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(59, 44);
			this->button10->TabIndex = 70;
			this->button10->Text = L",";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::butt1_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(106, 488);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(59, 44);
			this->button11->TabIndex = 69;
			this->button11->Text = L"+/-";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::b1_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(236, 438);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(59, 44);
			this->button26->TabIndex = 68;
			this->button26->Text = L"9";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(171, 488);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(59, 44);
			this->button27->TabIndex = 67;
			this->button27->Text = L"0";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(171, 438);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(59, 44);
			this->button28->TabIndex = 65;
			this->button28->Text = L"8";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(236, 388);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(59, 44);
			this->button29->TabIndex = 66;
			this->button29->Text = L"6";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(171, 388);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(59, 44);
			this->button30->TabIndex = 64;
			this->button30->Text = L"5";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(106, 438);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(59, 44);
			this->button31->TabIndex = 63;
			this->button31->Text = L"7";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(106, 388);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(59, 44);
			this->button32->TabIndex = 62;
			this->button32->Text = L"4";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(236, 338);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(59, 44);
			this->button33->TabIndex = 61;
			this->button33->Text = L"3";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(171, 338);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(59, 44);
			this->button34->TabIndex = 60;
			this->button34->Text = L"2";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(106, 338);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(59, 44);
			this->button35->TabIndex = 59;
			this->button35->Text = L"1";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// labelRes
			// 
			this->labelRes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRes->ForeColor = System::Drawing::Color::White;
			this->labelRes->Location = System::Drawing::Point(32, 67);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(325, 48);
			this->labelRes->TabIndex = 97;
			this->labelRes->Text = L"0";
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(323, 21);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(34, 31);
			this->button38->TabIndex = 25;
			this->button38->Text = L"X";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::World,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 40);
			this->button1->TabIndex = 95;
			this->button1->Text = L"≡";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(381, 578);
			this->Controls->Add(this->labelRes);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->butEqual);
			this->Controls->Add(this->butt);
			this->Controls->Add(this->butPlus);
			this->Controls->Add(this->but9);
			this->Controls->Add(this->butMinus);
			this->Controls->Add(this->butMulti);
			this->Controls->Add(this->but0);
			this->Controls->Add(this->but8);
			this->Controls->Add(this->but6);
			this->Controls->Add(this->but5);
			this->Controls->Add(this->but00);
			this->Controls->Add(this->but7);
			this->Controls->Add(this->but4);
			this->Controls->Add(this->but3);
			this->Controls->Add(this->but2);
			this->Controls->Add(this->but1);
			this->Controls->Add(this->butDivision);
			this->Controls->Add(this->butErraze);
			this->Controls->Add(this->butPercent);
			this->Controls->Add(this->butClear);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Double firstNum;
		private: char Sign = ' ';
		private: bool check = false;
		private: bool  groopVisible = 0;
		GroupBox^ group = gcnew GroupBox();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void math_operators(System::Object^ sender, System::EventArgs^ e) 
	{
		Button^ button = safe_cast<Button^>(sender);
		if (check == true || this->labelRes->Text == "0")
		{
			this->labelRes->Text = button->Text;
			check = false;
		}
		else
			this->labelRes->Text += button->Text;
	}
	private: System::Void math_operator(char sign) 
	{
		this->firstNum = System::Convert::ToDouble(this->labelRes->Text);
		this->labelRes->Text = "0";
		this->Sign = sign;	
	}
	private: System::Void butDivision_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator('/');
	}
	private: System::Void butMulti_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator('*');
	}
	private: System::Void butMinus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator('-');
	}
	private: System::Void butPlus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator('+');
	}
	private: System::Void butPercent_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator('%');
	}
	private: System::Void butEqual_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Sign == ' ')
			return;
		check = true;
		Double secondNum = System::Convert::ToDouble(this->labelRes->Text);
		Double result = 0;
		if (Sign == '-')
			result = this->firstNum - secondNum;
		else if (Sign == '+')
			result = this->firstNum + secondNum;
		else if (Sign == '*')
			result = this->firstNum * secondNum;
		else if (Sign == '/')
			if (secondNum == 0)
			{
				result = 0;
				MessageBox::Show(this, "Действие Запрещено", "Ошибка", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			}
			else 
			 result = this->firstNum / secondNum;
		 else if (Sign == '%')
		 {
			 result = (this->firstNum/100) * secondNum;
		 }
		 this->labelRes->Text = System::Convert::ToString(result);
	}		
	private: System::Void butt_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (check == 1&&!this->Text->Contains(","))
		{
			this->labelRes->Text = "0,";
			check = 0;
		}
		else if(!this->Text->Contains(","))
		this->labelRes->Text += ",";
	}
	private: System::Void butErraze_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (check == 0 && this->labelRes->Text->Length > 1)
			this->labelRes->Text = this->labelRes->Text->Remove(this->labelRes->Text->Length - 1);
		else if (this->labelRes->Text->Length <= 1)
		{
			this->labelRes->Text = this->labelRes->Text->Remove(this->labelRes->Text->Length - 1);
			this->labelRes->Text = "0";
		}
		else
		{
			this->labelRes->Text = this->labelRes->Text->Remove(0);
			firstNum = 0;
			this->labelRes->Text = "0";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MyForm1^ sett = gcnew MyForm1;
		sett->Show();
	}
	private: System::Void butClear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->labelRes->Text = this->labelRes->Text->Remove(0);
		firstNum = 0;
		this->labelRes->Text = "0";
	}
	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (groopVisible == false)
		{
			groupBox1->Visible = 1;
			labelRes->Visible = 0;
			groopVisible = 1;
		}
		else
		{
			groupBox1->Visible = 0;
			labelRes->Visible = 1;
			groopVisible = 0;
		}

	}
	private: System::Void but1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Button^ button = safe_cast<Button^>(sender);
		if (check == true || this->labelResult->Text == "0")
		{
			this->labelResult->Text = button->Text;
			check = false;
		}
		else
			this->labelResult->Text += button->Text;
	}
	private: System::Void butt1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (check == 1 && !this->Text->Contains(","))
		{
			this->labelResult->Text = "0,";
			check = 0;
		}
		else if (!this->Text->Contains(","))
			this->labelResult->Text += ",";
	}
	private: System::Void but_close_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double buff = System::Convert::ToDouble(this->labelResult->Text);
		this->labelResult->Text = System::Convert::ToString(buff = buff - buff - buff);
	}
	   private: System::Void math_operator_1(char sign) {
		   this->firstNum = System::Convert::ToDouble(this->labelResult->Text);
		   this->labelResult->Text = "0";
		   this->Sign = sign;

	   }
	private: System::Void butDivision_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator_1('/');
	}
	private: System::Void butMulti_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator_1('*');
	}
	private: System::Void butMinus_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator_1('-');
	}
	private: System::Void butPlus_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator_1('+');
	}
	private: System::Void butEqual1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Sign == ' ')
			return;
		check = true;
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result{};
		if (Sign == '-')
			result = this->firstNum - secondNum;
		else if (Sign == '+')
			result = this->firstNum + secondNum;
		else if (Sign == '*')
			result = this->firstNum * secondNum;
		else if (Sign == '/')
			if (secondNum == 0)
			{
				result = 0;
				MessageBox::Show(this, "Действие Запрещено", "Ошибка", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			}
			else
				result = this->firstNum / secondNum;
		else if (Sign == '^')
			result = pow(this->firstNum, secondNum);

		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void butLog_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = log(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->labelResult->Text = "3,14159265359";
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = exp(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = log10(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_operator_1('^');
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
	Double result;
	result = pow(10, secondNum);
	this->labelResult->Text = System::Convert::ToString(result);
}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = sqrt(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(secondNum, 2);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = 1 / secondNum;
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		this->labelResult->Text = System::Convert::ToString(abs(secondNum));
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->labelResult->Text = this->labelResult->Text->Remove(0);
		firstNum = 0;
		this->labelResult->Text = "0";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (check == 0 && this->labelResult->Text->Length > 1)
			this->labelResult->Text = this->labelResult->Text->Remove(this->labelResult->Text->Length - 1);
		else if (this->labelResult->Text->Length <= 1)
		{
			this->labelResult->Text = this->labelResult->Text->Remove(this->labelResult->Text->Length - 1);
			this->labelResult->Text = "0";
		}
		else
		{
			this->labelResult->Text = this->labelResult->Text->Remove(0);
			firstNum = 0;
			this->labelResult->Text = "0";
		}
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->labelResult->Text = "2,718";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(2.718, secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void butt_Click_1(System::Object^ sender, System::EventArgs^ e) 
	{

		if (check == 1)
		{
			this->labelResult->Text = "0,";
			check = 0;
		}
		else
			this->labelResult->Text += ",";
	}

	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result = secondNum;
		for (int i = 1; i < secondNum; i++)
			result *= i;
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);

		this->labelResult->Text = System::Convert::ToString(int(secondNum));
		}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(2, secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(secondNum, 3);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	};
}
