#pragma once

using namespace System;
using namespace System::Data::OleDb;
using namespace System::Windows::Forms;

ref class DatabaseConnection
{
private:
    static DatabaseConnection^ instance = nullptr;
    String^ connectionString = "Provider=Microsoft.ACE.OLEDB.16.0;Data Source=Database.accdb";

    DatabaseConnection() {};
public:
    static property DatabaseConnection^ Instance
    {
        DatabaseConnection^ get()
        {
            if (instance == nullptr)
                instance = gcnew DatabaseConnection();
            return instance;
        }
    }

    OleDbDataReader^ ExecuteSelectQuery(String^ query, array<Object^>^ parameters)
    {
        OleDbCommand^ command = CreateCommand(query, parameters);
        OleDbDataReader^ reader = nullptr;

        try
        {
            command->Connection->Open();
            reader = command->ExecuteReader();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Произошла ошибка базы данных " + ex->Message, "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
            if (command->Connection->State == System::Data::ConnectionState::Open)
                command->Connection->Close();
            return nullptr;
        }

        return reader;
    }

    OleDbCommand^ CreateCommand(String^ query, array<Object^>^ parameters)
    {
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
        OleDbCommand^ command = gcnew OleDbCommand(query, connection);

        for each (Object ^ param in parameters)
        {
            OleDbParameter^ oleParam = gcnew OleDbParameter();
            oleParam->Value = param;
            command->Parameters->Add(oleParam);
        }

        return command;
    }

    int ExecuteUpdateQuery(String^ query, array<Object^>^ parameters)
    {
        OleDbCommand^ command = CreateCommand(query, parameters);
        int rowsAffected = 0;

        try
        {
            command->Connection->Open();
            rowsAffected = command->ExecuteNonQuery();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Произошла ошибка базы данных " + ex->Message, "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        finally
        {
            if (command->Connection->State == System::Data::ConnectionState::Open)
                command->Connection->Close();
        }

        return rowsAffected;
    }

};
