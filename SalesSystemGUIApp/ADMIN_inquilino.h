#pragma once
#include "ADMIN_inq_recibos.h"
#include "ADMIN_inq_infodep.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ADMIN_inquilino
	/// </summary>
	public ref class ADMIN_inquilino : public System::Windows::Forms::Form
	{
	public:
		ADMIN_inquilino(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ADMIN_inquilino()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(92, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar recibos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(92, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Mensajes";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(92, 241);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Agregar inquilino";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(92, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Modificar usuario";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(92, 438);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 55);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Información de departamento";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button5_Click);
			// 
			// ADMIN_inquilino
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(407, 593);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ADMIN_inquilino";
			this->Text = L"ADMIN_inquilino";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_inq_recibos^ inq_recibos = gcnew ADMIN_inq_recibos();
		inq_recibos->MdiParent = this;
		inq_recibos->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*CÓDIGO HACER CLICK Y AGREGAR USUARIO*/
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ADMIN_inq_infodep^ inq_infodep = gcnew ADMIN_inq_infodep();
	inq_infodep->MdiParent = this;
	inq_infodep->Show();
}
};
}
