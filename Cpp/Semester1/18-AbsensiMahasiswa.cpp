#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

// ABSENSI MAHASISWA

int main(){
    int a,b,pertemuan,siswa;
    char nama[20][20], absensi[20], tanda[20][20];
    system("cls");
    cout<<"Masukkan jumlah pertemuan: ";cin>>pertemuan;
    cout<<"Masukkan jumlah siswa: ";cin>>siswa;
    system("cls");
    for(a=1;a<=siswa;a++){
        cout<<"Nama: ";cin>>nama[a];
        for(b=1;b<=pertemuan;b++){
        cout<<"Pertemuan ke: "<<b<<endl;
        cout<<"Absensi (M/I/A/S): ";cin>>absensi[b];
            if(absensi[b]=='M'){
                tanda[a][b]='O';
                cout<<endl;
            } else if(absensi[b]=='I'){
                tanda[a][b]='X';
                cout<<endl;
            } else if(absensi[b]=='A'){
                tanda[a][b]='X';
                  cout<<endl;
            } else if(absensi[b]=='S'){
                tanda[a][b]='X';
                   cout<<endl;
            }
        }
    }

    system("cls");
    cout<<"========================================================================================================="<<endl;
    cout<<"No.   Nama                1     2     3     4     5     6     7     8     9    10    11    12    13    14 "<<endl;
    cout<<"========================================================================================================="<<endl;
    for(a=1;a<=siswa;a++){
        cout<<setiosflags(ios::left)<<setw(6)<<a;
        cout<<setiosflags(ios::left)<<setw(20)<<nama[a];
        for(b=1;b<=pertemuan;b++){
            cout<<setiosflags(ios::left)<<setw(6)<<tanda[a][b];
        }
        cout<<endl;
    }
    return 0;
}
