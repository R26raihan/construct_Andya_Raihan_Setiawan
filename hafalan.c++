#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
    string nama,pass="";
    char karakter;
    cout<<"untuk dapat mengakses web ini anda memerlukan pass:"<<endl;
    cin>>karakter;
    cout<<"silahkan masukan pass anda:"<<endl;
    karakter=_getch();
    while(karakter !=13){
        pass.push_back(karakter);
        cout<<"*";
        karakter=_getch();
    }
    if(pass=="raihan"){
        cout<<"akses di terima"<<endl;;
    }else{
        cout<<"akses ditolak"<<endl;
    }
}