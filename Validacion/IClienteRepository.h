#pragma once
#include "IColeccionClientes.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

public interface class IClienteRepository 
{
	void AddCliente(Cliente^ ClienteAPoner);
	DataTable^ dameLista();
};

