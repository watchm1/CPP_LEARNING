#include<iostream>
#include<locale.h>


using namespace std;

int faktR(int parameter1);
int main()
{   
    setlocale(LC_ALL,"Turkish");
    int sayi;
    cout <<" Sayi Gir : ";
    cin>> sayi;

    cout <<endl <<"Sonuc : "<<faktR(sayi);




    return 0;
}

int faktR(int parameter1)
{
    if(parameter1==1)
    {
        return 1;
    }
    else
    {
        return parameter1*faktR(parameter1-1);
    }

    



    
}