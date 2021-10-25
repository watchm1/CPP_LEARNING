#include<iostream>

using namespace std;

class A{
    private :
    int x;
    public:
        int getX();
        void setX(int);
        friend ostream& operator<<(ostream&,A&);
    
};
int A::getX(){return x;}
void A::setX(int _parameter){x=_parameter;}

ostream& operator<<(ostream&o,A&a){
    o<<"A sınıfındaki x değeri : " <<a.x;
    return o;
}

