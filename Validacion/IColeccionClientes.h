#pragma once
#include "Cliente.h"
using namespace System::Collections::Generic;
ref class IColeccionClientes
{
	public: virtual int dameCantidad() abstract;
	public: virtual double dameImporteTotal() abstract;
	public: virtual double damePeso() abstract;
	public: virtual void Add(Cliente^ ClienteAMeter) abstract;
	public: virtual List<String^>^ dameEntradas() abstract;

};

