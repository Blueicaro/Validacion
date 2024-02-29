#pragma once
#include "ListadoMascotas.h"
#include "Form1.h"
namespace Validacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ vebtabasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mascotaVerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mAscitasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ introducirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ introducirCliente;
	private: System::Windows::Forms::ToolStripMenuItem^ verClientes;




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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->vebtabasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mascotaVerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introducirCliente = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verClientes = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mAscitasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introducirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->vebtabasToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1044, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// vebtabasToolStripMenuItem
			// 
			this->vebtabasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mascotaVerToolStripMenuItem,
					this->mAscitasToolStripMenuItem
			});
			this->vebtabasToolStripMenuItem->Name = L"vebtabasToolStripMenuItem";
			this->vebtabasToolStripMenuItem->Size = System::Drawing::Size(101, 29);
			this->vebtabasToolStripMenuItem->Text = L"Vebtabas";
			// 
			// mascotaVerToolStripMenuItem
			// 
			this->mascotaVerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->introducirCliente,
					this->verClientes
			});
			this->mascotaVerToolStripMenuItem->Name = L"mascotaVerToolStripMenuItem";
			this->mascotaVerToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->mascotaVerToolStripMenuItem->Text = L"Clientes";
			// 
			// introducirCliente
			// 
			this->introducirCliente->Name = L"introducirCliente";
			this->introducirCliente->Size = System::Drawing::Size(270, 34);
			this->introducirCliente->Text = L"Introducir";
			this->introducirCliente->Click += gcnew System::EventHandler(this, &MenuPrincipal::introducirToolStripMenuItem1_Click);
			// 
			// verClientes
			// 
			this->verClientes->Name = L"verClientes";
			this->verClientes->Size = System::Drawing::Size(270, 34);
			this->verClientes->Text = L"Ver";
			this->verClientes->Click += gcnew System::EventHandler(this, &MenuPrincipal::verToolStripMenuItem_Click);
			// 
			// mAscitasToolStripMenuItem
			// 
			this->mAscitasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->introducirToolStripMenuItem,
					this->vToolStripMenuItem
			});
			this->mAscitasToolStripMenuItem->Name = L"mAscitasToolStripMenuItem";
			this->mAscitasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->mAscitasToolStripMenuItem->Text = L"Mascotas";
			// 
			// introducirToolStripMenuItem
			// 
			this->introducirToolStripMenuItem->Name = L"introducirToolStripMenuItem";
			this->introducirToolStripMenuItem->Size = System::Drawing::Size(191, 34);
			this->introducirToolStripMenuItem->Text = L"Introducir";
			this->introducirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::introducirToolStripMenuItem_Click);
			// 
			// vToolStripMenuItem
			// 
			this->vToolStripMenuItem->Name = L"vToolStripMenuItem";
			this->vToolStripMenuItem->Size = System::Drawing::Size(191, 34);
			this->vToolStripMenuItem->Text = L"Ver";
			this->vToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::vToolStripMenuItem_Click);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 421);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuPrincipal";
			this->Text = L"MenuPrincipal";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void introducirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void vToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void introducirToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ rgForm = gcnew CppCLRWinFormsProject::Form1();
	rgForm->Show();
	//this->Hide();
}
private: System::Void verToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Listado^ rgForm = gcnew Listado();
	rgForm->Show();

}
private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
