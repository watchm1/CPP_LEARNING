#include <iostream>

using namespace std;


class Class1{
    private:
    int x;
    

    public:
    Class1(int);
    
    int getX();
    void setX(int);
    int* y;
    ~Class1();
};
Class1::Class1(int _x){
    this->x=_x;
    cout<<"Nesne Oluşturuldu..."; y=new int(5);}
Class1::~Class1(){
    cout <<endl <<"Yıkıcı Fonksiyon Çalıştı...";
    delete y;
}
int Class1::getX(){return x;}
void Class1::setX(int _parameter){this->x=_parameter;}