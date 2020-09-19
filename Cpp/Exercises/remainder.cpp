#include <iostream>
#include <cmath>
using namespace std;

// menampilkan angka genap tanpa modulus

int main(){
    int angka, i, y = 2, hasil;
    cout<<"Masukkan angka: ";cin>>angka;
    for(i=1;i<=angka;i++){
    hasil = remainder(i,y);
    if(hasil == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}