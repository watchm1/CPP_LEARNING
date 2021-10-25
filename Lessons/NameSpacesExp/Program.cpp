#include<iostream>
#include <string>
#include<locale.h>

using namespace std;

namespace exp1{
    int x=5;
    int y=2;
    int topla(int _parameter1,int _parameter2)
    {
        return _parameter1+_parameter2;
    }
    
}
int main()
{   
    cout <<"Değer: "<< exp1::topla(exp1::x,exp1::y);
     
    return 0;  
}