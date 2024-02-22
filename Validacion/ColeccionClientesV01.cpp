#include "pch.h"
#include "ColeccionClientesV01.h"
using namespace System::Collections::Generic;
ColeccionClientesV01::ColeccionClientesV01()
{
    this->lista = (gcnew List<Cliente^>());
}

int ColeccionClientesV01::dameCantidad()
{
    return this->lista->Count;
}

double ColeccionClientesV01::dameImporteTotal()
{
    return this->ImporteTotal;
}

double ColeccionClientesV01::damePeso()
{
    return (this->PesoTotal / dameCantidad());
}

void ColeccionClientesV01::Add(Cliente^ ClienteAMeter)
{
    this->lista->Add(ClienteAMeter);
    this->ImporteTotal += ClienteAMeter->Importe;
    this->PesoTotal += *ClienteAMeter->Peso;
}

List<String^>^ ColeccionClientesV01::dameEntradas()
{
    List<String^>^ listaPaso = (gcnew List<String^>());
    for each (Cliente^ var in this->lista)
    {
        listaPaso->Add(var->Nombre);
    }
    return listaPaso;
}
