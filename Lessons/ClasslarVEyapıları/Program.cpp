#include <iostream>
#include<locale.h>
#include "ExampleClass.cpp"

using namespace std;

int main()
{

    //Class1 exp1;
    Class1* exp2=new Class1;

    exp2->DegerAdd(1,2);
    exp2->writeOnConsole();

    if(exp2->LocationIsOnZero())
    {
        cout<<endl<<"1";
    }
    else{
        cout <<endl<<"0";
    }

    delete exp2;
    // exp1.DegerAdd(2,5);
    
    // exp1.writeOnConsole();
    // if(exp1.LocationIsOnZero()){
    //     cout <<endl<< "1";
    // }
    // else{
    //     cout <<endl<<"0";
    // }


    
    return 0;

}