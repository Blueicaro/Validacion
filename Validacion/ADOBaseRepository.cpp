#include "pch.h"
#include "ADOBaseRepository.h"

//	String^ connectionString = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Banco;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;"; // Replace with your actual connection string

ADOBaseRepository::ADOBaseRepository(String^ CadenaConexion, String^ Tabla)
{
	// Create a connection and data adapter
	SqlConnection^ connection = gcnew SqlConnection(CadenaConexion);
	dataAdapter = gcnew SqlDataAdapter();
	dataAdapter->SelectCommand = gcnew SqlCommand("SELECT * FROM "+Tabla, connection);
	SqlCommandBuilder^ builder = gcnew SqlCommandBuilder(dataAdapter);
	dataAdapter->InsertCommand = builder->GetInsertCommand();
	dataAdapter->UpdateCommand = builder->GetUpdateCommand();
	dataAdapter->DeleteCommand = builder->GetDeleteCommand();
}

DataTable^ ADOBaseRepository::dameListaBase()
{
	table = gcnew DataTable();
	dataAdapter->Fill(table);
	return table;
}
