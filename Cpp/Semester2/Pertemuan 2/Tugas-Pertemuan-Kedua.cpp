#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
using namespace std;

struct list{
    string kode[99], buku[99], pengarang[99];
    int jumlah;
};

int main(){
    list daftar;
    cout<<"Masukkan jumlah buku yg ingin diinput: ";cin>>daftar.jumlah;
    system("cls");
    for(int a=0;a<daftar.jumlah;a++){
        cout<<"\n";
        cout<<"Buku ke-"<<a+1<<endl;
        cout<<"Masukkan kode buku: ";cin>>daftar.kode[a];
        cin.get();
        cout<<"Masukkan nama buku: ";getline(cin, daftar.buku[a]);
        cout<<"Masukkan nama pengarang buku: ";getline(cin, daftar.pengarang[a]);
    }

    system("cls");
    cout<<"==============================================================="<<endl;
    cout<<"| Kode | Judul Buku                      | Pengarang          |"<<endl;
    cout<<"==============================================================="<<endl;
    for(int a=0;a<daftar.jumlah;a++){
        cout<<setiosflags(ios::left)<<setw(2)<<'|';
        cout<<setiosflags(ios::left)<<setw(5)<<daftar.kode[a];
        cout<<setiosflags(ios::left)<<setw(2)<<'|';
        cout<<setiosflags(ios::left)<<setw(32)<<daftar.buku[a];
        cout<<setiosflags(ios::left)<<setw(2)<<'|';
        cout<<setiosflags(ios::left)<<setw(19)<<daftar.pengarang[a]<<'|';
        cout<<"\n---------------------------------------------------------------\n";
    }
}