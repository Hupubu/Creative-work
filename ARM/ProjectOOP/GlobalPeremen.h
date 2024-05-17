#pragma once
extern int Kod_Sotrudnika;

#pragma once

using namespace std;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class Connect
{
public:
    Connect()
    {
        connectString = "server=localhost;user=root;password=;database=pizza;charset=utf8;";
        myConnection = gcnew MySqlConnection(connectString);
    }
    System::String^ connectString;
    MySqlConnection^ myConnection;
    MySqlDataReader^ sqlReader;
    MySqlCommand^ command;
};
