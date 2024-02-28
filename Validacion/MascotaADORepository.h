#pragma once
#include "IMascotaRepository.h"
#include "ADOBaseRepository.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
ref class MascotaADORepository : public ADOBaseRepository, IMascotaRepository
{
public: MascotaADORepository();
public: void AddMascota(Mascota^ MascotaAPoner) override;
public: DataTable^ dameLista() override;
	  SqlDataAdapter^ dataAdapter;
	  DataTable^ table;
};

