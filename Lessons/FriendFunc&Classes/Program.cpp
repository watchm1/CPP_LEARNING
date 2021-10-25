#include<iostream>
#include<locale.h>
#include"Classes.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    // class1 n;
    // n.setX(4);
    // cout<<"Değer : "<<n.getX();

    // Foo(n);

    // cout <<endl << "Değer : "<<n.getX();
    class1 a;
    class2 b;
    b.setY(50);
    cout << "Değer : "<<b.getY();
    a.setY(b);
    cout << endl<<"Değer : "<<b.getY() ; 

    return 0;
}