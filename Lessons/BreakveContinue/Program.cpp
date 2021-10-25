#include<iostream>
#include<locale.h>
#include<string>

using namespace std;

long faktoriyelHesapla(int sayi);
int main()
{
    setlocale(LC_ALL,"Turkish");
    //break; döngüyü tamamen kapatır.
    //continue istenilen i değerini atlar ve döngüye devam ettirir.

    for(int i=0;i<5;i++)
    {
        if(i==3)
        {
            cout <<"continue loop"<<endl;
            continue;
            
        }
        else
        {
            cout <<"I: "<<i<<endl;
        }
        
    }

    //////////////////////////////////////////
    //faktoriyel hesaplama
    cout<<"Sayı gir : ";
    int sayi;
    cin>> sayi;

    cout<<endl<<"Hesaplanan Faktoriyel degeri: ";
    cout <<faktoriyelHesapla(sayi);
    return 0;
    
}

long faktoriyelHesapla(int sayi )
{
    int fak=1;
    for(int i=sayi;i>1;i--)
    {
        fak*=i;
    }

    return fak;

}