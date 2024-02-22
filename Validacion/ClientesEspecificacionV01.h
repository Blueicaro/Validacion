#pragma once
#include "IClienteEspecificacion.h"
using namespace System::Collections::Generic;

ref class ClientesEspecificacionV01 : public IClienteEspecificacion
{
	private: List<String^>^ lista;
	public: virtual bool isValid(Cliente^ ClienteAValidar) override;
	public: virtual List<String^>^ dameErrores() override;
};

