#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    cout <<"Merhaba";

    
    int value =5;
    int *ptr=&value;

    


    cout << "Değer : "<< ptr;
    cout << endl <<"Değer: " << &value;
    cout << endl << "Değer: " << *ptr ;
    // yani ptr == &value ramde tutulan adresi yazmaktadır.

    // *ptr = adreste tutulan değeri yazmamızı sağlar.

    SomeObject *sobj =new SomeObject;
    
    

    return 0;

}
class SomeObject{
    private:
        string name;
    public:
        void add(string value)
        {
            cout << "Added";
        }

};