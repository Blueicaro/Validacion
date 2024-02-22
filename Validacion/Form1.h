#pragma once
#include "IClienteEspecificacion.h"
#include "ClientesEspecificacionV01.h"
#include "ClientesEspecificacionV02.h"
#include "IColeccionClientes.h"
#include "ColeccionClientesV01.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		IClienteEspecificacion^ Validador;
		IColeccionClientes^ Coleccion;
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPeso;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxDNINIE;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFNac;
	private: System::Windows::Forms::TextBox^ textBoxVisa;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxImporte;
	private: System::Windows::Forms::GroupBox^ groupBoxErrores;
	private: System::Windows::Forms::ListBox^ listBoxErrores;
	private: System::Windows::Forms::GroupBox^ groupBoxResumen;
	private: System::Windows::Forms::Label^ labelNumeroClientes;
	private: System::Windows::Forms::Label^ labelPesoMedio;
	private: System::Windows::Forms::Label^ labelImporteAcumulado;
	private: System::Windows::Forms::GroupBox^ groupBoxClientes;
	private: System::Windows::Forms::ListBox^ listBoxNombreCliente;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDownPeso = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDNINIE = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFNac = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxVisa = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxImporte = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxErrores = (gcnew System::Windows::Forms::GroupBox());
			this->listBoxErrores = (gcnew System::Windows::Forms::ListBox());
			this->groupBoxResumen = (gcnew System::Windows::Forms::GroupBox());
			this->labelPesoMedio = (gcnew System::Windows::Forms::Label());
			this->labelImporteAcumulado = (gcnew System::Windows::Forms::Label());
			this->labelNumeroClientes = (gcnew System::Windows::Forms::Label());
			this->groupBoxClientes = (gcnew System::Windows::Forms::GroupBox());
			this->listBoxNombreCliente = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPeso))->BeginInit();
			this->groupBoxErrores->SuspendLayout();
			this->groupBoxResumen->SuspendLayout();
			this->groupBoxClientes->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(541, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(120, 16);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(513, 26);
			this->textBoxNombre->TabIndex = 2;
			this->textBoxNombre->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxNombre_TextChanged);
			// 
			// numericUpDownPeso
			// 
			this->numericUpDownPeso->Location = System::Drawing::Point(120, 72);
			this->numericUpDownPeso->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->numericUpDownPeso->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownPeso->Name = L"numericUpDownPeso";
			this->numericUpDownPeso->Size = System::Drawing::Size(120, 26);
			this->numericUpDownPeso->TabIndex = 3;
			this->numericUpDownPeso->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Peso:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(354, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"DNI\\NIE";
			// 
			// textBoxDNINIE
			// 
			this->textBoxDNINIE->Location = System::Drawing::Point(459, 71);
			this->textBoxDNINIE->Name = L"textBoxDNINIE";
			this->textBoxDNINIE->Size = System::Drawing::Size(174, 26);
			this->textBoxDNINIE->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Fecha Nacimiento:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"NumVisa:";
			// 
			// dateTimePickerFNac
			// 
			this->dateTimePickerFNac->Location = System::Drawing::Point(178, 127);
			this->dateTimePickerFNac->Name = L"dateTimePickerFNac";
			this->dateTimePickerFNac->Size = System::Drawing::Size(200, 26);
			this->dateTimePickerFNac->TabIndex = 10;
			// 
			// textBoxVisa
			// 
			this->textBoxVisa->Location = System::Drawing::Point(120, 173);
			this->textBoxVisa->Name = L"textBoxVisa";
			this->textBoxVisa->Size = System::Drawing::Size(204, 26);
			this->textBoxVisa->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(339, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Importe";
			// 
			// textBoxImporte
			// 
			this->textBoxImporte->Location = System::Drawing::Point(421, 173);
			this->textBoxImporte->Name = L"textBoxImporte";
			this->textBoxImporte->Size = System::Drawing::Size(212, 26);
			this->textBoxImporte->TabIndex = 13;
			// 
			// groupBoxErrores
			// 
			this->groupBoxErrores->BackColor = System::Drawing::Color::IndianRed;
			this->groupBoxErrores->Controls->Add(this->listBoxErrores);
			this->groupBoxErrores->Location = System::Drawing::Point(31, 226);
			this->groupBoxErrores->Name = L"groupBoxErrores";
			this->groupBoxErrores->Size = System::Drawing::Size(555, 162);
			this->groupBoxErrores->TabIndex = 14;
			this->groupBoxErrores->TabStop = false;
			this->groupBoxErrores->Text = L"Errores";
			// 
			// listBoxErrores
			// 
			this->listBoxErrores->FormattingEnabled = true;
			this->listBoxErrores->ItemHeight = 20;
			this->listBoxErrores->Location = System::Drawing::Point(6, 25);
			this->listBoxErrores->Name = L"listBoxErrores";
			this->listBoxErrores->Size = System::Drawing::Size(537, 124);
			this->listBoxErrores->TabIndex = 0;
			// 
			// groupBoxResumen
			// 
			this->groupBoxResumen->BackColor = System::Drawing::Color::GreenYellow;
			this->groupBoxResumen->Controls->Add(this->labelPesoMedio);
			this->groupBoxResumen->Controls->Add(this->labelImporteAcumulado);
			this->groupBoxResumen->Controls->Add(this->labelNumeroClientes);
			this->groupBoxResumen->Location = System::Drawing::Point(661, 16);
			this->groupBoxResumen->Name = L"groupBoxResumen";
			this->groupBoxResumen->Size = System::Drawing::Size(320, 183);
			this->groupBoxResumen->TabIndex = 15;
			this->groupBoxResumen->TabStop = false;
			this->groupBoxResumen->Text = L"Resumen";
			// 
			// labelPesoMedio
			// 
			this->labelPesoMedio->AutoSize = true;
			this->labelPesoMedio->Location = System::Drawing::Point(7, 136);
			this->labelPesoMedio->Name = L"labelPesoMedio";
			this->labelPesoMedio->Size = System::Drawing::Size(96, 20);
			this->labelPesoMedio->TabIndex = 2;
			this->labelPesoMedio->Text = L"Peso Medio:";
			// 
			// labelImporteAcumulado
			// 
			this->labelImporteAcumulado->AutoSize = true;
			this->labelImporteAcumulado->Location = System::Drawing::Point(6, 86);
			this->labelImporteAcumulado->Name = L"labelImporteAcumulado";
			this->labelImporteAcumulado->Size = System::Drawing::Size(152, 20);
			this->labelImporteAcumulado->TabIndex = 1;
			this->labelImporteAcumulado->Text = L"Importe Acumulado:";
			// 
			// labelNumeroClientes
			// 
			this->labelNumeroClientes->AutoSize = true;
			this->labelNumeroClientes->Location = System::Drawing::Point(7, 40);
			this->labelNumeroClientes->Name = L"labelNumeroClientes";
			this->labelNumeroClientes->Size = System::Drawing::Size(129, 20);
			this->labelNumeroClientes->TabIndex = 0;
			this->labelNumeroClientes->Text = L"Num de Clientes:";
			// 
			// groupBoxClientes
			// 
			this->groupBoxClientes->BackColor = System::Drawing::Color::Cyan;
			this->groupBoxClientes->Controls->Add(this->listBoxNombreCliente);
			this->groupBoxClientes->Location = System::Drawing::Point(592, 226);
			this->groupBoxClientes->Name = L"groupBoxClientes";
			this->groupBoxClientes->Size = System::Drawing::Size(389, 162);
			this->groupBoxClientes->TabIndex = 16;
			this->groupBoxClientes->TabStop = false;
			this->groupBoxClientes->Text = L"Clientes introducidos";
			// 
			// listBoxNombreCliente
			// 
			this->listBoxNombreCliente->FormattingEnabled = true;
			this->listBoxNombreCliente->ItemHeight = 20;
			this->listBoxNombreCliente->Location = System::Drawing::Point(11, 25);
			this->listBoxNombreCliente->Name = L"listBoxNombreCliente";
			this->listBoxNombreCliente->Size = System::Drawing::Size(372, 124);
			this->listBoxNombreCliente->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 396);
			this->Controls->Add(this->groupBoxClientes);
			this->Controls->Add(this->groupBoxResumen);
			this->Controls->Add(this->groupBoxErrores);
			this->Controls->Add(this->textBoxImporte);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxVisa);
			this->Controls->Add(this->dateTimePickerFNac);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxDNINIE);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDownPeso);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPeso))->EndInit();
			this->groupBoxErrores->ResumeLayout(false);
			this->groupBoxResumen->ResumeLayout(false);
			this->groupBoxResumen->PerformLayout();
			this->groupBoxClientes->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxImporte->Text = "0";
		this->Validador = (gcnew ClientesEspecificacionV02());
		this->Coleccion = (gcnew ColeccionClientesV01());

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->listBoxErrores->Items->Clear();*/
	
	Cliente^ miCliente = (gcnew Cliente());
	miCliente->DNINIF = this->textBoxDNINIE->Text;
	miCliente->FechaDeNacimiento = this->dateTimePickerFNac->Value;
	miCliente->Nombre = this->textBoxNombre->Text;
	miCliente->Importe = Convert::ToDouble(this->textBoxImporte->Text);
	miCliente->Peso = (Int16)this->numericUpDownPeso->Value;
	miCliente->Visa = this->textBoxVisa->Text;
	this->listBoxErrores->Items->Clear();

	if (this->Validador->isValid(miCliente))
	{
		this->Coleccion->Add(miCliente);
		this->labelImporteAcumulado->Text = "Importe Total: "+this->Coleccion->dameImporteTotal();
		this->labelNumeroClientes->Text = "Numero Clientes: "+this->Coleccion->dameCantidad();
		this->labelPesoMedio->Text = "Peso Medio: "+this->Coleccion->damePeso();
		this->listBoxNombreCliente->Items->Clear();
		for each (String^ var in Coleccion->dameEntradas())
		{
			this->listBoxNombreCliente->Items->Add(var);
		}
	}	
	else
	{
		for each (String^ var in this->Validador->dameErrores())
		{
			this->listBoxErrores->Items->Add(var);
		}
	}



		
}
private: System::Void textBoxNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
