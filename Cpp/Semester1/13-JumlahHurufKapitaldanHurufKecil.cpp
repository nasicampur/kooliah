#include <iostream>
using namespace std;

// PENGHITUNG JUMLAH HURUF KAPITAL DAN HURUF KECIL

int main(){
    char karakter, kalimat[100];
    int jml_karakter, huruf_kapital, huruf_kecil, indeks;
    cout<<"Masukkan kalimat: ";cin.getline(kalimat,100);
    cout<<endl;
    jml_karakter = huruf_kapital = huruf_kecil = 0;
    indeks = 0;
    while(kalimat[indeks]){
        karakter = kalimat [indeks];
        jml_karakter++;
        if (karakter >= 'A' && karakter <= 'Z') huruf_kapital++;
        if (karakter >= 'a' && karakter <= 'z') huruf_kecil++;
        indeks++;
    }
    system("cls");
    cout<<"Jumlah karakter: "<<jml_karakter<<endl;
    cout<<"Jumlah huruf kapital: "<<huruf_kapital<<endl;
    cout<<"Jumlah huruf kecil: "<<huruf_kecil<<endl;
    return 0;
}