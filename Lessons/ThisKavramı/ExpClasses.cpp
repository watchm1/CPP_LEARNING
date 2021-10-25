#include <iostream>
#include<string>


using namespace std;

class A{
    private:
    int y;
    public:
    int getY();
    void setY(int);

};

int A::getY(){return y;}
void A::setY(int y){this->y=y;}