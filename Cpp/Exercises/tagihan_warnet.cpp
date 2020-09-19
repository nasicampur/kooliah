#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char nama[100];
    float potongan;
    int biaya, waktu, nomor, harga,total;
    system("cls");
    cout<<"---TAGIHAN WARNET---"<<endl<<endl;
    cout<<"Nama user: ";gets(nama);
    cout<<"Nomor komputer: ";cin>>nomor;
    cout<<"Lama pemakaian (jam): ";cin>>waktu;

    harga = waktu * 4000;

    if(waktu>5){
        potongan = harga * 0.10;
    } else potongan = 0;

    total = harga - potongan;

    system("cls");
    cout<<"---RINCIAN TAGIHAN WARNET---"<<endl<<endl;
    cout<<"Nomor komputer: "<<nomor<<endl;
    cout<<"Nama user: "<<nama<<endl;
    cout<<"Lama pemakaian (jam): "<<waktu<<endl;
    cout<<"Potongan: "<<potongan<<endl;
    cout<<"Total tagihan: "<<total<<endl;
}