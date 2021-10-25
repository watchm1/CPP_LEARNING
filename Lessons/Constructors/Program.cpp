#include<iostream>
#include<string>
#include<locale.h>

#include "ExpClasses.cpp"

using namespace std;

int main()
{  
    setlocale(LC_ALL,"Turkish");
    ExpA* ptr=new ExpA();
    cout << "Değer x: "<< ptr->getX();
    cout << endl << ptr->getX() << endl <<ptr->getY();
    
    ptr->setX(6);
    ptr->setY(9);
    cout << endl << ptr->getX() << endl <<ptr->getY();
    


    return 0;
}