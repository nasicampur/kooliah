#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
 
// KASIR MINIMARKET

int main(){
    int belanja[20], jumlah[20], harga[20], i, beli, produk;
    string barang;
    system("cls");
    cout<<"Berapa barang yang mau dibeli? ";cin>>beli;

    for(i=1;i<=beli;i++){
    cout<<"\n";
    cout<<"Nama Barang      : ";getline(cin,barang);getline(cin,barang);
    cout<<"Harga Barang     : Rp ";cin>>harga[i];
    cout<<"Jumlah Barang    : ";cin>>jumlah[i];
    belanja[i] = jumlah[i] * harga[i];
    cout<<"Jumlah Belanja   : "<<belanja[i];
    cout<<"\n\n";
    }

    int total = 0;
    for(int i=1;i<=beli;i++){
        total = total + belanja[i];
    }
    cout<<"Sub total: "<<total<<endl;
    return 0;
}