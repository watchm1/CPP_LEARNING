#include<iostream>
#include<string>

using namespace std;


class Nokta {
    public:

        void degerAta(int);

};



void Nokta::degerAta(int _parametre){
    for(int i= 0;i<_parametre/2;i++)
    {

        if(_parametre%i==0)
        {
            cout<< "+";
        }
        else
            cout<<"-";
    }
}