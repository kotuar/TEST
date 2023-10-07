#pragma once
#include <cmath>
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ but_close;
	private: System::Windows::Forms::Button^ but9;
	private: System::Windows::Forms::Button^ but0;
	private: System::Windows::Forms::Button^ but8;
	private: System::Windows::Forms::Button^ but6;
	private: System::Windows::Forms::Button^ but5;

	private: System::Windows::Forms::Button^ but7;
	private: System::Windows::Forms::Button^ but4;
	private: System::Windows::Forms::Button^ but3;
	private: System::Windows::Forms::Button^ but2;
	private: System::Windows::Forms::Button^ but1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ butt;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ butLog;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ butPlus;
	private: System::Windows::Forms::Button^ butMinus1;



	private: System::Windows::Forms::Button^ butMulti;

	private: System::Windows::Forms::Button^ butDivision;

	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;

	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;

	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ labelResult;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->but_close = (gcnew System::Windows::Forms::Button());
			this->but9 = (gcnew System::Windows::Forms::Button());
			this->but0 = (gcnew System::Windows::Forms::Button());
			this->but8 = (gcnew System::Windows::Forms::Button());
			this->but6 = (gcnew System::Windows::Forms::Button());
			this->but5 = (gcnew System::Windows::Forms::Button());
			this->but7 = (gcnew System::Windows::Forms::Button());
			this->but4 = (gcnew System::Windows::Forms::Button());
			this->but3 = (gcnew System::Windows::Forms::Button());
			this->but2 = (gcnew System::Windows::Forms::Button());
			this->but1 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->butt = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->butLog = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->butPlus = (gcnew System::Windows::Forms::Button());
			this->butMinus1 = (gcnew System::Windows::Forms::Button());
			this->butMulti = (gcnew System::Windows::Forms::Button());
			this->butDivision = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// but_close
			// 
			this->but_close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->but_close->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_close->Location = System::Drawing::Point(297, 12);
			this->but_close->Name = L"but_close";
			this->but_close->Size = System::Drawing::Size(34, 31);
			this->but_close->TabIndex = 2;
			this->but_close->Text = L"X";
			this->but_close->UseVisualStyleBackColor = false;
			this->but_close->Click += gcnew System::EventHandler(this, &MyForm1::but_close_Click_1);
			// 
			// but9
			// 
			this->but9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but9->ForeColor = System::Drawing::Color::White;
			this->but9->Location = System::Drawing::Point(207, 369);
			this->but9->Name = L"but9";
			this->but9->Size = System::Drawing::Size(59, 44);
			this->but9->TabIndex = 28;
			this->but9->Text = L"9";
			this->but9->UseVisualStyleBackColor = false;
			this->but9->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but0
			// 
			this->but0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but0->ForeColor = System::Drawing::Color::White;
			this->but0->Location = System::Drawing::Point(142, 419);
			this->but0->Name = L"but0";
			this->but0->Size = System::Drawing::Size(59, 44);
			this->but0->TabIndex = 27;
			this->but0->Text = L"0";
			this->but0->UseVisualStyleBackColor = false;
			this->but0->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but8
			// 
			this->but8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but8->ForeColor = System::Drawing::Color::White;
			this->but8->Location = System::Drawing::Point(142, 369);
			this->but8->Name = L"but8";
			this->but8->Size = System::Drawing::Size(59, 44);
			this->but8->TabIndex = 25;
			this->but8->Text = L"8";
			this->but8->UseVisualStyleBackColor = false;
			this->but8->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but6
			// 
			this->but6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but6->ForeColor = System::Drawing::Color::White;
			this->but6->Location = System::Drawing::Point(207, 319);
			this->but6->Name = L"but6";
			this->but6->Size = System::Drawing::Size(59, 44);
			this->but6->TabIndex = 26;
			this->but6->Text = L"6";
			this->but6->UseVisualStyleBackColor = false;
			this->but6->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but5
			// 
			this->but5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but5->ForeColor = System::Drawing::Color::White;
			this->but5->Location = System::Drawing::Point(142, 319);
			this->but5->Name = L"but5";
			this->but5->Size = System::Drawing::Size(59, 44);
			this->but5->TabIndex = 24;
			this->but5->Text = L"5";
			this->but5->UseVisualStyleBackColor = false;
			this->but5->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but7
			// 
			this->but7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but7->ForeColor = System::Drawing::Color::White;
			this->but7->Location = System::Drawing::Point(77, 369);
			this->but7->Name = L"but7";
			this->but7->Size = System::Drawing::Size(59, 44);
			this->but7->TabIndex = 22;
			this->but7->Text = L"7";
			this->but7->UseVisualStyleBackColor = false;
			this->but7->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but4
			// 
			this->but4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but4->ForeColor = System::Drawing::Color::White;
			this->but4->Location = System::Drawing::Point(77, 319);
			this->but4->Name = L"but4";
			this->but4->Size = System::Drawing::Size(59, 44);
			this->but4->TabIndex = 21;
			this->but4->Text = L"4";
			this->but4->UseVisualStyleBackColor = false;
			this->but4->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but3
			// 
			this->but3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but3->ForeColor = System::Drawing::Color::White;
			this->but3->Location = System::Drawing::Point(207, 269);
			this->but3->Name = L"but3";
			this->but3->Size = System::Drawing::Size(59, 44);
			this->but3->TabIndex = 20;
			this->but3->Text = L"3";
			this->but3->UseVisualStyleBackColor = false;
			this->but3->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but2
			// 
			this->but2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but2->ForeColor = System::Drawing::Color::White;
			this->but2->Location = System::Drawing::Point(142, 269);
			this->but2->Name = L"but2";
			this->but2->Size = System::Drawing::Size(59, 44);
			this->but2->TabIndex = 19;
			this->but2->Text = L"2";
			this->but2->UseVisualStyleBackColor = false;
			this->but2->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// but1
			// 
			this->but1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->but1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->but1->ForeColor = System::Drawing::Color::White;
			this->but1->Location = System::Drawing::Point(77, 269);
			this->but1->Name = L"but1";
			this->but1->Size = System::Drawing::Size(59, 44);
			this->but1->TabIndex = 18;
			this->but1->Text = L"1";
			this->but1->UseVisualStyleBackColor = false;
			this->but1->Click += gcnew System::EventHandler(this, &MyForm1::but1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(77, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 44);
			this->button1->TabIndex = 29;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// butt
			// 
			this->butt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->butt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butt->ForeColor = System::Drawing::Color::White;
			this->butt->Location = System::Drawing::Point(207, 419);
			this->butt->Name = L"butt";
			this->butt->Size = System::Drawing::Size(59, 44);
			this->butt->TabIndex = 30;
			this->butt->Text = L",";
			this->butt->UseVisualStyleBackColor = false;
			this->butt->Click += gcnew System::EventHandler(this, &MyForm1::butt_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(12, 419);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 44);
			this->button3->TabIndex = 31;
			this->button3->Text = L"ln";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(12, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 44);
			this->button4->TabIndex = 32;
			this->button4->Text = L"x^y";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 44);
			this->button5->TabIndex = 33;
			this->button5->Text = L"10^x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// butLog
			// 
			this->butLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butLog->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butLog->ForeColor = System::Drawing::Color::White;
			this->butLog->Location = System::Drawing::Point(12, 369);
			this->butLog->Name = L"butLog";
			this->butLog->Size = System::Drawing::Size(59, 44);
			this->butLog->TabIndex = 34;
			this->butLog->Text = L"log";
			this->butLog->UseVisualStyleBackColor = false;
			this->butLog->Click += gcnew System::EventHandler(this, &MyForm1::butLog_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(272, 419);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 44);
			this->button7->TabIndex = 35;
			this->button7->Text = L"=";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::butEqual_Click);
			// 
			// butPlus
			// 
			this->butPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butPlus->ForeColor = System::Drawing::Color::White;
			this->butPlus->Location = System::Drawing::Point(272, 369);
			this->butPlus->Name = L"butPlus";
			this->butPlus->Size = System::Drawing::Size(59, 44);
			this->butPlus->TabIndex = 38;
			this->butPlus->Text = L"+";
			this->butPlus->UseVisualStyleBackColor = false;
			this->butPlus->Click += gcnew System::EventHandler(this, &MyForm1::butPlus_Click_1);
			// 
			// butMinus1
			// 
			this->butMinus1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butMinus1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butMinus1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMinus1->ForeColor = System::Drawing::Color::White;
			this->butMinus1->Location = System::Drawing::Point(272, 319);
			this->butMinus1->Name = L"butMinus1";
			this->butMinus1->Size = System::Drawing::Size(59, 44);
			this->butMinus1->TabIndex = 37;
			this->butMinus1->Text = L"-";
			this->butMinus1->UseVisualStyleBackColor = false;
			this->butMinus1->Click += gcnew System::EventHandler(this, &MyForm1::butMinus_Click_1);
			// 
			// butMulti
			// 
			this->butMulti->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butMulti->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butMulti->ForeColor = System::Drawing::Color::White;
			this->butMulti->Location = System::Drawing::Point(272, 269);
			this->butMulti->Name = L"butMulti";
			this->butMulti->Size = System::Drawing::Size(59, 44);
			this->butMulti->TabIndex = 36;
			this->butMulti->Text = L"*";
			this->butMulti->UseVisualStyleBackColor = false;
			this->butMulti->Click += gcnew System::EventHandler(this, &MyForm1::butMulti_Click_1);
			// 
			// butDivision
			// 
			this->butDivision->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->butDivision->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->butDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butDivision->ForeColor = System::Drawing::Color::White;
			this->butDivision->Location = System::Drawing::Point(272, 219);
			this->butDivision->Name = L"butDivision";
			this->butDivision->Size = System::Drawing::Size(59, 44);
			this->butDivision->TabIndex = 41;
			this->butDivision->Text = L"/";
			this->butDivision->UseVisualStyleBackColor = false;
			this->butDivision->Click += gcnew System::EventHandler(this, &MyForm1::butDivision_Click_1);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(272, 169);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(59, 44);
			this->button12->TabIndex = 40;
			this->button12->Text = L"mod";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(12, 219);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(59, 44);
			this->button14->TabIndex = 44;
			this->button14->Text = L"2√x";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(12, 169);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(59, 44);
			this->button15->TabIndex = 43;
			this->button15->Text = L"x^2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(77, 219);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(59, 44);
			this->button17->TabIndex = 47;
			this->button17->Text = L"2^x";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm1::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(77, 169);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(59, 44);
			this->button18->TabIndex = 46;
			this->button18->Text = L"1/x";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm1::button18_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(142, 219);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(59, 44);
			this->button20->TabIndex = 50;
			this->button20->Text = L"x^3";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm1::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(142, 169);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(59, 44);
			this->button21->TabIndex = 49;
			this->button21->Text = L"|x|";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm1::button21_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(207, 219);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(59, 44);
			this->button23->TabIndex = 53;
			this->button23->Text = L"n!";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm1::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(207, 169);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(59, 44);
			this->button24->TabIndex = 52;
			this->button24->Text = L"exp";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm1::button24_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(207, 119);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(59, 44);
			this->button13->TabIndex = 58;
			this->button13->Text = L"CE";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(142, 120);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(59, 44);
			this->button16->TabIndex = 57;
			this->button16->Text = L"e";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm1::button16_Click);
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
			this->button19->Location = System::Drawing::Point(77, 119);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(59, 44);
			this->button19->TabIndex = 56;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm1::button19_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(12, 119);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(59, 44);
			this->button22->TabIndex = 55;
			this->button22->Text = L"e^x";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm1::button22_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(272, 119);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(59, 44);
			this->button25->TabIndex = 54;
			this->button25->Text = L"⌫";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm1::button25_Click);
			// 
			// labelResult
			// 
			this->labelResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelResult->Location = System::Drawing::Point(6, 56);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(325, 48);
			this->labelResult->TabIndex = 59;
			this->labelResult->Text = L"0";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(343, 475);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->butDivision);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->butPlus);
			this->Controls->Add(this->butMinus1);
			this->Controls->Add(this->butMulti);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->butLog);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->butt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->but9);
			this->Controls->Add(this->but0);
			this->Controls->Add(this->but8);
			this->Controls->Add(this->but6);
			this->Controls->Add(this->but5);
			this->Controls->Add(this->but7);
			this->Controls->Add(this->but4);
			this->Controls->Add(this->but3);
			this->Controls->Add(this->but2);
			this->Controls->Add(this->but1);
			this->Controls->Add(this->but_close);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Double firstNum;
		private: char Sign;
		private: bool check = false;
	
	private: System::Void but1_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (check == true || this->labelResult->Text == "0")
		{
			this->labelResult->Text = button->Text;
			check = false;
		}
		else
			this->labelResult->Text += button->Text;
	}
	private: System::Void butt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (check == 1)
		{
			this->labelResult->Text = "0,";
			check = 0;
		}
		else
			this->labelResult->Text += ",";
	}
	private: System::Void but_close_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double buff = System::Convert::ToDouble(this->labelResult->Text);
		this->labelResult->Text = System::Convert::ToString(buff = buff - buff - buff);
	}
	   private: System::Void math_operator_1(char sign) {
		   this->firstNum = System::Convert::ToDouble(this->labelResult->Text);
		   this->labelResult->Text = "0";
		   this->Sign = sign;

	   }
	private: System::Void butDivision_Click_1(System::Object^ sender, System::EventArgs^ e) {
		math_operator_1('/');
	}
	private: System::Void butMulti_Click_1(System::Object^ sender, System::EventArgs^ e) {
		math_operator_1('*');
	}
	private: System::Void butMinus_Click_1(System::Object^ sender, System::EventArgs^ e) {
		math_operator_1('-');
	}
	private: System::Void butPlus_Click_1(System::Object^ sender, System::EventArgs^ e) {
		math_operator_1('+');
	}
	private: System::Void butEqual_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void butLog_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::	ToDouble(this->labelResult->Text);
		Double result;
		result = log(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelResult->Text = "3,14159265359";
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = exp(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = log10(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		math_operator_1('^');
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
	Double result;
	result = pow(10,secondNum);
	this->labelResult->Text = System::Convert::ToString(result);
}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = sqrt(secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(secondNum, 2);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = 1 / secondNum;
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		this->labelResult->Text = System::Convert::ToString(abs(secondNum));
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelResult->Text = this->labelResult->Text->Remove(0);
		firstNum = 0;
		this->labelResult->Text = "0";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelResult->Text = "2,718";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
		Double result;
		result = pow(2.718, secondNum);
		this->labelResult->Text = System::Convert::ToString(result);
	}
	private: System::Void butt_Click_1(System::Object^ sender, System::EventArgs^ e) {

		if (check == 1)
		{
			this->labelResult->Text = "0,";
			check = 0;
		}
		else
			this->labelResult->Text += ",";
	}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
	Double result  = secondNum;
	for (int i = 1; i < secondNum; i++)
		result *= i;
	this->labelResult->Text = System::Convert::ToString(result);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);

	this->labelResult->Text = System::Convert::ToString(int(secondNum));
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
	Double result;
	result = pow(2, secondNum);
	this->labelResult->Text = System::Convert::ToString(result);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	Double secondNum = System::Convert::ToDouble(this->labelResult->Text);
	Double result;
	result = pow(secondNum,3);
	this->labelResult->Text = System::Convert::ToString(result);
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	
}

};
}
