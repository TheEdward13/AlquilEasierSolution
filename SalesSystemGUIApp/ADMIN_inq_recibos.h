#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ADMIN_inq_recibos
	/// </summary>
	public ref class ADMIN_inq_recibos : public System::Windows::Forms::Form
	{
	public:
		ADMIN_inq_recibos(void)
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
		~ADMIN_inq_recibos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxMes;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxAño;
	private: System::Windows::Forms::ComboBox^ comboBoxNumDepa;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textDeuda;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textAlquiler;
	private: System::Windows::Forms::TextBox^ textAgua;
	private: System::Windows::Forms::TextBox^ textLuz;
	private: System::Windows::Forms::TextBox^ textSecurity;




	private: System::Windows::Forms::TextBox^ textInternet;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBoxPiso;


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
			this->comboBoxMes = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAño = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxNumDepa = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textDeuda = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->textAgua = (gcnew System::Windows::Forms::TextBox());
			this->textLuz = (gcnew System::Windows::Forms::TextBox());
			this->textSecurity = (gcnew System::Windows::Forms::TextBox());
			this->textInternet = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBoxPiso = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBoxMes
			// 
			this->comboBoxMes->FormattingEnabled = true;
			this->comboBoxMes->Location = System::Drawing::Point(52, 68);
			this->comboBoxMes->Name = L"comboBoxMes";
			this->comboBoxMes->Size = System::Drawing::Size(121, 21);
			this->comboBoxMes->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Mes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(275, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Año";
			// 
			// comboBoxAño
			// 
			this->comboBoxAño->FormattingEnabled = true;
			this->comboBoxAño->Location = System::Drawing::Point(279, 68);
			this->comboBoxAño->Name = L"comboBoxAño";
			this->comboBoxAño->Size = System::Drawing::Size(121, 21);
			this->comboBoxAño->TabIndex = 3;
			// 
			// comboBoxNumDepa
			// 
			this->comboBoxNumDepa->FormattingEnabled = true;
			this->comboBoxNumDepa->Location = System::Drawing::Point(279, 130);
			this->comboBoxNumDepa->Name = L"comboBoxNumDepa";
			this->comboBoxNumDepa->Size = System::Drawing::Size(121, 21);
			this->comboBoxNumDepa->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(275, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"N° Departamento";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Piso";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(99, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Deuda";
			// 
			// textDeuda
			// 
			this->textDeuda->Location = System::Drawing::Point(243, 188);
			this->textDeuda->Name = L"textDeuda";
			this->textDeuda->Size = System::Drawing::Size(132, 20);
			this->textDeuda->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(99, 241);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Alquiler";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(100, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Agua";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(100, 313);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Luz";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(99, 353);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Internet";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(99, 396);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Seguridad";
			// 
			// textAlquiler
			// 
			this->textAlquiler->Location = System::Drawing::Point(261, 241);
			this->textAlquiler->Name = L"textAlquiler";
			this->textAlquiler->Size = System::Drawing::Size(100, 20);
			this->textAlquiler->TabIndex = 15;
			// 
			// textAgua
			// 
			this->textAgua->Location = System::Drawing::Point(261, 278);
			this->textAgua->Name = L"textAgua";
			this->textAgua->Size = System::Drawing::Size(100, 20);
			this->textAgua->TabIndex = 16;
			// 
			// textLuz
			// 
			this->textLuz->Location = System::Drawing::Point(261, 313);
			this->textLuz->Name = L"textLuz";
			this->textLuz->Size = System::Drawing::Size(100, 20);
			this->textLuz->TabIndex = 17;
			// 
			// textSecurity
			// 
			this->textSecurity->Location = System::Drawing::Point(261, 396);
			this->textSecurity->Name = L"textSecurity";
			this->textSecurity->Size = System::Drawing::Size(100, 20);
			this->textSecurity->TabIndex = 18;
			// 
			// textInternet
			// 
			this->textInternet->Location = System::Drawing::Point(261, 353);
			this->textInternet->Name = L"textInternet";
			this->textInternet->Size = System::Drawing::Size(100, 20);
			this->textInternet->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(111, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 30);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(250, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 30);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Limpiar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button2_Click);
			// 
			// comboBoxPiso
			// 
			this->comboBoxPiso->FormattingEnabled = true;
			this->comboBoxPiso->Location = System::Drawing::Point(52, 130);
			this->comboBoxPiso->Name = L"comboBoxPiso";
			this->comboBoxPiso->Size = System::Drawing::Size(121, 21);
			this->comboBoxPiso->TabIndex = 23;
			// 
			// ADMIN_inq_recibos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(463, 515);
			this->Controls->Add(this->comboBoxPiso);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textInternet);
			this->Controls->Add(this->textSecurity);
			this->Controls->Add(this->textLuz);
			this->Controls->Add(this->textAgua);
			this->Controls->Add(this->textAlquiler);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textDeuda);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxNumDepa);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBoxAño);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxMes);
			this->Name = L"ADMIN_inq_recibos";
			this->Text = L"ADMIN_inq_recibos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double deuda = Convert::ToDouble(textDeuda->Text);
		double alquiler = Convert::ToDouble(textAlquiler->Text);
		double agua = Convert::ToDouble(textAgua->Text);
		double luz = Convert::ToDouble(textLuz->Text);
		double internet = Convert::ToDouble(textInternet->Text);
		double security = Convert::ToDouble(textSecurity->Text);

		Deudas^ recibo = gcnew Deudas();
		recibo->Deuda = deuda;
		recibo->Alquiler = alquiler;
		recibo->Agua = agua;
		recibo->Luz = luz;
		recibo->Internet = internet;
		recibo->Seguridad = security;


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}
	   void ClearControls() {
		   textDeuda->Text = "";
		   textAlquiler->Text = "";
		   textAgua->Text = "";
		   textLuz->Text = "";
		   textInternet->Text = "";
		   textSecurity->Text = "";
	   }
};
}
