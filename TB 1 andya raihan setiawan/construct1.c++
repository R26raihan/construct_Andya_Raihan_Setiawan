#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int main(){


    int bil1,bil2,pil;
    float hasil;
    string operasi;

    cout<<"pilihlah operator\n";
    cout<<"======================================================\n";
    cout<<"1.perjumlahan\n";
    cout<<"2.pengurangan\n";
    cout<<"3.perkalian\n";
    cout<<"4.pembagian\n";
    cout<<"=======================================================\n";

    cout<<"masukan pilihan =";
    cin>>pil;

    cout<<"masukan bilangan pertama= ";
    cin>>bil1;

    cout<<"masukan bilangan kedua = ";
    cin>>bil2;

    switch (pil)
    {
    case 1 /* constant-expression */:

        /* code */
        hasil=bil1 + bil2;
        operasi='+';
        break;

    case 2:

        hasil= bil1 - bil2;
        operasi= '-';
        break;

    case 3:

        hasil= bil1 * bil2;
        operasi='*';
        break;

    case 4:

        hasil=bil1 / bil2;
        operasi='/';
        break;

    default:
    cout<<"operasi salah";
        break;


    }

      cout<<"   "<<bil1<<operasi<<bil2<<"="<<hasil;
      getch();




}