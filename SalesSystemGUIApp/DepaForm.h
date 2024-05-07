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

	/// <summary>
	/// Resumen de depaForm
	/// </summary>
	public ref class DepaForm : public System::Windows::Forms::Form
	{
	public:
		DepaForm(void)
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
		~DepaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pbphoto;
	private: System::Windows::Forms::TextBox^ txtid;
	private: System::Windows::Forms::TextBox^ txtNumDep;
	private: System::Windows::Forms::TextBox^ txtPric;
	private: System::Windows::Forms::TextBox^ txtAcci;






	private: System::Windows::Forms::TextBox^ txtEstado;






	private: System::Windows::Forms::Button^ btnAlterPhoto;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::DataGridView^ dgvDepas;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoPiso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoHabitaciones;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoBaños;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepartamentoPrecio;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pbphoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtNumDep = (gcnew System::Windows::Forms::TextBox());
			this->txtPric = (gcnew System::Windows::Forms::TextBox());
			this->txtAcci = (gcnew System::Windows::Forms::TextBox());
			this->txtEstado = (gcnew System::Windows::Forms::TextBox());
			this->btnAlterPhoto = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->dgvDepas = (gcnew System::Windows::Forms::DataGridView());
			this->DepartamentoId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartamentoNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartamentoPiso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartamentoHabitaciones = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartamentoBaños = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepartamentoPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDepas))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			this->label1->Click += gcnew System::EventHandler(this, &DepaForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(222, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Estado:";
			this->label2->Click += gcnew System::EventHandler(this, &DepaForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"NumDepa";
			this->label3->Click += gcnew System::EventHandler(this, &DepaForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(43, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Accidentes";
			// 
			// pbphoto
			// 
			this->pbphoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbphoto->Location = System::Drawing::Point(435, 24);
			this->pbphoto->Name = L"pbphoto";
			this->pbphoto->Size = System::Drawing::Size(273, 183);
			this->pbphoto->TabIndex = 6;
			this->pbphoto->TabStop = false;
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(79, 47);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(100, 20);
			this->txtid->TabIndex = 7;
			this->txtid->TextChanged += gcnew System::EventHandler(this, &DepaForm::txtid_TextChanged);
			// 
			// txtNumDep
			// 
			this->txtNumDep->Location = System::Drawing::Point(116, 75);
			this->txtNumDep->Name = L"txtNumDep";
			this->txtNumDep->Size = System::Drawing::Size(100, 20);
			this->txtNumDep->TabIndex = 8;
			// 
			// txtPric
			// 
			this->txtPric->Location = System::Drawing::Point(134, 121);
			this->txtPric->Name = L"txtPric";
			this->txtPric->Size = System::Drawing::Size(100, 20);
			this->txtPric->TabIndex = 9;
			// 
			// txtAcci
			// 
			this->txtAcci->Location = System::Drawing::Point(134, 155);
			this->txtAcci->Name = L"txtAcci";
			this->txtAcci->Size = System::Drawing::Size(100, 20);
			this->txtAcci->TabIndex = 11;
			// 
			// txtEstado
			// 
			this->txtEstado->Location = System::Drawing::Point(275, 47);
			this->txtEstado->Name = L"txtEstado";
			this->txtEstado->Size = System::Drawing::Size(100, 20);
			this->txtEstado->TabIndex = 12;
			// 
			// btnAlterPhoto
			// 
			this->btnAlterPhoto->Location = System::Drawing::Point(563, 232);
			this->btnAlterPhoto->Name = L"btnAlterPhoto";
			this->btnAlterPhoto->Size = System::Drawing::Size(145, 23);
			this->btnAlterPhoto->TabIndex = 13;
			this->btnAlterPhoto->Text = L"Actualizar Foto";
			this->btnAlterPhoto->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(46, 232);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(145, 23);
			this->btnAdd->TabIndex = 14;
			this->btnAdd->Text = L"Agregar ";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DepaForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(207, 232);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(145, 23);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// dgvDepas
			// 
			this->dgvDepas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDepas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->DepartamentoId,
					this->DepartamentoNombre, this->DepartamentoPiso, this->DepartamentoHabitaciones, this->DepartamentoBaños, this->DepartamentoPrecio
			});
			this->dgvDepas->Location = System::Drawing::Point(46, 276);
			this->dgvDepas->Name = L"dgvDepas";
			this->dgvDepas->Size = System::Drawing::Size(662, 203);
			this->dgvDepas->TabIndex = 17;
			// 
			// DepartamentoId
			// 
			this->DepartamentoId->HeaderText = L"Id";
			this->DepartamentoId->Name = L"DepartamentoId";
			// 
			// DepartamentoNombre
			// 
			this->DepartamentoNombre->HeaderText = L"Nombre";
			this->DepartamentoNombre->Name = L"DepartamentoNombre";
			// 
			// DepartamentoPiso
			// 
			this->DepartamentoPiso->HeaderText = L"Piso";
			this->DepartamentoPiso->Name = L"DepartamentoPiso";
			// 
			// DepartamentoHabitaciones
			// 
			this->DepartamentoHabitaciones->HeaderText = L"Habitaciones";
			this->DepartamentoHabitaciones->Name = L"DepartamentoHabitaciones";
			// 
			// DepartamentoBaños
			// 
			this->DepartamentoBaños->HeaderText = L"Baños";
			this->DepartamentoBaños->Name = L"DepartamentoBaños";
			// 
			// DepartamentoPrecio
			// 
			this->DepartamentoPrecio->HeaderText = L"Precio";
			this->DepartamentoPrecio->Name = L"DepartamentoPrecio";
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(757, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &DepaForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &DepaForm::salirToolStripMenuItem_Click);
			// 
			// DepaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 491);
			this->Controls->Add(this->dgvDepas);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnAlterPhoto);
			this->Controls->Add(this->txtEstado);
			this->Controls->Add(this->txtAcci);
			this->Controls->Add(this->txtPric);
			this->Controls->Add(this->txtNumDep);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->pbphoto);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DepaForm";
			this->Text = L"Mantenimiento de Departamentos";
			this->Load += gcnew System::EventHandler(this, &DepaForm::DepaForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbphoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDepas))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void ClearControls() {
			   txtid->Text = "";
			   txtName->Text = "";
			   txtba->Text = "";
			   txtFloor->Text = "";
			   txthab->Text = "";
			   txtPrice->Text = "";

		   }
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
		btnAdd->Enabled = true;
		btnUpdate->Enabled = false;
		btnDelete->Enabled = false;

	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtid->Text);
		String^ estado = txtEstado->Text;
		int txtNumDep = Convert::ToInt32(txtNumDep->Text);
		Double^ pic = Convert::ToDouble(txtPric->Text);
		String^ acci = Convert::txtAcci->Text;


		Departamento^ depa = gcnew Departamento();
		depa->Id = id;
		depa->Estado = estado;
		depa->NumDepa = txtNumDep;
		depa->Precio = pic;
		depa->Accidentes = acci;

		Service::addApartment(depa);
	}
	
};
}