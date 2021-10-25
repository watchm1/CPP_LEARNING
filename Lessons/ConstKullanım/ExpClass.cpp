#include<iostream>
#include<string>

using namespace std;
//SINIFLARIN CONST DEĞİŞKENLERİ

class Exp1{
    private:
        

    public:
        const int i;
        Exp1();
        int getI();
        


    
};

Exp1::Exp1() : i(2){cout<<endl<<"KURUCU ÇALIŞTI..."; cout <<endl <<"Değer: "<<getI();}
int Exp1::getI(){return i;}
