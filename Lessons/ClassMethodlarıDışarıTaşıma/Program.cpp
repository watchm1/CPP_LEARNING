#include<iostream>
#include<locale.h>
#include "ExpClass.cpp"

using namespace std;


int main()
{
    Nokta *ptr=new Nokta;


    ptr->degerAta(6);
    delete ptr;
    
    return 0;
}