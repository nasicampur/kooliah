#include <iostream>
using namespace std;

int main(){
    char ulang;
    float pi = 3.14,hasil,hasil2;
    int pilih,r;
    awal:
    system("clear");
    cout<<"=========\n";
    cout<<"  MENU\n";
    cout<<"=========\n";
    cout<<"1. Luas lingkaran\n";
    cout<<"2. Keliling lingkaran\n";
    cout<<"=========\n";
    cout<<"Pilih (1 or 2): ";cin>>pilih;
    switch(pilih){
        case 1:
        system("clear");
        cout<<"================\n";
        cout<<" Luas lingkaran\n";
        cout<<"================\n";
        cout<<"Masukkan jari-jari: ";cin>>r;
        hasil = pi*r*r;
        cout<<"Hasil: "<<hasil<<endl;
        break;
        case 2:
        system("clear");
        cout<<"====================\n";
        cout<<" Keliling lingkaran\n";
        cout<<"====================\n";
        cout<<"Masukkan jari-jari: ";cin>>r;
        hasil2 = 2*pi*r;
        cout<<"Hasil: "<<hasil2<<endl;
        break;
        default:
        cout<<"MASUKKAN 1 ATAU 2!\n";
        goto awal;
    }
        cout<<"Lagi? (Y/N)";cin>>ulang;
        if(ulang=='y' || ulang == 'Y'){
        goto awal;
        }
}