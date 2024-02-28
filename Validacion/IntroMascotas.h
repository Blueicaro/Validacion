#pragma once
#include "ClienteADORepository.h"
#include "MascotaADORepository.h"
#include "ListadoMascotas.h"

namespace Validacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IntroMascotas
	/// </summary>
	public ref class IntroMascotas : public System::Windows::Forms::Form
	{
	public:
		IntroMascotas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}		  
	private: System::Windows::Forms::Button^ buttonCrear;
	public:

	private: System::Windows::Forms::Button^ buttonListado;
	public:

	private: System::Windows::Forms::Label^ labelMascota;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
		   IMascotaRepository^ Repositorio;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IntroMascotas()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->buttonCrear = (gcnew System::Windows::Forms::Button());
			this->buttonListado = (gcnew System::Windows::Forms::Button());
			this->labelMascota = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonCrear
			// 
			this->buttonCrear->Location = System::Drawing::Point(676, 13);
			this->buttonCrear->Name = L"buttonCrear";
			this->buttonCrear->Size = System::Drawing::Size(75, 23);
			this->buttonCrear->TabIndex = 0;
			this->buttonCrear->Text = L"Crear";
			this->buttonCrear->UseVisualStyleBackColor = true;
			this->buttonCrear->Click += gcnew System::EventHandler(this, &IntroMascotas::buttonCrear_Click);
			// 
			// buttonListado
			// 
			this->buttonListado->Location = System::Drawing::Point(581, 12);
			this->buttonListado->Name = L"buttonListado";
			this->buttonListado->Size = System::Drawing::Size(75, 23);
			this->buttonListado->TabIndex = 1;
			this->buttonListado->Text = L"Listado";
			this->buttonListado->UseVisualStyleBackColor = true;
			this->buttonListado->Click += gcnew System::EventHandler(this, &IntroMascotas::buttonListado_Click);
			// 
			// labelMascota
			// 
			this->labelMascota->AutoSize = true;
			this->labelMascota->Location = System::Drawing::Point(24, 14);
			this->labelMascota->Name = L"labelMascota";
			this->labelMascota->Size = System::Drawing::Size(134, 20);
			this->labelMascota->TabIndex = 2;
			this->labelMascota->Text = L"Nombre Mascota:";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(183, 8);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(363, 26);
			this->textBoxNombre->TabIndex = 3;
			// 
			// IntroMascotas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 241);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->labelMascota);
			this->Controls->Add(this->buttonListado);
			this->Controls->Add(this->buttonCrear);
			this->Name = L"IntroMascotas";
			this->Text = L"IntroMascotas";
			this->Load += gcnew System::EventHandler(this, &IntroMascotas::IntroMascotas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void IntroMascotas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Repositorio = (gcnew MascotaADORepository());
	
	}

	private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
		Mascota^ MiMascota = gcnew Mascota();
		MiMascota->Nombre = this->textBoxNombre->Text;
		this->Repositorio->AddMascota(MiMascota);
	}
private: System::Void buttonListado_Click(System::Object^ sender, System::EventArgs^ e) {
	ListadoMascotas^ rgForm = gcnew ListadoMascotas();
	rgForm->Show();
	this->Hide();
}
};
}
