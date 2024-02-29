#include "pch.h"
#include "ClienteADODirectoRepository.h"

void ClienteADODirectoRepository::AddCliente(Cliente^ ClienteAPoner)
{
    String^ queryString = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Banco;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
    SqlConnection^ connection = gcnew SqlConnection(queryString);
    String^ SentenciaSQL = "INSERT INTO[dbo].[Clientes] " +
        "    ([Nombre] " +
        "    ,[Visa] " +
        "    ,[Importe]) " +
        "    VALUES ('" +
        ClienteAPoner->Nombre + "','" +
        ClienteAPoner->Visa + "'," +
        ClienteAPoner->Importe + ")";
    SqlCommand^ command = gcnew SqlCommand(SentenciaSQL, connection);
    connection->Open();
    command->ExecuteNonQuery();
    connection->Close();
}

DataTable^ ClienteADODirectoRepository::dameLista()
{
    String^ CadenaConexion = "Server=tcp:sepesepe.database.windows.net,1433;Initial Catalog=Banco;Persist Security Info=False;User ID=as;Password=P0t@toP0t@to;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
    String^ queryString = "SELECT * FROM Clientes;";
    SqlConnection^ connection = gcnew SqlConnection(CadenaConexion);
    SqlCommand^ command = gcnew SqlCommand(queryString, connection);
    connection->Open();
    SqlDataReader^ reader = command->ExecuteReader();
    DataTable^ tabla = gcnew DataTable();
    tabla->Load(reader);
    connection->Close();
    return tabla;
    
    // TODO: Insertar una instrucción "return" aquí
}
