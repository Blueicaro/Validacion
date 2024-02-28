#pragma once
#include "IClienteRepository.h"
#include "ADOBaseRepository.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
ref class ClienteADORepository : public ADOBaseRepository, IClienteRepository
{
public: ClienteADORepository();
public: void AddCliente(Cliente^ ClienteAPoner) override;
public: DataTable^ dameLista() override;

};

