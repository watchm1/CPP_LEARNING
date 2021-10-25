#include<iostream>

using namespace std;


class Class1{
    private:

//class yapılarında public ve private değişkenleri bu şekilde yazılıp tanımlarız

    public:
        int x;
        int y;

        void DegerAdd(int _x,int _y)
        {
            x=_x;
            y=_y;
        }
        void writeOnConsole()
        {
            cout << "Değer 1 : " << x << endl << "Değer 2: "<< y;
            
        }
        bool LocationIsOnZero()
        {
            if(x==0 && y==0)
            {
                return true;
            }
            else{
                return false;
            }
        }
};