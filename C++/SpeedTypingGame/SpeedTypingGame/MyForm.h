#pragma once

namespace SpeedTypingGame {

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
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::TextBox^  txtEntry;
	private: System::Windows::Forms::Button^  btnGo;
	private: System::Windows::Forms::Button^  btnDone;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Label^  lblInstructions;
	private: System::Windows::Forms::Label^  lblSouceText;
	private: System::Windows::Forms::Label^  lblEntryText;
	private: System::Windows::Forms::StatusStrip^  stsControl;
	private: System::Windows::Forms::Timer^  tmrControl;
	private: System::Windows::Forms::ToolTip^  tipControl;
	protected: 

	protected: 











	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
Int16 intWrong;
Int16 intCount;
Int16 intTimer;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->txtEntry = (gcnew System::Windows::Forms::TextBox());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblInstructions = (gcnew System::Windows::Forms::Label());
			this->lblSouceText = (gcnew System::Windows::Forms::Label());
			this->lblEntryText = (gcnew System::Windows::Forms::Label());
			this->stsControl = (gcnew System::Windows::Forms::StatusStrip());
			this->tmrControl = (gcnew System::Windows::Forms::Timer(this->components));
			this->tipControl = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Location = System::Drawing::Point(12, 101);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->Size = System::Drawing::Size(588, 20);
			this->txtDisplay->TabIndex = 0;
			this->tipControl->SetToolTip(this->txtDisplay, L"Displays souce text string");
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtEntry
			// 
			this->txtEntry->Location = System::Drawing::Point(15, 159);
			this->txtEntry->Name = L"txtEntry";
			this->txtEntry->ReadOnly = true;
			this->txtEntry->Size = System::Drawing::Size(588, 20);
			this->txtEntry->TabIndex = 1;
			this->tipControl->SetToolTip(this->txtEntry, L"Type your text here");
			this->txtEntry->TextChanged += gcnew System::EventHandler(this, &MyForm::txtEntry_TextChanged);
			// 
			// btnGo
			// 
			this->btnGo->Location = System::Drawing::Point(12, 228);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(75, 23);
			this->btnGo->TabIndex = 2;
			this->btnGo->Text = L"Go";
			this->tipControl->SetToolTip(this->btnGo, L"Display new text string");
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &MyForm::btnGo_Click);
			// 
			// btnDone
			// 
			this->btnDone->Location = System::Drawing::Point(525, 228);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(75, 23);
			this->btnDone->TabIndex = 3;
			this->btnDone->Text = L"Done";
			this->tipControl->SetToolTip(this->btnDone, L"Done");
			this->btnDone->UseVisualStyleBackColor = true;
			this->btnDone->Click += gcnew System::EventHandler(this, &MyForm::btnDone_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(525, 5);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->tipControl->SetToolTip(this->btnExit, L"Exit game");
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// lblInstructions
			// 
			this->lblInstructions->AutoSize = true;
			this->lblInstructions->Location = System::Drawing::Point(12, 40);
			this->lblInstructions->Name = L"lblInstructions";
			this->lblInstructions->Size = System::Drawing::Size(514, 13);
			this->lblInstructions->TabIndex = 5;
			this->lblInstructions->Text = L"Click Go to begin. You have 15 seconds to type the text displayed in the Souce Te" 
				L"xt field exactly as shown.";
			this->lblInstructions->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lblSouceText
			// 
			this->lblSouceText->AutoSize = true;
			this->lblSouceText->Location = System::Drawing::Point(12, 83);
			this->lblSouceText->Name = L"lblSouceText";
			this->lblSouceText->Size = System::Drawing::Size(68, 13);
			this->lblSouceText->TabIndex = 6;
			this->lblSouceText->Text = L"Source Text:";
			this->lblSouceText->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// lblEntryText
			// 
			this->lblEntryText->AutoSize = true;
			this->lblEntryText->Location = System::Drawing::Point(12, 136);
			this->lblEntryText->Name = L"lblEntryText";
			this->lblEntryText->Size = System::Drawing::Size(85, 13);
			this->lblEntryText->TabIndex = 7;
			this->lblEntryText->Text = L"Enter Text Here:";
			this->lblEntryText->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// stsControl
			// 
			this->stsControl->Location = System::Drawing::Point(0, 254);
			this->stsControl->Name = L"stsControl";
			this->stsControl->Size = System::Drawing::Size(612, 22);
			this->stsControl->TabIndex = 8;
			this->stsControl->Text = L"statusStrip1";
			this->stsControl->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::statusStrip1_ItemClicked);
			// 
			// tmrControl
			// 
			this->tmrControl->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 276);
			this->Controls->Add(this->stsControl);
			this->Controls->Add(this->lblEntryText);
			this->Controls->Add(this->lblSouceText);
			this->Controls->Add(this->lblInstructions);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->btnGo);
			this->Controls->Add(this->txtEntry);
			this->Controls->Add(this->txtDisplay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Speed Typing";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				intWrong = 0;
				intCount = 0;
				intTimer = 0;
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btnGo_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			if( intCount == 0 )
				txtDisplay->Text = "Once upon a time there were tree little pigs.";
			if( intCount == 1 )
				txtDisplay->Text = "In day gone by times were hard but the people were strong.";
			if( intCount == 2 )
				txtDisplay->Text = "Once in awhile something special happens even to the worst of people.";
			if( intCount == 3 )
				txtDisplay->Text = "When injustice rears its ugly head, it is the duty of all good citizens to object.";
			if( intCount == 4 )
				txtDisplay->Text = "In day gone by times were hard but the people were strong.";
			btnDone->Enabled = true;
			btnGo->Enabled = false;
			txtEntry->ReadOnly = false;
			tmrControl->Enabled = true;
			intTimer = 0;
			txtEntry->Focus();
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txtEntry_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnDone_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 stsControl->Text = "";
			 tmrControl->Enabled = false;
			 if( String::IsNullOrEmpty( txtEntry->Text ) )
			 {
				 MessageBox::Show( "Error: You must enter something!" );
				 txtDisplay->Text = "";
				 btnGo->Enabled = true;
				 txtEntry->ReadOnly = true;
				 intTimer = 0;
				 btnGo->Focus();
				 return;
			}
			 if( String::Compare( txtEntry->Text, txtDisplay->Text ) == 0 )
			 {
				 MessageBox::Show( "Match! You Typed the string in correctly" )
		}

private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
