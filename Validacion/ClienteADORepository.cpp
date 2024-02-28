#include "pch.h"
#include "ClienteADORepository.h"
using namespace System::Collections::Generic;

ClienteADORepository::ClienteADORepository() :ADOBaseRepository("Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Banco;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;","Clientes")
{
}

void ClienteADORepository::AddCliente(Cliente^ ClienteAPoner)
{
	table = gcnew DataTable();
	dataAdapter->Fill(table);
	DataRow^ fila = table->NewRow();
	fila["CodCliente"] = 0;
	fila["Nombre"] = ClienteAPoner->Nombre;
	table->Rows->Add(fila);
	dataAdapter->Update(table);
}

DataTable^ ClienteADORepository::dameLista()
{
	return dameListaBase();
}




