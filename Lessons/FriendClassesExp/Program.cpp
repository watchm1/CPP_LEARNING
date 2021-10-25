#include<iostream>
#include<locale.h>
#include<string>
#include "ExampleClasses.cpp"


using namespace std;

int main(){
    A *ptr=new A;
    
    ptr->setX(4);
    cout<<"Değer : "<<ptr->getX();
    delete ptr;
    return 0; 
}