#include <iostream>
using namespace std;

int main(){
    char nama[100];
    int gaji, status, anak, tunjangan_nkh, tunjangan_anak;
    system("cls");
    cout<<"Nama Karyawan   : ";gets(nama);
    cout<<"Gaji Pokok      : Rp.";cin>>gaji;
    cout<<"     Status pernikahan\n (1. Menikah | 2. Belum)   [1/2]: ";
    cin>>status;

    switch(status){
        case 2:
        tunjangan_nkh = 0;
        break;
        case 1:
        tunjangan_nkh = gaji * 0.1;
        cout<<"Jumlah anak     : ";cin>>anak;
        break;
    }

    if(anak<2){
        tunjangan_anak = gaji * 0.05;
    } else if(anak>2){
        tunjangan_anak = gaji * 0.1;
    }

    int gaji_bersih = gaji + tunjangan_nkh + tunjangan_anak;

    cout<<endl;
    cout<<"       Input Data\n";
    cout<<"Nama Karyawan           : "<<nama;cout<<endl;
    cout<<"Gaji Pokok              : Rp."<<gaji;cout<<endl;
    cout<<"Tunjangan Nikah         : Rp."<<tunjangan_nkh;cout<<endl;
    cout<<"Tunjangan Anak          : Rp."<<tunjangan_anak;cout<<endl;
    cout<<"Gaji Bersih             : Rp."<<gaji_bersih;
}