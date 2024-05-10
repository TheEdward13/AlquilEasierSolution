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
	/// Resumen de ApartmentForm
	/// </summary>
	public ref class ApartmentForm : public System::Windows::Forms::Form
	{
	public:
		ApartmentForm(void)
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
		~ApartmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtEstado;
	private: System::Windows::Forms::TextBox^ txtNumDep;
	private: System::Windows::Forms::TextBox^ txtPric;
	private: System::Windows::Forms::TextBox^ txtAcci;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAlterPhoto;
	private: System::Windows::Forms::DataGridView^ dgvApartment;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dimensiones;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Button^ Clean;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->txtNumDep = (gcnew System::Windows::Forms::TextBox());
			this->txtPric = (gcnew System::Windows::Forms::TextBox());
			this->txtAcci = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAlterPhoto = (gcnew System::Windows::Forms::Button());
			this->dgvApartment = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dimensiones = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Clean = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id: ";
			this->label1->Click += gcnew System::EventHandler(this, &ApartmentForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Números de departamento: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precios:";
			this->label3->Click += gcnew System::EventHandler(this, &ApartmentForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Accidentes";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(261, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Estado:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(477, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(205, 162);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(94, 40);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 6;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(333, 40);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(100, 20);
			this->txtEstado->TabIndex = 7;
			// 
			// txtNumDep
			// 
			this->txtNumDep->Location = System::Drawing::Point(204, 81);
			this->txtNumDep->Name = L"txtNumDep";
			this->txtNumDep->Size = System::Drawing::Size(100, 20);
			this->txtNumDep->TabIndex = 8;
			// 
			// txtPric
			// 
			this->txtPric->Location = System::Drawing::Point(204, 108);
			this->txtPric->Name = L"txtPric";
			this->txtPric->Size = System::Drawing::Size(100, 20);
			this->txtPric->TabIndex = 9;
			// 
			// txtAcci
			// 
			this->txtAcci->Location = System::Drawing::Point(204, 139);
			this->txtAcci->Name = L"txtAcci";
			this->txtAcci->Size = System::Drawing::Size(100, 20);
			this->txtAcci->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(33, 229);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(145, 23);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Agregar ";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ApartmentForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(204, 229);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(145, 23);
			this->btnUpdate->TabIndex = 16;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAlterPhoto
			// 
			this->btnAlterPhoto->Location = System::Drawing::Point(528, 229);
			this->btnAlterPhoto->Name = L"btnAlterPhoto";
			this->btnAlterPhoto->Size = System::Drawing::Size(145, 23);
			this->btnAlterPhoto->TabIndex = 17;
			this->btnAlterPhoto->Text = L"Actualizar Foto";
			this->btnAlterPhoto->UseVisualStyleBackColor = true;
			// 
			// dgvApartment
			// 
			this->dgvApartment->AllowUserToOrderColumns = true;
			this->dgvApartment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvApartment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->NumDepa,
					this->Precio, this->Dimensiones, this->Estado
			});
			this->dgvApartment->Location = System::Drawing::Point(94, 287);
			this->dgvApartment->Name = L"dgvApartment";
			this->dgvApartment->Size = System::Drawing::Size(544, 191);
			this->dgvApartment->TabIndex = 18;
			this->dgvApartment->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApartmentForm::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			// 
			// NumDepa
			// 
			this->NumDepa->HeaderText = L"N° Departamento";
			this->NumDepa->Name = L"NumDepa";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			// 
			// Dimensiones
			// 
			this->Dimensiones->HeaderText = L"Área";
			this->Dimensiones->Name = L"Dimensiones";
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->Name = L"Estado";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(726, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Clean
			// 
			this->Clean->Location = System::Drawing::Point(367, 229);
			this->Clean->Name = L"Clean";
			this->Clean->Size = System::Drawing::Size(145, 23);
			this->Clean->TabIndex = 20;
			this->Clean->Text = L"Limpiar";
			this->Clean->UseVisualStyleBackColor = true;
			this->Clean->Click += gcnew System::EventHandler(this, &ApartmentForm::button1_Click);
			// 
			// ApartmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(726, 517);
			this->Controls->Add(this->Clean);
			this->Controls->Add(this->dgvApartment);
			this->Controls->Add(this->btnAlterPhoto);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtAcci);
			this->Controls->Add(this->txtPric);
			this->Controls->Add(this->txtNumDep);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ApartmentForm";
			this->Text = L"ApartmentForm";
			this->Load += gcnew System::EventHandler(this, &ApartmentForm::ApartmentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ApartmentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void ClearControls() {
			   txtid->Text = "";
			   txtEstado->Text = "";
			   txtNumDep->Text = "";
			   txtPric->Text = "";
			   txtAcci->Text = "";
		   }

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txtid->Text);
		String^ estado = txtEstado->Text;
		int numdepartamento = Convert::ToInt32(txtNumDep->Text);
		double pic = Convert::ToDouble(txtPric->Text);
		String^ acci = txtAcci->Text;


		Departamento^ depa = gcnew Departamento();
		depa->Id = id;
		depa->Estado = estado;
		depa->NumDepa = numdepartamento;
		depa->Precio = pic;
		depa->Accidentes = acci;
		//hbhb

		Service::AddApartment(depa);
		showApartment();
}
		   void showApartment() {
			   List<Departamento^>^ departList = Service::ConsultaDepa();
			   dgvApartment->Rows->Clear();
			   for (int i = 0; i < departList->Count; i++) {
				   dgvApartment->Rows->Add(gcnew array<String^>{"" +departList[i]->Id, ""+departList[i]->NumDepa, ""+departList[i]->Precio,
					   ""+departList[i]->Dimensiones, departList[i]->Estado});
			   }
		   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
}
};
}
