#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

struct Client
{
    string AccountNumber = "";
    string PinCode = "";
    string Name = "";
    string Phone = "";
    double AccountBalance = 0;
};

Client ReadNewClient()
{

    Client Cl;

    cout << "Enter Account Number ?\n";
    getline(cin , Cl.AccountNumber);

    cout << "Enter Pin Code ?\n";
    getline(cin, Cl.PinCode);

    cout << "Enter Name ?\n";
    getline(cin, Cl.Name);

    cout << "Enter Phone Number ?\n";
    getline(cin, Cl.Phone);

    cout << "Enter account balance ?\n";
    cin >> Cl.AccountBalance;

    return Cl;

}

string ConvertStructureToLine(Client Cl , string Seperator)
{
    string StrucureLine = "";
    StrucureLine += Cl.AccountNumber + Seperator;
    StrucureLine += Cl.PinCode + Seperator;
    StrucureLine += Cl.Name + Seperator;
    StrucureLine += Cl.Phone + Seperator;
    StrucureLine += to_string(Cl.AccountBalance);

    return StrucureLine.substr(0 , StrucureLine.length() - Seperator.length());

}



int main()
{
    Client Cl1;

   Cl1 = ReadNewClient();

   cout << ConvertStructureToLine(Cl1 , "#//#");


}

