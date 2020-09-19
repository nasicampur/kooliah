#include <iostream>
#include <stdlib.h>
using namespace std;

struct data_diri{
    string nama, asal;
    char kelamin;        
};

data_diri ciptaan_tuhan[88];

int main(){
    int jumlah;
    cout<<"Ada berapa jumlah orang? ";cin>>jumlah;
    system("cls");
    for(int i=0;i<jumlah;i++){
        cout<<"Nama             : ";cin>>ciptaan_tuhan[i].nama;
        cout<<"Jenis kelamin    : ";cin>>ciptaan_tuhan[i].kelamin;
        cout<<"Tempat lahir     : ";cin>>ciptaan_tuhan[i].asal;
        cout<<endl;
    }
    system("cls");
    for(int i=0;i<jumlah;i++){
        cout<<"============================================="<<endl;
        cout<<"Nama             : "<<ciptaan_tuhan[i].nama;cout<<endl;
        cout<<"Jenis kelamin    : "<<ciptaan_tuhan[i].kelamin;cout<<endl;
        cout<<"Tempat lahir     : "<<ciptaan_tuhan[i].asal;cout<<endl;
    }
    cout<<"============================================="<<endl;
}