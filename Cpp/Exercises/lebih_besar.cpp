#include <iostream>
#include <stdlib.h>
using namespace std;

// mengambil angka lebih besar dan gua ganteng
int gua_ganteng(int a, int b, int c, int d){
     int maks;
     if(a>b && a>c && a>d){
         maks = a;
     } else if(b>c && b>d && b>a){
         maks = b;
     } else if(c>d && c>a && c>b){
         maks = c;
     } else if(d>a && d>b && d>c){
         maks = d;
     }
     return maks;
}

int main() {
    system("cls");
    int a, b, c, d;
    cout<<"Masukkan angka pertama: ";cin>>a;
    cout<<"Masukkan angka kedua: ";cin>>b;
    cout<<"Masukkan angka ketiga: ";cin>>c;
    cout<<"Masukkan angka keempat: ";cin>>d;
    int hasil = gua_ganteng(a, b, c, d);
    cout<<"Terbesar: "<<hasil<<endl;
    return 0;
}
