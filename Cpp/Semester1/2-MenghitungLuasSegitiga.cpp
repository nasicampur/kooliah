#include <iostream>
#include <stdlib.h>
using namespace std;

// MENGHITUNG LUAS SEGITIGA

int main(){
    int alas,tinggi,hasil;
    cout<<"Masukkan alas: ";cin>>alas;
    cout<<"Masukkan tinggi: ";cin>>tinggi;
    hasil = (alas*tinggi)/2;
    system("cls");
    cout<<"Hasilnya: "<<hasil;
    return 0;
}