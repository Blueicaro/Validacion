#include "pch.h"
#include "ClientesEspecificacionV01.h"

bool ClientesEspecificacionV01::isValid(Cliente^ ClienteAValidar)
{
    this->lista = (gcnew List<String^>());
    if (ClienteAValidar->Nombre->Length <= 10)
        this->lista->Add("El nombre del cliente no cumple las reglas, debe ser mayor o igual a 10");
    if (ClienteAValidar->Importe <= 0)
        this->lista->Add("Importe tiene que ser cero o mas");
    if (ClienteAValidar->DNINIF->Length <= 5)
        this->lista->Add("Dni longitud minima cinco");
    return (this->lista->Count == 0);

}

List<String^>^ ClientesEspecificacionV01::dameErrores()
{
    return this->lista;
}
