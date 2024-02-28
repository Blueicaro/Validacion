#pragma once
#include "Mascota.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

ref class IMascotaRepository abstract
{
public: virtual void AddMascota(Mascota^ MascotaAPoner) abstract;
public: virtual DataTable^ dameLista() abstract;
};