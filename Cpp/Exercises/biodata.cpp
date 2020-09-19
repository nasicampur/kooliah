#include <iostream>
using namespace std;

int main(){
    char nama[100], NIM[9];
    int umur;
    cout<<"Nama-mu siapa? ";gets(nama);
    cout<<"NIM? ";cin.get();cin.get(NIM,9);
    cout<<"Umur? ";cin>>umur;
    cout<<endl;
    cout<<"Nama: "<<nama<<endl;
    cout<<"Umur: "<<umur<<endl;
    cout<<"NIM: "<<NIM<<endl;
}