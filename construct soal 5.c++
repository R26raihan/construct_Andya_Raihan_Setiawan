#include <iostream>

using namespace std;

int main(){

    int pil;
    int luas,sisi;
    float i,r;
     const float phi= 3.14;
     string tes;

     do
     {
        
    cout<<"pil 1 hitung luas pesergi"<<endl;
    cout<<"pil 2 hitung luas kubus"<<endl;
    cout<<"pil 3 hitung luas lingkaran"<<endl;
    cin>>pil;

    

    switch (pil)
    {
    case 1:
        /* code */

    cout<<"masukan sisi : ";
    cin>>sisi;

    cout<<"masukan sisi : ";
    cin>>sisi;


    luas=sisi*sisi;
    
    cout<<"hasil luas pesergi : "<<luas;

        break;

    case 2:


    cout<<"masukan sisi 1 : "<<endl;
    cin>>sisi;
    cout<<"masukan sisi 2 : "<<endl;
    cin>>sisi;
    cout<<"masukan sisi 3 : "<<endl;
    cin>>sisi; 

    cout<< "hasil voulme kubus :"<<sisi*sisi*sisi;

    break;




   case 3:


     cout<<"masukan nilai r : ";
     cin>>r;

   i=r*r*phi;

   cout<<"hasil luas lingkarang : "<<i;
   break;

    }
    cout<<"lagi atau tidak?(y/t)";
    cin>>tes;
    
     }while(tes!="t");

    
    
}