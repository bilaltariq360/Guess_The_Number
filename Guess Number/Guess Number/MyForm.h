#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>

int guess_number;
bool game_won = false;

namespace GuessNumber {

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

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
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
	private: System::Windows::Forms::Panel^ menu_panel;
	private: System::Windows::Forms::Label^ about_dev_menu_panel;
	protected:

	private: System::Windows::Forms::Label^ heighest_game_menu_panel;

	private: System::Windows::Forms::Label^ play_game_menu_panel;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label3;
































































private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Panel^ play_panel;




















private: System::Windows::Forms::PictureBox^ play_again_play_panel;
private: System::Windows::Forms::Label^ score_play_panel;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ high_low_play_panel;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ score_panel;












private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Panel^ about_dev_panel;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label15;






















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menu_panel = (gcnew System::Windows::Forms::Panel());
			this->play_panel = (gcnew System::Windows::Forms::Panel());
			this->play_again_play_panel = (gcnew System::Windows::Forms::PictureBox());
			this->score_play_panel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->high_low_play_panel = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->about_dev_menu_panel = (gcnew System::Windows::Forms::Label());
			this->heighest_game_menu_panel = (gcnew System::Windows::Forms::Label());
			this->play_game_menu_panel = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->score_panel = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->about_dev_panel = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->menu_panel->SuspendLayout();
			this->play_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_again_play_panel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->score_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->about_dev_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->SuspendLayout();
			// 
			// menu_panel
			// 
			this->menu_panel->BackColor = System::Drawing::Color::LightCyan;
			this->menu_panel->Controls->Add(this->play_panel);
			this->menu_panel->Controls->Add(this->label13);
			this->menu_panel->Controls->Add(this->pictureBox4);
			this->menu_panel->Controls->Add(this->label3);
			this->menu_panel->Controls->Add(this->pictureBox3);
			this->menu_panel->Controls->Add(this->pictureBox2);
			this->menu_panel->Controls->Add(this->pictureBox1);
			this->menu_panel->Controls->Add(this->about_dev_menu_panel);
			this->menu_panel->Controls->Add(this->heighest_game_menu_panel);
			this->menu_panel->Controls->Add(this->play_game_menu_panel);
			this->menu_panel->Location = System::Drawing::Point(0, 0);
			this->menu_panel->Name = L"menu_panel";
			this->menu_panel->Size = System::Drawing::Size(817, 408);
			this->menu_panel->TabIndex = 0;
			// 
			// play_panel
			// 
			this->play_panel->BackColor = System::Drawing::Color::LightCyan;
			this->play_panel->Controls->Add(this->score_panel);
			this->play_panel->Controls->Add(this->label14);
			this->play_panel->Controls->Add(this->play_again_play_panel);
			this->play_panel->Controls->Add(this->score_play_panel);
			this->play_panel->Controls->Add(this->label4);
			this->play_panel->Controls->Add(this->pictureBox6);
			this->play_panel->Controls->Add(this->high_low_play_panel);
			this->play_panel->Controls->Add(this->button11);
			this->play_panel->Controls->Add(this->button12);
			this->play_panel->Controls->Add(this->button13);
			this->play_panel->Controls->Add(this->button14);
			this->play_panel->Controls->Add(this->button15);
			this->play_panel->Controls->Add(this->button16);
			this->play_panel->Controls->Add(this->button17);
			this->play_panel->Controls->Add(this->button18);
			this->play_panel->Controls->Add(this->button19);
			this->play_panel->Controls->Add(this->button20);
			this->play_panel->Controls->Add(this->button10);
			this->play_panel->Controls->Add(this->button9);
			this->play_panel->Controls->Add(this->button8);
			this->play_panel->Controls->Add(this->button7);
			this->play_panel->Controls->Add(this->button6);
			this->play_panel->Controls->Add(this->button5);
			this->play_panel->Controls->Add(this->button4);
			this->play_panel->Controls->Add(this->button3);
			this->play_panel->Controls->Add(this->button2);
			this->play_panel->Controls->Add(this->button1);
			this->play_panel->Controls->Add(this->pictureBox5);
			this->play_panel->Controls->Add(this->label1);
			this->play_panel->Controls->Add(this->label2);
			this->play_panel->Location = System::Drawing::Point(0, 0);
			this->play_panel->Name = L"play_panel";
			this->play_panel->Size = System::Drawing::Size(817, 408);
			this->play_panel->TabIndex = 10;
			// 
			// play_again_play_panel
			// 
			this->play_again_play_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play_again_play_panel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play_again_play_panel.Image")));
			this->play_again_play_panel->Location = System::Drawing::Point(762, 3);
			this->play_again_play_panel->Name = L"play_again_play_panel";
			this->play_again_play_panel->Size = System::Drawing::Size(46, 44);
			this->play_again_play_panel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->play_again_play_panel->TabIndex = 32;
			this->play_again_play_panel->TabStop = false;
			this->play_again_play_panel->Click += gcnew System::EventHandler(this, &MyForm::play_again_play_panel_Click);
			// 
			// score_play_panel
			// 
			this->score_play_panel->AutoSize = true;
			this->score_play_panel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->score_play_panel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score_play_panel->ForeColor = System::Drawing::Color::Blue;
			this->score_play_panel->Location = System::Drawing::Point(106, 183);
			this->score_play_panel->Name = L"score_play_panel";
			this->score_play_panel->Size = System::Drawing::Size(42, 31);
			this->score_play_panel->TabIndex = 31;
			this->score_play_panel->Text = L"20";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(17, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 31);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Score:";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 35);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// high_low_play_panel
			// 
			this->high_low_play_panel->AutoSize = true;
			this->high_low_play_panel->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->high_low_play_panel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->high_low_play_panel->ForeColor = System::Drawing::Color::LightCyan;
			this->high_low_play_panel->Location = System::Drawing::Point(361, 183);
			this->high_low_play_panel->Name = L"high_low_play_panel";
			this->high_low_play_panel->Size = System::Drawing::Size(136, 31);
			this->high_low_play_panel->TabIndex = 28;
			this->high_low_play_panel->Text = L"To High ...";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::SeaGreen;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::SeaShell;
			this->button11->Location = System::Drawing::Point(716, 319);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(71, 71);
			this->button11->TabIndex = 27;
			this->button11->Text = L"20";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SeaGreen;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::SeaShell;
			this->button12->Location = System::Drawing::Point(639, 319);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(71, 71);
			this->button12->TabIndex = 26;
			this->button12->Text = L"19";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::SeaGreen;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::SeaShell;
			this->button13->Location = System::Drawing::Point(562, 319);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(71, 71);
			this->button13->TabIndex = 25;
			this->button13->Text = L"18";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::SeaGreen;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::SeaShell;
			this->button14->Location = System::Drawing::Point(485, 319);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(71, 71);
			this->button14->TabIndex = 24;
			this->button14->Text = L"17";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SeaGreen;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::SeaShell;
			this->button15->Location = System::Drawing::Point(408, 319);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(71, 71);
			this->button15->TabIndex = 23;
			this->button15->Text = L"16";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::SeaGreen;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::SeaShell;
			this->button16->Location = System::Drawing::Point(331, 319);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(71, 71);
			this->button16->TabIndex = 22;
			this->button16->Text = L"15";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::SeaGreen;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::SeaShell;
			this->button17->Location = System::Drawing::Point(254, 319);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(71, 71);
			this->button17->TabIndex = 21;
			this->button17->Text = L"14";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::SeaGreen;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::SeaShell;
			this->button18->Location = System::Drawing::Point(177, 319);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(71, 71);
			this->button18->TabIndex = 20;
			this->button18->Text = L"13";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::SeaGreen;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::SeaShell;
			this->button19->Location = System::Drawing::Point(100, 319);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(71, 71);
			this->button19->TabIndex = 19;
			this->button19->Text = L"12";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::SeaGreen;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::SeaShell;
			this->button20->Location = System::Drawing::Point(23, 319);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(71, 71);
			this->button20->TabIndex = 18;
			this->button20->Text = L"11";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::SeaGreen;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::SeaShell;
			this->button10->Location = System::Drawing::Point(716, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(71, 71);
			this->button10->TabIndex = 17;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SeaGreen;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::SeaShell;
			this->button9->Location = System::Drawing::Point(639, 244);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 71);
			this->button9->TabIndex = 16;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SeaGreen;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::SeaShell;
			this->button8->Location = System::Drawing::Point(562, 244);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 71);
			this->button8->TabIndex = 15;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SeaGreen;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::SeaShell;
			this->button7->Location = System::Drawing::Point(485, 244);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 71);
			this->button7->TabIndex = 14;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SeaGreen;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::SeaShell;
			this->button6->Location = System::Drawing::Point(408, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(71, 71);
			this->button6->TabIndex = 13;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SeaGreen;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SeaShell;
			this->button5->Location = System::Drawing::Point(331, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(71, 71);
			this->button5->TabIndex = 12;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SeaGreen;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::SeaShell;
			this->button4->Location = System::Drawing::Point(254, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(71, 71);
			this->button4->TabIndex = 11;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SeaGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::SeaShell;
			this->button3->Location = System::Drawing::Point(177, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(71, 71);
			this->button3->TabIndex = 10;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaGreen;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SeaShell;
			this->button2->Location = System::Drawing::Point(100, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 71);
			this->button2->TabIndex = 9;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SeaShell;
			this->button1->Location = System::Drawing::Point(23, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 71);
			this->button1->TabIndex = 8;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(129, 21);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(119, 114);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(268, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 55);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Guess The Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SeaGreen;
			this->label2->Location = System::Drawing::Point(272, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(336, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select The Number (1 -- 20)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(491, 91);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(192, 23);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Developed by Bilal Tariq";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(132, 21);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(119, 114);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(271, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(419, 55);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Guess The Number";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(64, 327);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(39, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(55, 244);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 46);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(55, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// about_dev_menu_panel
			// 
			this->about_dev_menu_panel->AutoSize = true;
			this->about_dev_menu_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->about_dev_menu_panel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->about_dev_menu_panel->Location = System::Drawing::Point(109, 327);
			this->about_dev_menu_panel->Name = L"about_dev_menu_panel";
			this->about_dev_menu_panel->Size = System::Drawing::Size(212, 31);
			this->about_dev_menu_panel->TabIndex = 2;
			this->about_dev_menu_panel->Text = L"About Developer";
			this->about_dev_menu_panel->Click += gcnew System::EventHandler(this, &MyForm::about_dev_menu_panel_Click);
			// 
			// heighest_game_menu_panel
			// 
			this->heighest_game_menu_panel->AutoSize = true;
			this->heighest_game_menu_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->heighest_game_menu_panel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->heighest_game_menu_panel->Location = System::Drawing::Point(109, 252);
			this->heighest_game_menu_panel->Name = L"heighest_game_menu_panel";
			this->heighest_game_menu_panel->Size = System::Drawing::Size(200, 31);
			this->heighest_game_menu_panel->TabIndex = 1;
			this->heighest_game_menu_panel->Text = L"Previous Scores";
			this->heighest_game_menu_panel->Click += gcnew System::EventHandler(this, &MyForm::heighest_game_menu_panel_Click);
			// 
			// play_game_menu_panel
			// 
			this->play_game_menu_panel->AutoSize = true;
			this->play_game_menu_panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->play_game_menu_panel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->play_game_menu_panel->Location = System::Drawing::Point(109, 177);
			this->play_game_menu_panel->Name = L"play_game_menu_panel";
			this->play_game_menu_panel->Size = System::Drawing::Size(142, 31);
			this->play_game_menu_panel->TabIndex = 0;
			this->play_game_menu_panel->Text = L"Play Game";
			this->play_game_menu_panel->Click += gcnew System::EventHandler(this, &MyForm::play_game_menu_panel_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(491, 91);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(192, 23);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Developed by Bilal Tariq";
			// 
			// score_panel
			// 
			this->score_panel->BackColor = System::Drawing::Color::LightCyan;
			this->score_panel->Controls->Add(this->about_dev_panel);
			this->score_panel->Controls->Add(this->label15);
			this->score_panel->Controls->Add(this->label12);
			this->score_panel->Controls->Add(this->label5);
			this->score_panel->Controls->Add(this->dataGridView1);
			this->score_panel->Controls->Add(this->pictureBox8);
			this->score_panel->Controls->Add(this->pictureBox9);
			this->score_panel->Controls->Add(this->label8);
			this->score_panel->Location = System::Drawing::Point(0, 0);
			this->score_panel->Name = L"score_panel";
			this->score_panel->Size = System::Drawing::Size(817, 408);
			this->score_panel->TabIndex = 35;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(233, 244);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(359, 55);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Play Game First";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(268, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(285, 55);
			this->label5->TabIndex = 35;
			this->label5->Text = L"No Score Yet";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Altone Trial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(287, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(244, 222);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Gainsboro;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Altone Trial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::ForestGreen;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::White;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->HeaderText = L"Score";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(3, 3);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 35);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 29;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(129, 21);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(119, 114);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 7;
			this->pictureBox9->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(268, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(419, 55);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Guess The Number";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(490, 91);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 23);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Developed by Bilal Tariq";
			// 
			// about_dev_panel
			// 
			this->about_dev_panel->BackColor = System::Drawing::Color::LightCyan;
			this->about_dev_panel->Controls->Add(this->label9);
			this->about_dev_panel->Controls->Add(this->pictureBox12);
			this->about_dev_panel->Controls->Add(this->pictureBox7);
			this->about_dev_panel->Controls->Add(this->label6);
			this->about_dev_panel->Controls->Add(this->pictureBox10);
			this->about_dev_panel->Controls->Add(this->pictureBox13);
			this->about_dev_panel->Controls->Add(this->label7);
			this->about_dev_panel->Controls->Add(this->pictureBox15);
			this->about_dev_panel->Controls->Add(this->pictureBox14);
			this->about_dev_panel->Controls->Add(this->label11);
			this->about_dev_panel->Controls->Add(this->label10);
			this->about_dev_panel->Location = System::Drawing::Point(0, 0);
			this->about_dev_panel->Name = L"about_dev_panel";
			this->about_dev_panel->Size = System::Drawing::Size(817, 408);
			this->about_dev_panel->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(617, 358);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(161, 29);
			this->label9->TabIndex = 20;
			this->label9->Text = L"bilaltariq360";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(563, 349);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(44, 45);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 17;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 3);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 35);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 29;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(350, 358);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 29);
			this->label6->TabIndex = 19;
			this->label6->Text = L"@ibilaltariq";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(611, 70);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(146, 144);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 7;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(297, 348);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(44, 45);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 16;
			this->pictureBox13->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(83, 358);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(142, 29);
			this->label7->TabIndex = 18;
			this->label7->Text = L"@ibilaltariq";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(66, 67);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(102, 141);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 12;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(33, 348);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(44, 45);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 15;
			this->pictureBox14->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(61, 214);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(125, 29);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Bilal Tariq";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Altone Trial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(60, 243);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(243, 29);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Software Developer";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 405);
			this->Controls->Add(this->menu_panel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(827, 444);
			this->MinimumSize = System::Drawing::Size(827, 444);
			this->Name = L"MyForm";
			this->Text = L"Guess Number";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menu_panel->ResumeLayout(false);
			this->menu_panel->PerformLayout();
			this->play_panel->ResumeLayout(false);
			this->play_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->play_again_play_panel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->score_panel->ResumeLayout(false);
			this->score_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->about_dev_panel->ResumeLayout(false);
			this->about_dev_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void play_game_menu_panel_Click(System::Object^ sender, System::EventArgs^ e) {
		SetGame();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->menu_panel->Visible = true;
		this->play_panel->Visible = false;
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->menu_panel->Visible = true;
		this->play_panel->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!game_won)
			CheckInput(1);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(3);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(4);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(5);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(6);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(7);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(8);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(9);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(10);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(11);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(12);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(13);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(14);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(15);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(16);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(17);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(18);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(19);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!game_won)
		CheckInput(20);
}

	   private: void CheckInput(int opt) {
		   if (guess_number != opt) {
			   if (guess_number > opt) {
				   this->high_low_play_panel->Text = "Too Low ...";
				   this->high_low_play_panel->ForeColor = Color::Crimson;
				   int score = std::stoi(toStandardString(this->score_play_panel->Text));
				   score--;
				   this->score_play_panel->Text = "" + score;
				   if (score == 0)
					   LoseGame();
			   }
			   else if (opt != 1 && guess_number < opt) {
				   this->high_low_play_panel->Text = "Too High ...";
				   this->high_low_play_panel->ForeColor = Color::Crimson;
				   int score = std::stoi(toStandardString(this->score_play_panel->Text));
				   score--;
				   this->score_play_panel->Text = "" + score;
				   if (score == 0)
					   LoseGame();
			   }
		   }
		   else {
			   this->high_low_play_panel->Text = "Correct Guess!";
			   this->high_low_play_panel->ForeColor = Color::Crimson;
			   this->high_low_play_panel->Location = Point(347, 183);
			   this->play_panel->BackColor = Color::FromArgb(212, 253, 210);
			   game_won = true;
			   this->play_again_play_panel->Visible = true;

			   std::ofstream write;
			   write.open("Score.txt", std::ios::app);

			   write << toStandardString(this->score_play_panel->Text) << std::endl;

			   write.close();
		   }
	   }

private: System::Void play_again_play_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	SetGame();
}

	private: void SetGame() {
		this->play_panel->Visible = true;
		this->play_again_play_panel->Visible = false;
		this->score_panel->Visible = false;
		this->about_dev_panel->Visible = false;
		game_won = false;
		this->play_panel->BackColor = Color::LightCyan;
		this->high_low_play_panel->ForeColor = Color::LightCyan;
		this->score_play_panel->Text = "20";
		srand(time(NULL));
		guess_number = (rand() % (20 - 1)) + 1;
	}

private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->menu_panel->Visible = true;
	this->play_panel->Visible = false;
	this->score_panel->Visible = false;
	this->about_dev_panel->Visible = false;
}
private: System::Void heighest_game_menu_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->menu_panel->Visible = true;
	this->play_panel->Visible = true;
	this->score_panel->Visible = true;
	this->about_dev_panel->Visible = false;

	this->label12->Visible = false;
	this->label5->Visible = false;

	this->dataGridView1->Visible = true;

	std::ifstream read;
	read.open("Score.txt");

	if (!read.is_open()) {
		std::ofstream create_file;
		create_file.open("Score.txt");
		create_file.close();
		read.open("Score.txt");
	}
	std::string st;

	this->dataGridView1->Rows->Clear();
	int i = 0;
	while (!read.eof()) {
		getline(read, st);
		String^ score = gcnew String(st.c_str());

		if (score != "") {
			this->dataGridView1->Rows->Add(score);
			i++;
		}

		if (score == "" && i == 0) {
			this->label12->Visible = true;
			this->label5->Visible = true;
			this->dataGridView1->Visible = false;
		}
	}

	read.close();
}

	   private: void LoseGame() {
		   this->high_low_play_panel->Text = "Game Over!";
		   this->high_low_play_panel->ForeColor = Color::Crimson;
		   this->high_low_play_panel->Location = Point(347, 183);
		   this->play_panel->BackColor = Color::FromArgb(255, 192, 192);
		   game_won = true;
		   this->play_again_play_panel->Visible = true;
	   }

private: System::Void about_dev_menu_panel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->menu_panel->Visible = true;
	this->play_panel->Visible = true;
	this->score_panel->Visible = true;
	this->about_dev_panel->Visible = true;
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	SetGame();
	this->play_panel->Visible = false;
}
};
}
