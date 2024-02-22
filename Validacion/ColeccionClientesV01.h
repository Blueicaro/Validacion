#pragma once
#include "IColeccionClientes.h"
using namespace System::Collections::Generic;

ref class ColeccionClientesV01 : public IColeccionClientes
{
	private: List<Cliente^>^ lista;
	private: double ImporteTotal;
	private: double PesoTotal;

	public: ColeccionClientesV01();
	public: virtual int dameCantidad() override;
	public: virtual double dameImporteTotal() override;
	public: virtual double damePeso() override;
	public: virtual void Add(Cliente^ ClienteAMeter) override;
	public: virtual List<String^>^ dameEntradas() override;
};

