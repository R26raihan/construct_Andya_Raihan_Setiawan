#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"masukan angka dari 1 sampe 7 untuk menentukan hari=";
    cin>>day;
    
    switch (day)
    {
        case 1:
        puts("monday");
        break;

        case 2:
        cout<<"tuesday";
        break;

        case 3:
        cout<<"wednesday";
        break;

         case 4:
        cout<<"thursday";
        break;

         case 5:
        cout<<" friday ";
        break;

        case 6:
        cout<<"saturday";
        break;

        case 7:
        cout<<"sunday";
        break;

        default:
        cout<<"no day";
        break;
    }
}