#include<iostream>
#include<locale.h>
#include "ExampleClass.cpp"
#include<locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    CustomerEntity customerEntity=CustomerEntity("add");
    string name, lastname;
    int id;
    string tckno,department;

    cout << "Giriş Yapın : ";
    cout<< "Name-Lastname: ";
    cin>>name >> lastname;
    cout <<endl<<"ID: ";
    cin>>id;
    cout<<endl<<"TCKNO-DEPARTMENT";
    cin>>tckno>>department;

    customerEntity.setName(name);
    customerEntity.setLastName(lastname);
    customerEntity.setID(id);
    customerEntity.setTCKNO(tckno);
    customerEntity.setDEP(department);


    customerEntity.BaseController();
    return 0;
}