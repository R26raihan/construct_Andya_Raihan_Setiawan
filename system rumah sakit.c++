#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void rawatinap(){
    char name[50],jenskel[10];

    string ruangan,an,NamaDr;

    char alamat[50],diagnosa[10];

    int dokter,kamar,lama,rm;

    long int Hrgkamar,JasaDr,Totalobat,Tindakan;

    cout<<"nama         =";

    cin>>name;

    cout<<endl;


    cout<<"No.Rekam medis           =";

    cin>>rm;

    cout<<"endl";

    cout<<"alamat                       =";

    cin>>alamat;

    cout<<endl;

    cout<<"jenis kelamin            =";

    cin>>jenskel;

    cout<<endl;

    cout<<"lama menginap           =";

    cin>>jenskel;

    cout<<endl;

    
    cout<<"diagnosa           =";

    cin>>jenskel;

    cout<<endl;

    cout<<"pilih jenis kamar:\n";\

    cout<<"1.kelas I\n";

    cout<<"2.kelas II\n";

    cout<<"3.kelas III\n";

    cout<<"4. kelas vip\n";

    cout<<"5. kelas vvip\n";

    cout<<"pilihan anda [1/2/3/4/5]=";

    cin>>kamar;

    switch (kamar)
    {
    case 1/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         Hrgkamar= 1000000 ; /* code */
        break;

        case 2/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         Hrgkamar= 1000000 ; /* code */
        break;

        case 3/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         Hrgkamar= 1000000 ; /* code */
        break;

        case 4/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         Hrgkamar= 1000000 ; /* code */
        break;

        case 5/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         Hrgkamar= 1000000 ; /* code */
        break;
    
    default:
        cout<<"tidak tersedia";
        break;
    }
            system("cls");

            cout<<"pilih dokter:\n";\

    cout<<"1.dokter anak\n";

    cout<<"2.dokter umum\n";

    cout<<"3.dokter penyakit dalam\n";

    cout<<"4.dokter bedah\n";

    cout<<"5.dokter beda umum\n";

    cout<<"pilihan anda [1/2/3/4/5]=";

    cin>>dokter;

    switch (dokter)
    {
    case 1/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         JasaDr= 1000000 ; /* code */
        break;

        case 2/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         JasaDr= 1000000 ; /* code */
        break;

        case 3/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         JasaDr= 1000000 ; /* code */
        break;

        case 4/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         JasaDr= 1000000 ; /* code */
        break;

        case 5/* constant-expression */:
        cout<<"---"<<ruangan<<"---"; 
         JasaDr= 1000000 ; /* code */
        break;
    
    default:
        cout<<"tidak tersedia";
        break;
    }
            system("cls");

            cout<<endl;

            cout<<"nama             ="<<name<<endl;

            cout<<"no rekam medis            ="<<rm<<endl;

            cout<<"jenis kelamin             ="<<jenskel<<endl;

            cout<<"jenis kamar             ="<<ruangan<<endl;

            cout<<"dokter tujuan             ="<<NamaDr<<endl;


cout<<"=============================================================="<<endl;

cout<<                      "total yang harus di bayarkan"                      <<endl;

cout<<"nama pasien          ="<<name<<endl;

cout<<"no rekam medis           ="<<rm<<endl;

cout<<"atas nama                =";

cin>>an;


cout<<"dokter     ="<<NamaDr<<endl;

cout<<"jasa dokter      =Rp."<<JasaDr<<endl;

cout<<"kamar inap           ="<<ruangan<<"Rp."<<Hrgkamar<<endl;

cout<<"totsl obst           =RP.";
cin>>Totalobat;


cout<<"tindakan    = Rp.";
cin>>Tindakan;

long int Totalbiaya


= JasaDr + Hrgkamar + Totalobat + Tindakan;

cout<<"total biaya      =."<<Totalbiaya;

}