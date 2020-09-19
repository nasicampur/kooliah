#include <iostream>
using namespace std;

// mengambil angka lebih kecil dan gua ganteng

int gua_ganteng(int a, int b, int c, int d){
     int min;
     if(a<b && a<c && a<d){
         min = a;
     } else if(b<c && b<d && b<a){
         min = b;
     } else if(c<d && c<a && c<b){
         min = c;
     } else if(d<a && d<b && d<c){
         min = d;
     }
     return min;
}

int main() {
    int a, b, c, d;
    cout<<"Masukkan angka pertama: ";cin>>a;
    cout<<"Masukkan angka kedua: ";cin>>b;
    cout<<"Masukkan angka ketiga: ";cin>>c;
    cout<<"Masukkan angka keempat: ";cin>>d;
    int hasil = gua_ganteng(a, b, c, d);
    cout<<"Terkecil: "<<hasil<<endl;
    return 0;
}