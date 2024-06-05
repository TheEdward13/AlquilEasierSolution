#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;
    using namespace AlquilEasierPersistance;

	/// <summary>
	/// Resumen de PersonalForm
	/// </summary>
	public ref class PersonalForm : public System::Windows::Forms::Form
	{
	public:
		PersonalForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ BarraOpciones;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ingreso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Salida;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxPisos;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdDepaColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ObservationsDepaColumn;
	private: System::Windows::Forms::Button^ RegistrarReporte;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ IdDepa;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ NombreCompleto;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;



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
            this->BarraOpciones = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Ingreso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Salida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBoxPisos = (gcnew System::Windows::Forms::ComboBox());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->IdDepaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->ObservationsDepaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->RegistrarReporte = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->IdDepa = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->NombreCompleto = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->BarraOpciones->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // BarraOpciones
            // 
            this->BarraOpciones->Controls->Add(this->tabPage1);
            this->BarraOpciones->Controls->Add(this->tabPage2);
            this->BarraOpciones->Controls->Add(this->tabPage3);
            this->BarraOpciones->Location = System::Drawing::Point(345, -1);
            this->BarraOpciones->Name = L"BarraOpciones";
            this->BarraOpciones->SelectedIndex = 0;
            this->BarraOpciones->Size = System::Drawing::Size(798, 514);
            this->BarraOpciones->TabIndex = 27;
            this->BarraOpciones->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::BarraOpciones_SelectedIndexChanged);
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->dataGridView1);
            this->tabPage1->Controls->Add(this->dateTimePicker2);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->dateTimePicker1);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(790, 485);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Registrar Horario";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &PersonalForm::tabPage1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(309, 199);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(144, 24);
            this->button2->TabIndex = 38;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->Ingreso,
                    this->Salida
            });
            this->dataGridView1->Location = System::Drawing::Point(78, 247);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(638, 189);
            this->dataGridView1->TabIndex = 37;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellContentClick);
            // 
            // Ingreso
            // 
            this->Ingreso->HeaderText = L"Ingreso";
            this->Ingreso->MinimumWidth = 6;
            this->Ingreso->Name = L"Ingreso";
            this->Ingreso->Width = 250;
            // 
            // Salida
            // 
            this->Salida->HeaderText = L"Salida";
            this->Salida->MinimumWidth = 6;
            this->Salida->Name = L"Salida";
            this->Salida->Width = 250;
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->Location = System::Drawing::Point(78, 143);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(418, 22);
            this->dateTimePicker2->TabIndex = 36;
            this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &PersonalForm::dateTimePicker2_ValueChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(75, 124);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(147, 16);
            this->label4->TabIndex = 35;
            this->label4->Text = L"Fecha y hora de salida:";
            this->label4->Click += gcnew System::EventHandler(this, &PersonalForm::label4_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(75, 46);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(155, 16);
            this->label3->TabIndex = 34;
            this->label3->Text = L"Fecha y hora de ingreso:";
            this->label3->Click += gcnew System::EventHandler(this, &PersonalForm::label3_Click);
            // 
            // dateTimePicker1
            // 
            this->dateTimePicker1->Location = System::Drawing::Point(78, 67);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(418, 22);
            this->dateTimePicker1->TabIndex = 33;
            this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &PersonalForm::dateTimePicker1_ValueChanged_1);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->label2);
            this->tabPage2->Controls->Add(this->comboBoxPisos);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(790, 485);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Registrar Habitaciones Limpias";
            this->tabPage2->UseVisualStyleBackColor = true;
            this->tabPage2->Click += gcnew System::EventHandler(this, &PersonalForm::tabPage2_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(617, 210);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(104, 16);
            this->label2->TabIndex = 29;
            this->label2->Text = L"Selecionar piso:";
            this->label2->Click += gcnew System::EventHandler(this, &PersonalForm::label2_Click);
            // 
            // comboBoxPisos
            // 
            this->comboBoxPisos->FormattingEnabled = true;
            this->comboBoxPisos->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Piso 1", L"Piso 2", L"Piso 3", L"Piso 4",
                    L"Piso 5"
            });
            this->comboBoxPisos->Location = System::Drawing::Point(620, 233);
            this->comboBoxPisos->Name = L"comboBoxPisos";
            this->comboBoxPisos->Size = System::Drawing::Size(121, 24);
            this->comboBoxPisos->TabIndex = 28;
            this->comboBoxPisos->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::comboBoxPisos_SelectedIndexChanged);
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->dataGridView2);
            this->tabPage3->Controls->Add(this->RegistrarReporte);
            this->tabPage3->Controls->Add(this->textBox2);
            this->tabPage3->Controls->Add(this->label5);
            this->tabPage3->Controls->Add(this->textBox1);
            this->tabPage3->Controls->Add(this->IdDepa);
            this->tabPage3->Location = System::Drawing::Point(4, 25);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(790, 485);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Registrar Observaciones";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // dataGridView2
            // 
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
                this->IdDepaColumn,
                    this->ObservationsDepaColumn
            });
            this->dataGridView2->Location = System::Drawing::Point(140, 241);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(503, 150);
            this->dataGridView2->TabIndex = 11;
            // 
            // IdDepaColumn
            // 
            this->IdDepaColumn->HeaderText = L"Id";
            this->IdDepaColumn->MinimumWidth = 6;
            this->IdDepaColumn->Name = L"IdDepaColumn";
            this->IdDepaColumn->Width = 125;
            // 
            // ObservationsDepaColumn
            // 
            this->ObservationsDepaColumn->HeaderText = L"Observaciones";
            this->ObservationsDepaColumn->MinimumWidth = 6;
            this->ObservationsDepaColumn->Name = L"ObservationsDepaColumn";
            this->ObservationsDepaColumn->Width = 125;
            // 
            // RegistrarReporte
            // 
            this->RegistrarReporte->Location = System::Drawing::Point(321, 174);
            this->RegistrarReporte->Name = L"RegistrarReporte";
            this->RegistrarReporte->Size = System::Drawing::Size(126, 30);
            this->RegistrarReporte->TabIndex = 10;
            this->RegistrarReporte->Text = L"Registar Reporte";
            this->RegistrarReporte->UseVisualStyleBackColor = true;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(229, 113);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(404, 22);
            this->textBox2->TabIndex = 9;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(121, 113);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(102, 16);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Observaciones:";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(151, 69);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(106, 22);
            this->textBox1->TabIndex = 7;
            // 
            // IdDepa
            // 
            this->IdDepa->AutoSize = true;
            this->IdDepa->Location = System::Drawing::Point(121, 75);
            this->IdDepa->Name = L"IdDepa";
            this->IdDepa->Size = System::Drawing::Size(24, 16);
            this->IdDepa->TabIndex = 6;
            this->IdDepa->Text = L"Id: ";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(-1, -1);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(340, 149);
            this->pictureBox1->TabIndex = 28;
            this->pictureBox1->TabStop = false;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label6->Location = System::Drawing::Point(114, 224);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(99, 20);
            this->label6->TabIndex = 29;
            this->label6->Text = L"Bienvenid@";
            this->label6->Click += gcnew System::EventHandler(this, &PersonalForm::label6_Click);
            // 
            // NombreCompleto
            // 
            this->NombreCompleto->AutoSize = true;
            this->NombreCompleto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->NombreCompleto->Location = System::Drawing::Point(94, 257);
            this->NombreCompleto->Name = L"NombreCompleto";
            this->NombreCompleto->Size = System::Drawing::Size(145, 20);
            this->NombreCompleto->TabIndex = 30;
            this->NombreCompleto->Text = L"Nombre y Apellido";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label7->Location = System::Drawing::Point(101, 346);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(129, 20);
            this->label7->TabIndex = 31;
            this->label7->Text = L"Tipo de usuario:";
            this->label7->Click += gcnew System::EventHandler(this, &PersonalForm::label7_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label8->Location = System::Drawing::Point(133, 383);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(67, 20);
            this->label8->TabIndex = 32;
            this->label8->Text = L"Usuario";
            // 
            // PersonalForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1150, 571);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->NombreCompleto);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->BarraOpciones);
            this->Name = L"PersonalForm";
            this->Text = L"PersonalForm";
            this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
            this->BarraOpciones->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private:
    CheckedListBox^ currentCheckedListBox; // Variable para almacenar el CheckedListBox actual
    int currentY = 35; // Posición inicial en Y para el CheckedListBox

    void UpdateCheckedListBox(array<String^>^ habitaciones)
    {
        // Si hay un CheckedListBox actual, removerlo
        if (currentCheckedListBox != nullptr)
        {
            this->tabPage2->Controls->Remove(currentCheckedListBox);
        }

        // Crear un nuevo CheckedListBox
        currentCheckedListBox = gcnew CheckedListBox();
        currentCheckedListBox->Size = System::Drawing::Size(this->Width / 2, 320); // Tamaño personalizado
        currentCheckedListBox->Location = System::Drawing::Point(10, currentY); // Posición personalizada

        // Añadir las habitaciones al CheckedListBox
        for each (String^ habitacion in habitaciones)
        {
            currentCheckedListBox->Items->Add(habitacion);
        }

        // Añadir el evento ItemCheck
        currentCheckedListBox->ItemCheck += gcnew ItemCheckEventHandler(this, &PersonalForm::currentCheckedListBox_ItemCheck);

        // Añadir el CheckedListBox a la pestaña
        this->tabPage2->Controls->Add(currentCheckedListBox);
    }

    void currentCheckedListBox_ItemCheck(Object^ sender, ItemCheckEventArgs^ e)
    {
        // Obtener el ítem que se va a cambiar
        String^ selectedItem = currentCheckedListBox->Items[e->Index]->ToString();

        // Mostrar el cuadro de diálogo de confirmación
        System::Windows::Forms::DialogResult result = MessageBox::Show(
            "¿Está seguro de su selección: " + selectedItem + "?",
            "Confirmación",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Question);

        // Si el usuario selecciona "No", cancelar el cambio
        if (result == System::Windows::Forms::DialogResult::No)
        {
            e->NewValue = e->CurrentValue; // Cancelar el cambio
        }
        else
        {
            int index = e->Index;
            // Crear una instancia de HabitacionMantenimiento
            HabitacionMantenimiento^ habitacionLimpia = gcnew HabitacionMantenimiento();

            habitacionLimpia->Id = Int32::Parse(selectedItem->Substring(selectedItem->IndexOf(" ") + 1));
            habitacionLimpia->estaLimpio = currentCheckedListBox->GetItemChecked(index);

            // Agregar la habitación limpia usando el servicio
            //Service::AddHabitacionLimpia(habitacionLimpia);

            Persistance::UpdateHabitacionLimpia(habitacionLimpia);

            // Mostrar mensaje de confirmación
            MessageBox::Show("La " + selectedItem + " ha sido marcada como limpia y registrada.", "Registro Exitoso", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    }

    array<String^>^ GetHabitacionesPorPiso(int piso)
    {
        List<String^>^ habitaciones = gcnew List<String^>();

        // Generar las habitaciones según el piso
        int numHabitaciones = 0;
        switch (piso)
        {
        case 1:
            numHabitaciones = 18;
            break;
        case 2:
            numHabitaciones = 20;
            break;
        case 3:
            numHabitaciones = 17;
            break;
        case 4:
            numHabitaciones = 10;
            break;
        case 5:
            numHabitaciones = 10;
            break;
        default:
            break;
        }

        for (int i = 1; i <= numHabitaciones; i++)
        {
            habitaciones->Add("Habitación " + (piso * 100 + i).ToString());
        }

        return habitaciones->ToArray();
    }

private: System::Void PersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {
    // Configurar la primera pestaña por defecto
    BarraOpciones->SelectedIndex = 0;
    pictureBox1->Image = Image::FromFile("C:\\ProyectoLPOO\\Logo.png");
    pictureBox1->Size = System::Drawing::Size(252, 149); // Tamaño deseado
    pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;  // Estirar la imagen para que se ajuste al tamaño del PictureBox
}

void comboBoxPisos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
    UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
}

private: System::Void BarraOpciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    // Verificar si la pestaña seleccionada es la segunda pestaña (TabPage2)
    if (BarraOpciones->SelectedTab == tabPage2) {
        // Mostrar los controles para seleccionar el piso y las habitaciones limpias
        comboBoxPisos->Visible = true;
        label2->Visible = true;

        dataGridView1->Visible = false;
        dateTimePicker1->Visible = false;
        dateTimePicker2->Visible = false;
        label3->Visible = false;
        label4->Visible = false;

        // Llenar el ComboBox de pisos
        comboBoxPisos->Items->Clear();
        comboBoxPisos->Items->AddRange(gcnew array<System::String^>{ "Piso 1", "Piso 2", "Piso 3", "Piso 4", "Piso 5" });

        // Por defecto, seleccionar el primer piso
        comboBoxPisos->SelectedIndex = 0;

        // Mostrar las habitaciones limpias del primer piso por defecto
        int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
        UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
    }
    else {
        // Ocultar los controles cuando no se selecciona tabPage2
        comboBoxPisos->Visible = false;
        label2->Visible = false;

        dataGridView1->Visible = true;
        dateTimePicker1->Visible = true;
        dateTimePicker2->Visible = true;
        label3->Visible = true;
        label4->Visible = true;
    }
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
    // Obtener la fecha y hora seleccionada
    DateTime selectedDateTime = dateTimePicker1->Value;
    String^ formattedDateTime = selectedDateTime.ToString(L"yyyy-MM-dd HH:mm:ss");
    // Mostrar la fecha y hora seleccionada en un MessageBox
    MessageBox::Show("Se seleccionó la fecha y hora: " + formattedDateTime,
        "Fecha y Hora Seleccionada", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void dateTimePicker2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
    // Obtener la fecha y hora seleccionada
    DateTime selectedDateTime = dateTimePicker1->Value;
    String^ formattedDateTime = selectedDateTime.ToString(L"yyyy-MM-dd HH:mm:ss");
    // Mostrar la fecha y hora seleccionada en un MessageBox
    MessageBox::Show("Se seleccionó la fecha y hora: " + formattedDateTime,
        "Fecha y Hora Seleccionada", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void IdDepa_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

