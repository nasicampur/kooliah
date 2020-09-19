#include <iostream>
using namespace std;

// MEMBUKTIKKAN ANGKA GANJIL ATAU GENAP

int main(){
    int angka,x;
    cout<<"Masukkan angka: ";cin>>angka;
    if(angka%2==0){
        cout<<"Bilangan ini merupakan bilangan genap";
    } else if(angka%2==1){
        cout<<"Bilangan ini merupakan bilangan ganjil";
    }
    return 0;
}