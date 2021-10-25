#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

class CustomerEntity
{
    
    private: 
        
        string _parameter;
        string _Name;
        string _LastName;
        int _ID;
        string _TCKNO;
        string _Department;
    public:
        CustomerEntity(string parameter)
        {
            _parameter=parameter;

        }
        //FirstName PROP
        string getName()
        {
            return _Name;    
        }
        void setName(string value)
        {
            _Name=value;
        }
        //LastName PROP
        string getLastName()
        {
            return _LastName;
        }
        void setLastName(string value)
        {
            _LastName=value;
        }
        //ID PROP
        int getID()
        {
            return _ID;
        }
        void setID(int value)
        {
            _ID=value;
        }

        //TCKNO PROP
        string getTCKNO()
        {
            return _TCKNO;
        }
        void setTCKNO(string value)
        {
            git:
            int count=value.length();
            if(count==11)
            {
                _TCKNO=value;
            }
            else
            {
                cout<<"Üzgünüz. TCKNO 11 HANELİ OLMALIDIR.";
                cout <<endl<<"Tekrar Giriş Yapınız: ";
                cin>>value;
                goto git;

            }            
        }
        //Department prop
        string getDEP()
        {
            return _Department;
        }
        void setDEP(string value)
        {
            if(value=="Bilgi islem")
            {

            }
            else if(value=="Muhasebe")
            {

            }
            else if(value =="Developer")
            {

            }
        }
        ////////////////////////////////BUSSİNESS FUNC
        void BaseController()
        {
            if(_parameter=="add")
            {
                Add();
            }

        }

        private:

        void Add()
        {

            
            string information="NAME: "+_Name+" LastName: "+_LastName+
            " TCKNO: "+_TCKNO+" Department: "+_Department;
            cout <<information<<endl<< "ADDED!";
        }

   

        

};

