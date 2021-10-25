#include <iostream>

using namespace std;

class ExpA{
    private:
        int x;
        int y;
    public:
        ExpA(){
            this->x=1;
            this->y=5;
        }
        
        
        int getX();
        void setX(int);

        int getY();
        void setY(int);
};




int ExpA::getX(){return x;}
void ExpA::setX(int _parameter){this->x=_parameter;}

int ExpA::getY(){return y;}
void ExpA::setY(int _parameter){this->y=_parameter;}