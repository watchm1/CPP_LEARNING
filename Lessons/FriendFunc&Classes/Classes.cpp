#include<iostream>

using namespace std;
class class2;

class class1{
    private:
        int x;

    
    public :
        int getX();
        void setX(int);
        
        //fonksiyonlar için arkadaş fucnctions
        friend void Foo(class1&);
        void setY(class2&);

};


class class2{
    private:
    int y; 

    public:
        
        int getY();
        void setY(int);
        friend class class1;
        
};
int class1::getX(){return x;}
void class1::setX(int _parameter){x=_parameter;}
void Foo(class1&a){a.x=0;}
void class1::setY(class2&_y){_y.y=100;}

int class2::getY(){return y;}
void class2::setY(int _parameter){y=_parameter;}

