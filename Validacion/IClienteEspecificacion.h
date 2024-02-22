#pragma once
#include "Cliente.h"
using namespace System::Collections::Generic;
ref class IClienteEspecificacion abstract
{
	public: virtual bool isValid(Cliente^ ClienteAValidar) abstract;
	public: virtual List<String^>^ dameErrores() abstract;
};

