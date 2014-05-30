#pragma once
#include <string>
#include <cstddef>

void ai();
void win(std::string player);
void block(std::string player);
void bestAlternate();
void compare(std::string buttonFirst, std::string buttonSecond, std::string player);
void computerMove();

namespace TicTacToe2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	int start = 0;
	int a = start;
	int b = start + 1;

	std::string buttonFirst;
	std::string buttonSecond;
	std::string player;
	std::string match = "0";
	int moveCount = 1;
	int i;

	std::string button [9] = {"a3z", "b3", "c3y", "a2", "b2yz", "c2", "a1y", "b1", "c1z"};

void ai()
{
	while (moveCount == 0)
	{
		win("o");
		if (moveCount == 1)
			break;
		block("x");
		if (moveCount == 1)
			break;
		bestAlternate();
	}
}

void win(std::string player)
{
	while ((match.compare("0") == 0) && (a<10  || b<10))
	{
		for (a=start; a<10; a++)
		{
			std::size_t found = button[a].find(player); 
			if (found!=std::string::npos)
				break;
		}

		for (b=start+1; b<10; b++)
		{
			std::size_t found = button[b].find(player); 
			if (found!=std::string::npos)
				break;
		}
		
		compare (button [a], button [b], player);
		start++;
	}

	if (match.compare("0") != 0)
	{
		for (i=0; i<10; i++)
		{
			std::size_t found = button[i].find(match);
			std::size_t foundPlayer = button[i].find(player); //HERE deal with player
			if ((found!=std::string::npos) && (i != a) && (i != b) && (foundPlayer!=std::string::npos))
				break;
		}
		computerMove();
	}


}

void block(std::string player)
{
	win(player);
}

void bestAlternate()
{
	for (i=0; i<10; i++)
	{
		std::size_t found = button[i].find("o");
		if (found!=std::string::npos)
		{
			for (b=i+1; b<10; b++)
			{
				compare (button [i], button [b], player); // Don't forget to get rid of possibility when b has an "x"
				std::size_t found = button[b].find("x");
				if ((match.compare("0") != 0) && (found=std::string::npos))
					break;
				//else if (found!=std::string::npos)
				//find third with match with match qualities
			}
		}
	}
}

void compare(std::string buttonFirst, std::string buttonSecond, std::string player)
{
	std::string buttonFirst0 (1,buttonFirst[0]);
	std::string buttonFirst1 (1,buttonFirst[1]);
	std::string buttonFirst2 (1,buttonFirst[2]);
	std::string buttonFirst3 (1,buttonFirst[3]);
	std::string buttonSecond0 (1,buttonSecond[0]);
	std::string buttonSecond1 (1,buttonSecond[1]);
	std::string buttonSecond2 (1,buttonSecond[2]);
	std::string buttonSecond3 (1,buttonSecond[3]);

	if (buttonFirst0.compare(buttonSecond0) == 0)
		match = buttonFirst0;
	if (buttonFirst1.compare(buttonSecond1) == 0)
		match = buttonFirst1;
	if ((buttonFirst2.compare(buttonSecond2) == 0) && (buttonFirst2.compare(player) != 0))
		match = buttonFirst2;
	if ((buttonFirst2.compare(buttonSecond3) == 0) && (buttonFirst2.compare(player) != 0))
		match = buttonFirst2;
	if ((buttonFirst3.compare(buttonSecond2) == 0) && (buttonFirst3.compare(player) != 0))
		match = buttonFirst3;
}

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
	private: System::Windows::Forms::Button^  btn9;
	protected: 

	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;

	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn7;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Int16 intclickCount;
		System::ComponentModel::Container ^components;

void computerMove()
{
	if (i == 0)
		btn1->Text = "O";
	if (i == 1)
		btn2->Text = "O";
	if (i == 2)
		btn3->Text = "O";
	if (i == 3)
		btn4->Text = "O";
	if (i == 4)
		btn5->Text = "O";
	if (i == 5)
		btn6->Text = "O";
	if (i == 6)
		btn7->Text = "O";
	if (i == 7)
		btn8->Text = "O";
	if (i == 8)
		btn9->Text = "O";
	button[i] += std::string(1, 'o');
	moveCount = 1;
}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(190, 190);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 72);
			this->btn9->TabIndex = 10;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(114, 115);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 72);
			this->btn5->TabIndex = 11;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(190, 115);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 72);
			this->btn6->TabIndex = 12;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(190, 40);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 72);
			this->btn3->TabIndex = 13;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(114, 40);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 72);
			this->btn2->TabIndex = 14;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(37, 115);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 72);
			this->btn4->TabIndex = 15;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(37, 40);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 73);
			this->btn1->TabIndex = 16;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(114, 190);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 72);
			this->btn8->TabIndex = 17;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(37, 190);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 72);
			this->btn7->TabIndex = 18;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(308, 298);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn9);
			this->Name = L"MyForm";
			this->Text = L"Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				if (moveCount == 1)
				{
					btn2->Text = "X";
					button[1] += std::string(1, 'o');
					moveCount = 0;
				}
				if (moveCount == 0)
				{
					ai();
				}
			 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn3->Text = "X";
				button[2] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn8->Text = "X";
				button[7] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn1->Text = "X";
				button[0] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn6->Text = "X";
				button[5] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn5->Text = "X";
				button[4] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn4->Text = "X";
				button[3] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if (moveCount == 1)
			{
				btn7->Text = "X";
				button[6] += std::string(1, 'o');
				moveCount = 0;
			}
			if (moveCount == 0)
			{
				ai();
			}
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (moveCount == 1)
			 {
				btn9->Text = "X";
				button[8] += std::string(1, 'o');
				moveCount = 0;
			 }
			 if (moveCount == 0)
			 {
				ai();
			 }
		 }
};
}



