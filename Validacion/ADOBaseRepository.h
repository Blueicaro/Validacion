#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
ref class ADOBaseRepository
{
public: ADOBaseRepository(String^ CadenaConexion, String^ Tabla);
protected: DataTable^ dameListaBase();
protected: SqlDataAdapter^ dataAdapter;
protected: DataTable^ table;
};

