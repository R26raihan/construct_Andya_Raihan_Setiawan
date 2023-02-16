#include <iostream>
using namespace std;
int main(){
    int angka;
    cout<<"=======================SElAMAT DATANG DI TOKO KAMI====================="<<endl;
    cout<<"===============================LIST BARANG DAN HARGA============================="<<endl;
    cout<<"1.KOMPUTER"<<endl;
    cout<<"2.LAPTOP"<<endl;
    cout<<"3.MOUSE"<<endl;
    cout<<"4.KEYBOARD"<<endl;
    cout<<"5.PRINTER"<<endl;
    cout<<"6.HEADSET"<<endl;
    cout<<"7.RAM"<<endl;
    cout<<"8.HARDISK"<<endl;
    cout<<"9.VGA"<<endl;
    cout<<"10.CPU"<<endl;
    cout<<"=========SILAHKAN PILIH BARANG KEBUTUHAN ANDA SESUAI ANGKA DAN HARGA AKAN MUNCUL:================"<<endl;
    cin>>angka;
    if(angka==1){
        cout<<"harga komputer Rp 10.000.000,00- Rp30.000.000,00"<<endl;
    }else if(angka==2){
        cout<<"harga laptop Rp 10.000.000,00- Rp20.000.000,00"<<endl;
    }else if(angka==3){
        cout<<"harga mouse Rp 1.000.000,00- Rp2.000.000,00"<<endl;
    }else if(angka==4){
        cout<<"harga keyboard Rp 1.000.000,00- Rp3.000.000,00"<<endl;
    }else if(angka==5){
        cout<<"harga printer Rp 1.000.000,00- Rp10.000.000,00"<<endl;
    }else if(angka==6){
        cout<<"harga headset Rp 1.000.000,00- Rp2.000.000,00"<<endl;
    }else if(angka==7){
        cout<<"harga ram Rp 400.000.000- Rp1.000.000,00"<<endl;
    }else if(angka==8){
        cout<<"harga hardisk Rp 500.000- Rp1.000.000,00"<<endl;
    }else if(angka==9){
        cout<<"harga vga Rp 10.000.000,00- Rp20.000.000,00"<<endl;
    }else if(angka==10){
        cout<<"harga cpu Rp 10.000.000,00- Rp20.000.000,00"<<endl;
    }
    cout<<"==========progam pembayaran======="<<endl;
    unsigned int total_belanja;
    cout<<"masukan total belanja anda:"<<endl;
    cin>>total_belanja;
    if(total_belanja>100000){
        cout<<"======selamat anda mendapatkan bonus========="<<endl;
    }else if(total_belanja<100000){
        cout<<"silahkan belanja terus di toko kami agar anda mendapatkan hadiah"<<endl;
    }
    cout<<"terima kasih sudah belanja di toko kami"<<endl;
}
