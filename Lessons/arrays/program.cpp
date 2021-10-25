#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    int arraysSize=0;
    int sayiDizi[2]={
        10,
        12

    };
    arraysSize=0;
    arraysSize=sizeof(sayiDizi)/sizeof(sayiDizi[0]);
    for(int i=0;i<arraysSize;i++){cout<<"Değer: "<<sayiDizi[i]<<endl;}
    int sayiDizi2[4]{
        10,
        20,
        30,
        50
    };
    arraysSize=0;
    arraysSize=sizeof(sayiDizi2);
    for(int i=0;i<arraysSize;i++){cout<<sayiDizi2[i]<<endl;}
    string information[3]={
        "Muhammed",
        "Ali",
        "Bekdaş"
    };
    arraysSize=0;
    arraysSize=sizeof(information);
    for(int i=0;i<arraysSize;i++){cout<<information[i]<<endl;}


    
    
    

    return 0;
}