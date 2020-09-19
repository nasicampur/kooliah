#include <iostream>
using namespace std;

// MENGELUARKAN ANGKA FAKTOR DARI 6

int main(){
    int x,angka;
    cout<<"Masukkan angka: ";cin>>angka;
    for(x=1;x<=angka;x++){
        if(x%6==0){
            cout<<x<<' ';
        }
    }
}