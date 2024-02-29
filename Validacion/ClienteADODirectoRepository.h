#pragma once
#include "IClienteRepository.h"
#include "Cliente.h"
ref class ClienteADODirectoRepository : IClienteRepository
{
	public: void AddCliente(Cliente^ ClienteAPoner) override;
	public: DataTable^ dameLista() override;
};

