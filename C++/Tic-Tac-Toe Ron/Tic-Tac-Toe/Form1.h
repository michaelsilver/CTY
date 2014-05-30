#pragma once


namespace TicTacToe
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		/// <param name="disposing">"description of the parameter"</param>
		
	private: System::Windows::Forms::Panel^  pnlTop;
	private: System::Windows::Forms::Panel^  pnlBottom;
	protected: 

	protected: 

	private: System::Windows::Forms::Panel^  pnlLeft;
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::PictureBox^  pbxA1;
	private: System::Windows::Forms::PictureBox^  pbxA2;
	private: System::Windows::Forms::PictureBox^  pbxA3;
	private: System::Windows::Forms::PictureBox^  pbxB1;
	private: System::Windows::Forms::PictureBox^  pbxB2;
	private: System::Windows::Forms::PictureBox^  pbxB3;
	private: System::Windows::Forms::PictureBox^  pbxC1;
	private: System::Windows::Forms::PictureBox^  pbxC2;
	private: System::Windows::Forms::PictureBox^  pbxC3;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::TextBox^  txtOutput;














	private: System::Windows::Forms::Label^  lblOutput;
	private: System::Windows::Forms::ImageList^  imlSquares;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		//Values for possible square states
		enum class SquareStates : Int16 {
		  SQUAREOPEN, SQUAREX, SQUAREO
		};
		//Values to help keep track of which
		//  turn it is
		enum class Player : Int16 {
		  PLAYERX, PLAYERO, PLAYERNONE, 
		};
		//Game board
		array <SquareStates>^ sqsGameBoardArray;
		Player plyActivePlayer;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->pnlBottom = (gcnew System::Windows::Forms::Panel());
			this->pnlLeft = (gcnew System::Windows::Forms::Panel());
			this->pnlRight = (gcnew System::Windows::Forms::Panel());
			this->pbxA1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxA2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxA3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxB1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxB2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxB3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxC1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxC2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxC3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->imlSquares = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC3))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::Black;
			this->pnlTop->Location = System::Drawing::Point(48, 128);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(500, 10);
			this->pnlTop->TabIndex = 0;
			// 
			// pnlBottom
			// 
			this->pnlBottom->BackColor = System::Drawing::Color::Black;
			this->pnlBottom->Location = System::Drawing::Point(48, 254);
			this->pnlBottom->Name = L"pnlBottom";
			this->pnlBottom->Size = System::Drawing::Size(500, 10);
			this->pnlBottom->TabIndex = 1;
			// 
			// pnlLeft
			// 
			this->pnlLeft->BackColor = System::Drawing::Color::Black;
			this->pnlLeft->Location = System::Drawing::Point(206, 12);
			this->pnlLeft->Name = L"pnlLeft";
			this->pnlLeft->Size = System::Drawing::Size(10, 360);
			this->pnlLeft->TabIndex = 2;
			// 
			// pnlRight
			// 
			this->pnlRight->BackColor = System::Drawing::Color::Black;
			this->pnlRight->Location = System::Drawing::Point(377, 12);
			this->pnlRight->Name = L"pnlRight";
			this->pnlRight->Size = System::Drawing::Size(10, 360);
			this->pnlRight->TabIndex = 3;
			// 
			// pbxA1
			// 
			this->pbxA1->BackColor = System::Drawing::Color::Black;
			this->pbxA1->Location = System::Drawing::Point(77, 22);
			this->pbxA1->Name = L"pbxA1";
			this->pbxA1->Size = System::Drawing::Size(100, 100);
			this->pbxA1->TabIndex = 4;
			this->pbxA1->TabStop = false;
			this->pbxA1->Click += gcnew System::EventHandler(this, &Form1::pbxA1_Click);
			// 
			// pbxA2
			// 
			this->pbxA2->BackColor = System::Drawing::Color::Black;
			this->pbxA2->Location = System::Drawing::Point(244, 22);
			this->pbxA2->Name = L"pbxA2";
			this->pbxA2->Size = System::Drawing::Size(100, 100);
			this->pbxA2->TabIndex = 5;
			this->pbxA2->TabStop = false;
			this->pbxA2->Click += gcnew System::EventHandler(this, &Form1::pbxA2_Click);
			// 
			// pbxA3
			// 
			this->pbxA3->BackColor = System::Drawing::Color::Black;
			this->pbxA3->Location = System::Drawing::Point(411, 22);
			this->pbxA3->Name = L"pbxA3";
			this->pbxA3->Size = System::Drawing::Size(100, 100);
			this->pbxA3->TabIndex = 6;
			this->pbxA3->TabStop = false;
			this->pbxA3->Click += gcnew System::EventHandler(this, &Form1::pbxA3_Click);
			// 
			// pbxB1
			// 
			this->pbxB1->BackColor = System::Drawing::Color::Black;
			this->pbxB1->Location = System::Drawing::Point(77, 146);
			this->pbxB1->Name = L"pbxB1";
			this->pbxB1->Size = System::Drawing::Size(100, 100);
			this->pbxB1->TabIndex = 7;
			this->pbxB1->TabStop = false;
			this->pbxB1->Click += gcnew System::EventHandler(this, &Form1::pbxB1_Click);
			// 
			// pbxB2
			// 
			this->pbxB2->BackColor = System::Drawing::Color::Black;
			this->pbxB2->Location = System::Drawing::Point(244, 147);
			this->pbxB2->Name = L"pbxB2";
			this->pbxB2->Size = System::Drawing::Size(100, 100);
			this->pbxB2->TabIndex = 8;
			this->pbxB2->TabStop = false;
			this->pbxB2->Click += gcnew System::EventHandler(this, &Form1::pbxB2_Click);
			// 
			// pbxB3
			// 
			this->pbxB3->BackColor = System::Drawing::Color::Black;
			this->pbxB3->Location = System::Drawing::Point(411, 147);
			this->pbxB3->Name = L"pbxB3";
			this->pbxB3->Size = System::Drawing::Size(100, 100);
			this->pbxB3->TabIndex = 9;
			this->pbxB3->TabStop = false;
			this->pbxB3->Click += gcnew System::EventHandler(this, &Form1::pbxB3_Click);
			// 
			// pbxC1
			// 
			this->pbxC1->BackColor = System::Drawing::Color::Black;
			this->pbxC1->Location = System::Drawing::Point(77, 270);
			this->pbxC1->Name = L"pbxC1";
			this->pbxC1->Size = System::Drawing::Size(100, 100);
			this->pbxC1->TabIndex = 10;
			this->pbxC1->TabStop = false;
			this->pbxC1->Click += gcnew System::EventHandler(this, &Form1::pbxC1_Click);
			// 
			// pbxC2
			// 
			this->pbxC2->BackColor = System::Drawing::Color::Black;
			this->pbxC2->Location = System::Drawing::Point(244, 272);
			this->pbxC2->Name = L"pbxC2";
			this->pbxC2->Size = System::Drawing::Size(100, 100);
			this->pbxC2->TabIndex = 11;
			this->pbxC2->TabStop = false;
			this->pbxC2->Click += gcnew System::EventHandler(this, &Form1::pbxC2_Click);
			// 
			// pbxC3
			// 
			this->pbxC3->BackColor = System::Drawing::Color::Black;
			this->pbxC3->Location = System::Drawing::Point(411, 272);
			this->pbxC3->Name = L"pbxC3";
			this->pbxC3->Size = System::Drawing::Size(100, 100);
			this->pbxC3->TabIndex = 12;
			this->pbxC3->TabStop = false;
			this->pbxC3->Click += gcnew System::EventHandler(this, &Form1::pbxC3_Click);
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(27, 438);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(75, 23);
			this->btnPlay->TabIndex = 13;
			this->btnPlay->Text = L"Play";
			this->btnPlay->Click += gcnew System::EventHandler(this, &Form1::btnPlay_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(27, 491);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 14;
			this->btnExit->Text = L"Exit";
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// txtOutput
			// 
			this->txtOutput->Location = System::Drawing::Point(129, 438);
			this->txtOutput->Multiline = true;
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->Size = System::Drawing::Size(427, 76);
			this->txtOutput->TabIndex = 15;
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Location = System::Drawing::Point(134, 422);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(37, 13);
			this->lblOutput->TabIndex = 16;
			this->lblOutput->Text = L"Status";
			// 
			// imlSquares
			// 
			this->imlSquares->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imlSquares.ImageStream")));
			this->imlSquares->TransparentColor = System::Drawing::Color::Transparent;
			this->imlSquares->Images->SetKeyName(0, L"BlankSquare.bmp");
			this->imlSquares->Images->SetKeyName(1, L"XSquare.bmp");
			this->imlSquares->Images->SetKeyName(2, L"OSquare.bmp");
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 557);
			this->ControlBox = false;
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->pbxC3);
			this->Controls->Add(this->pbxC2);
			this->Controls->Add(this->pbxC1);
			this->Controls->Add(this->pbxB3);
			this->Controls->Add(this->pbxB2);
			this->Controls->Add(this->pbxB1);
			this->Controls->Add(this->pbxA3);
			this->Controls->Add(this->pbxA2);
			this->Controls->Add(this->pbxA1);
			this->Controls->Add(this->pnlRight);
			this->Controls->Add(this->pnlLeft);
			this->Controls->Add(this->pnlBottom);
			this->Controls->Add(this->pnlTop);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxA3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pbxC3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
         //Get memory for the game board
         sqsGameBoardArray = gcnew array<SquareStates>(9);
		 //Set no player on startup
		 plyActivePlayer = Player::PLAYERNONE;
		 //Establish the game board
         SetGameDefaults();
         ClearGameBoard();
		 EnableGameBoard( false );
    }
private: System::Void SetGameDefaults(System::Void) {
         //Set the game's starting message and player
         txtOutput->Text = "Click Play to begin.";
		 SwapPlayerTurn();
	}
private: System::Void ClearGameBoard(System::Void) {
         //Set all squares in game board to open
         for( Int32 intCounter = 0; intCounter < \
			 sqsGameBoardArray->Length; intCounter++ )
         sqsGameBoardArray[intCounter] = SquareStates::SQUAREOPEN;
         //Blank all images on the gameboard
         pbxA1->Image = imlSquares->Images[0];
         pbxA2->Image = imlSquares->Images[0];
         pbxA3->Image = imlSquares->Images[0];
         pbxB1->Image = imlSquares->Images[0];
         pbxB2->Image = imlSquares->Images[0];
         pbxB3->Image = imlSquares->Images[0];
         pbxC1->Image = imlSquares->Images[0];
         pbxC2->Image = imlSquares->Images[0];
         pbxC3->Image = imlSquares->Images[0];
	}
private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Start with a fresh board
         ClearGameBoard();
		 //Set squares as clickable
		 EnableGameBoard( true );
		 //Disable play button until done
		 btnPlay->Enabled = false;
	}
private: System::Void EnableGameBoard(System::Boolean blnEnableBoard ) {
		 //Enable or disable all picture
		 //  squares based on blnEnableBoard
		 if( blnEnableBoard )
		 {
			pbxA1->Enabled = true;
			pbxA2->Enabled = true;
			pbxA3->Enabled = true;
			pbxB1->Enabled = true;
			pbxB2->Enabled = true;
			pbxB3->Enabled = true;
			pbxC1->Enabled = true;
			pbxC2->Enabled = true;
			pbxC3->Enabled = true;
		 }
		 else
		 {
			pbxA1->Enabled = false;
			pbxA2->Enabled = false;
			pbxA3->Enabled = false;
			pbxB1->Enabled = false;
			pbxB2->Enabled = false;
			pbxB3->Enabled = false;
			pbxC1->Enabled = false;
			pbxC2->Enabled = false;
			pbxC3->Enabled = false;
		 }
	}

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		 //End the application
		 this->Close();
	}
private: System::Void pbxA1_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square A1 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxA1->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square A1!";
			 sqsGameBoardArray[0] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxA1->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square A1!";
			 sqsGameBoardArray[0] = SquareStates::SQUAREO;
		 }
		 pbxA1->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxA2_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square A2 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxA2->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square A2!";
			 sqsGameBoardArray[1] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxA2->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square A2!";
			 sqsGameBoardArray[1] = SquareStates::SQUAREO;
		 }
		 pbxA2->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxA3_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square A3 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxA3->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square A3!";
			 sqsGameBoardArray[2] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxA3->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square A3!";
			 sqsGameBoardArray[2] = SquareStates::SQUAREO;
		 }
		 pbxA3->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxB1_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square B1 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxB1->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square B1!";
			 sqsGameBoardArray[3] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxB1->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square B1!";
			 sqsGameBoardArray[3] = SquareStates::SQUAREO;
		 }
		 pbxB1->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxB2_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square B2 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxB2->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square B2!";
			 sqsGameBoardArray[4] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxB2->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square B2!";
			 sqsGameBoardArray[4] = SquareStates::SQUAREO;
		 }
		 pbxB2->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxB3_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square B3 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxB3->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square B3!";
			 sqsGameBoardArray[5] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxB3->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square B3!";
			 sqsGameBoardArray[5] = SquareStates::SQUAREO;
		 }
		 pbxB3->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxC1_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square C1 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxC1->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square C1!";
			 sqsGameBoardArray[6] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxC1->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square C1!";
			 sqsGameBoardArray[6] = SquareStates::SQUAREO;
		 }
		 pbxC1->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxC2_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square C2 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxC2->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square C2!";
			 sqsGameBoardArray[7] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxC2->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square C2!";
			 sqsGameBoardArray[7] = SquareStates::SQUAREO;
		 }
		 pbxC2->Enabled = false;
		 CheckForWinner();
	}
private: System::Void pbxC3_Click(System::Object^  sender, System::EventArgs^  e) {
		 //Claim square C3 according to which 
		 //  player is active
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			 pbxC3->Image = imlSquares->Images[1];
			 txtOutput->Text = "X claims square C3!";
			 sqsGameBoardArray[8] = SquareStates::SQUAREX;
		 }
		 if( plyActivePlayer == Player::PLAYERO )
		 {
			 pbxC3->Image = imlSquares->Images[2];
			 txtOutput->Text = "O claims square C3!";
			 sqsGameBoardArray[8] = SquareStates::SQUAREO;
		 }
		 pbxC3->Enabled = false;
		 CheckForWinner();
	}
private: System::Void CheckForWinner(System::Void) {
		 //Set a variable to track the winning player
		 Player plyWinningPlayer = Player::PLAYERNONE;
		 //Establish a generic counter for looping
		 //  through game board
		 Int32 intCounter = 0;
		 //Check rows for X or O win
		 for( intCounter = 0; intCounter < 
			  sqsGameBoardArray->Length; intCounter += 3 )
		 {
			 //Check if X's win
			 if( sqsGameBoardArray[intCounter] == 
				 SquareStates::SQUAREX )
				if( sqsGameBoardArray[intCounter + 1] == 
					SquareStates::SQUAREX ) 
					if( sqsGameBoardArray[intCounter + 2] == 
						SquareStates::SQUAREX )
						plyWinningPlayer = Player::PLAYERX;
			 //Check if O's win
			 if( sqsGameBoardArray[intCounter] == 
				 SquareStates::SQUAREO )
				if( sqsGameBoardArray[intCounter + 1] == 
					SquareStates::SQUAREO ) 
					if( sqsGameBoardArray[intCounter + 2] == 
						SquareStates::SQUAREO )
						plyWinningPlayer = Player::PLAYERO;
		 }
		 //Check columns for X or O win
		 for( intCounter = 0; intCounter < 
			  sqsGameBoardArray->Length / 3; intCounter += 1 )
		 {
			 //Check if X's win
			 if( sqsGameBoardArray[intCounter] == 
				 SquareStates::SQUAREX )
				if( sqsGameBoardArray[intCounter + 3] == 
					SquareStates::SQUAREX ) 
					if( sqsGameBoardArray[intCounter + 6] == 
						SquareStates::SQUAREX )
						plyWinningPlayer = Player::PLAYERX;
			 //Check if O's win
			 if( sqsGameBoardArray[intCounter] == 
				 SquareStates::SQUAREO )
				if( sqsGameBoardArray[intCounter + 3] == 
					SquareStates::SQUAREO ) 
					if( sqsGameBoardArray[intCounter + 6] == 
						SquareStates::SQUAREO )
						plyWinningPlayer = Player::PLAYERO;
		 }
		 //Check diagonals if X or O has claimed the center
		 if( sqsGameBoardArray[4] != SquareStates::SQUAREOPEN )
		 {
			 //Check if X or O wins upper left to
			 //  lower right
			 if( sqsGameBoardArray[0] == SquareStates::SQUAREX &&
				 sqsGameBoardArray[4] == SquareStates::SQUAREX &&
				 sqsGameBoardArray[8] == SquareStates::SQUAREX )
				 plyWinningPlayer = Player::PLAYERX;
			 if( sqsGameBoardArray[0] == SquareStates::SQUAREO &&
				 sqsGameBoardArray[4] == SquareStates::SQUAREO &&
				 sqsGameBoardArray[8] == SquareStates::SQUAREO )
				 plyWinningPlayer = Player::PLAYERO;
			 //Check if X or O wins lower left to
			 //  upper right
			 if( sqsGameBoardArray[6] == SquareStates::SQUAREX &&
				 sqsGameBoardArray[4] == SquareStates::SQUAREX &&
				 sqsGameBoardArray[2] == SquareStates::SQUAREX )
				 plyWinningPlayer = Player::PLAYERX;
			 if( sqsGameBoardArray[6] == SquareStates::SQUAREO &&
				 sqsGameBoardArray[4] == SquareStates::SQUAREO &&
				 sqsGameBoardArray[2] == SquareStates::SQUAREO )
				 plyWinningPlayer = Player::PLAYERO;
		 }
		 //If neither player has won, check to see if board is 
		 //  filled
		 if( plyWinningPlayer == Player::PLAYERNONE )
		 {
			for( intCounter = 0; intCounter < 
				 sqsGameBoardArray->Length; intCounter += 1 )
				if( sqsGameBoardArray[intCounter] == 
					SquareStates::SQUAREOPEN )
				{
					//Found at least one open square, so
					//  the game continues
					SwapPlayerTurn();
					return;  
				}
		 }
		 //No open squares, either someone won or its a tie
		 EndGame( plyWinningPlayer );
	}

private: System::Void EndGame(Player plyWinner) {
		 //Declare winner
		 if( plyWinner == Player::PLAYERX )
			 MessageBox::Show( "Player X wins!" );
		 if( plyWinner == Player::PLAYERO )
			 MessageBox::Show( "Player O wins!" );
		 if( plyWinner == Player::PLAYERNONE )
			 MessageBox::Show( "Game is a Tie!" );
		 //Reset game and allow replay
         SetGameDefaults();
		 EnableGameBoard( false );
		 ClearGameBoard();
		 btnPlay->Enabled = true;
		 txtOutput->Text = "Click Play to start again.";
	}
private: System::Void SwapPlayerTurn(System::Void) {
		 //Switch current player
		 if( plyActivePlayer == Player::PLAYERX )
		 {
			plyActivePlayer = Player::PLAYERO;
			txtOutput->Text = String::Concat( txtOutput->Text,
			"  It is Player O's turn." );
		 }
		 else
		 {
			plyActivePlayer = Player::PLAYERX;
			txtOutput->Text = String::Concat( txtOutput->Text,
			"  It is Player X's turn." );
		 }
	}

};
}


