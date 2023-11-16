/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To create login page of application

**************************************************************************************************

*/



#pragma once
#include "Main.h"
#include "REGIS.h"
#include "IO.h"
#include "Content.h"
#include "operation.h"
namespace PassMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Operation;
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
		}

	protected:
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

		// variable declaration auto generated by visual studio 2017
	private: System::Windows::Forms::PictureBox^  picmain;
	protected:

	private: System::Windows::Forms::PictureBox^  picuser;
	protected:

	private: System::Windows::Forms::TextBox^  User;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::PictureBox^  picpass;


	private: System::Windows::Forms::PictureBox^  close;
	private: System::Windows::Forms::Button^  sign;
	private: System::Windows::Forms::Button^  regi;


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;

	private:


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			//generated by visual studio 2017

			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->picmain = (gcnew System::Windows::Forms::PictureBox());
			this->picuser = (gcnew System::Windows::Forms::PictureBox());
			this->User = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->picpass = (gcnew System::Windows::Forms::PictureBox());
			this->close = (gcnew System::Windows::Forms::PictureBox());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->regi = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picmain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picpass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->BeginInit();
			this->SuspendLayout();
			//
			// picmain
			//
			this->picmain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picmain->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picmain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picmain.Image")));
			this->picmain->Location = System::Drawing::Point(88, 12);
			this->picmain->Name = L"picmain";
			this->picmain->Size = System::Drawing::Size(108, 100);
			this->picmain->TabIndex = 0;
			this->picmain->TabStop = false;
			//
			// picuser
			//
			this->picuser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picuser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picuser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picuser.Image")));
			this->picuser->Location = System::Drawing::Point(18, 132);
			this->picuser->Name = L"picuser";
			this->picuser->Size = System::Drawing::Size(32, 28);
			this->picuser->TabIndex = 1;
			this->picuser->TabStop = false;
			//
			// User
			//
			this->User->BackColor = System::Drawing::SystemColors::HotTrack;
			this->User->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->User->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User->ForeColor = System::Drawing::Color::White;
			this->User->Location = System::Drawing::Point(56, 137);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(199, 23);
			this->User->TabIndex = 2;
			this->User->Text = L"User Name";
			this->User->Click += gcnew System::EventHandler(this, &Login::clicked);
			//
			// panel1
			//
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(18, 166);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 1);
			this->panel1->TabIndex = 3;
			//
			// panel2
			//
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Location = System::Drawing::Point(18, 226);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 1);
			this->panel2->TabIndex = 6;
			//
			// pass
			//
			this->pass->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(56, 197);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(199, 23);
			this->pass->TabIndex = 5;
			this->pass->Text = L"Password";
			this->pass->Click += gcnew System::EventHandler(this, &Login::Pass_click);
			//
			// picpass
			//
			this->picpass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picpass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picpass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picpass.Image")));
			this->picpass->Location = System::Drawing::Point(18, 192);
			this->picpass->Name = L"picpass";
			this->picpass->Size = System::Drawing::Size(32, 28);
			this->picpass->TabIndex = 4;
			this->picpass->TabStop = false;
			//
			// close
			//
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->close->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.Image")));
			this->close->Location = System::Drawing::Point(249, 12);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(28, 28);
			this->close->TabIndex = 7;
			this->close->TabStop = false;
			this->close->Click += gcnew System::EventHandler(this, &Login::click_close);
			this->close->MouseHover += gcnew System::EventHandler(this, &Login::hover_close);
			//
			// sign
			//
			this->sign->BackColor = System::Drawing::SystemColors::HotTrack;
			this->sign->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->Location = System::Drawing::Point(18, 255);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(250, 39);
			this->sign->TabIndex = 8;
			this->sign->Text = L"Sign In";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &Login::sign_Click);
			//
			// regi
			//
			this->regi->BackColor = System::Drawing::SystemColors::HotTrack;
			this->regi->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regi->Location = System::Drawing::Point(18, 324);
			this->regi->Name = L"regi";
			this->regi->Size = System::Drawing::Size(250, 39);
			this->regi->TabIndex = 9;
			this->regi->Text = L"Register";
			this->regi->UseVisualStyleBackColor = false;
			this->regi->Click += gcnew System::EventHandler(this, &Login::regi_Click);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(67, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"If you are new User";
			//
			// Login
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(284, 399);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->regi);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->close);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->picpass);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->User);
			this->Controls->Add(this->picuser);
			this->Controls->Add(this->picmain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picmain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picpass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//user name box clicked
	private: System::Void clicked(System::Object^  sender, System::EventArgs^  e) {
		User->Clear();

	}

	//PassWord box is clicked then this happens
	private: System::Void Pass_click(System::Object^  sender, System::EventArgs^  e) {
		pass->Clear();
		pass->PasswordChar = '*';
	}

			 //closing event
	private: System::Void click_close(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Do you want to Exit?", "Password Manager", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
			 //adding a SetToolTip
	private: System::Void hover_close(System::Object^  sender, System::EventArgs^  e) {

		toolTip1->SetToolTip(close, "close");

	}

//if registeration button is clicked


	private: System::Void regi_Click(System::Object^  sender, System::EventArgs^  e) {

		REGIS ^ abc = gcnew REGIS;
		abc->Show();
	}

//sign in clicked
	private: System::Void sign_Click(System::Object^  sender, System::EventArgs^  e) {

//get inputs
		String ^ u = User->Text;
		String ^ p = pass->Text;
		//change system string to normal string
		std::string us = msclr::interop::marshal_as<std::string>(u);
		std::string ps = msclr::interop::marshal_as<std::string>(p);
//call function to laod data of user
		LoadDataSec(usrs);

//find user name
		int x = findme(us);

		if (x != -12 && us!=" " && ps!=" ")    //User found
		{
			if (usrs[x].verifyPass(ps))
			{
				MessageBox::Show("Hello " + u + "\n Welcome In this application", "Password Manager");
				adm = us;
				std::string fi = adm + ".txt";
				int k = LoadData(ppl, fi);
				init();

				//hide the current form
				this->Hide();
				//open main page
				Main ^ abc = gcnew Main;
				abc->ShowDialog();
				this->Show();


			}
		}
		else
		{
			MessageBox::Show("Wrong username or password", "Password Manager");
		}

	}
#pragma endregion
	private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
