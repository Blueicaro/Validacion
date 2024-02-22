#include "pch.h"
#include "ClientesEspecificacionV02.h"

bool ClientesEspecificacionV02::isValid(Cliente^ ClienteAValidar)
{
    this->lista = (gcnew List<String^>());
    if (ClienteAValidar->Nombre->Length <= 5)
        this->lista->Add("El nombre del cliente no cumple las reglas, debe ser mayor o igual a 5");
    if (ClienteAValidar->Importe <= 100)
        this->lista->Add("Importe tiene que ser 100 o mas");
    return (this->lista->Count == 0);
}

List<String^>^ ClientesEspecificacionV02::dameErrores()
{
    return this->lista;
}
