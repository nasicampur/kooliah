#include <iostream>
using namespace std;
 
/*
    Program: Menginput array
    Nama: Ronaldi Chandra Karuna
    NIM: 121190006
*/
 
int main(){
    int nilai[5];
    cout<<"Memasukkan nilai:\n";
    for(int a=0;a<5;a++){
        cout<<"Nilai Angka: ";cin>>nilai[a];
    }
    cout<<"\n";
    cout<<"Membaca Nilai: \n";
    for(int b=0;b<5;b++){
        cout<<"Nilai Angka: "<<nilai[b]<<endl;
    }
}