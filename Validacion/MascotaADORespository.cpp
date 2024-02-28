#include "pch.h"
#include "MascotaADORepository.h"

MascotaADORepository::MascotaADORepository()
{
	String^ connectionString = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Banco;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;"; // Replace with your actual connection string

	// Create a connection and data adapter
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	dataAdapter = gcnew SqlDataAdapter();
	dataAdapter->SelectCommand = gcnew SqlCommand("SELECT * FROM Mascotas", connection);
	SqlCommandBuilder^ builder = gcnew SqlCommandBuilder(dataAdapter);
	dataAdapter->InsertCommand = builder->GetInsertCommand();
	dataAdapter->UpdateCommand = builder->GetUpdateCommand();
	dataAdapter->DeleteCommand = builder->GetDeleteCommand();
}

void MascotaADORepository::AddMascota(Mascota^ MascotaAPoner)
{
	table = gcnew DataTable();
	dataAdapter->Fill(table);
	DataRow^ fila = table->NewRow();
	fila["CodMascota"] = 0;
	fila["Nombre"] = MascotaAPoner->Nombre;
	table->Rows->Add(fila);
	dataAdapter->Update(table);
}

DataTable^ MascotaADORepository::dameLista()
{
	table = gcnew DataTable();
	dataAdapter->Fill(table);
	return table;
}
