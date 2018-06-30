#pragma once
#include "MyForm.h"

namespace torrent_searcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ widgetform
	/// </summary>
	public ref class widgetform : public System::Windows::Forms::Form
	{
	public:
		widgetform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~widgetform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Open Torrent searcher";
			this->label1->Click += gcnew System::EventHandler(this, &widgetform::label1_Click);
			// 
			// widgetform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(185, 41);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"widgetform";
			this->Opacity = 0.5;
			this->ShowInTaskbar = false;
			this->Text = L"widgetform";
			this->Load += gcnew System::EventHandler(this, &widgetform::widgetform_Load);
			this->Click += gcnew System::EventHandler(this, &widgetform::widgetform_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void widgetform_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Location = Point(Convert::ToInt32( IO::File::ReadAllText("widget\\xpos.txt") ), Convert::ToInt32( IO::File::ReadAllText("widget\\ypos.txt") ) );
				 SendToBack();
			 }
	private: System::Void widgetform_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyForm^ search = gcnew MyForm();
				 search->Show();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyForm^ search = gcnew MyForm();
				 search->Show();
			 }
	};
}
