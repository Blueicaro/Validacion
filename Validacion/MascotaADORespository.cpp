#include "pch.h"
#include "MascotaADORepository.h"
#include "ADOBaseRepository.h"

MascotaADORepository::MascotaADORepository(): ADOBaseRepository("Server = tcp:sepesepe.database.windows.net, 1433; Initial Catalog = Banco; Persist Security Info = False; User ID = as; Password = P0t@toP0t@to; MultipleActiveResultSets = False; Encrypt = True; TrustServerCertificate = False; Connection Timeout = 30; ","Mascotas")
{
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
	return dameListaBase();
}