#include <iostream>
using namespace std;

main(){
    int nilai; string nama;
    cout<<"Masukkan nama: ";getline(cin, nama);
    cout<<"Masukkan nilai: ";cin>>nilai;
    if(nilai>=85)cout<<"Anda mendapatkan grade A";
    else if(nilai>=74)cout<<"Anda mendapatkan grade B";
    else if(nilai>=50)cout<<"Anda mendapatkan grade C";
    else if(nilai<50)cout<<"Anda mendapatkan grade D";
}