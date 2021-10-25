#include<iostream>
#include "locale.h"
#include<string>


using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    
    int kosul;
    cout << "Seçim Yap : ";
    cin>>kosul;
    
    switch(kosul)
    {
        case 1:
        {
            cout <<"Merhaba arkadaşlar";
            break;
        }
            
        case 2:
        {
            cout <<"CPP DERSLERİNE HOŞGELDİNİZ.";
            break;
        }
            
        case 3:
        {
            cout<<"SİKTİR ET BUNU C# GEÇ";
            break;  
        }
            
    }

    return 0;
}