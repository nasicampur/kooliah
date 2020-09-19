#include <iostream>
#include <stdlib.h>
using namespace std;

// MENGELUARKAN ANGKA GENAP DAN GANJIL

int main(){
    int angka,x;
    cout<<"Masukkan angka: ";cin>>angka;
    system("cls");
    cout<<"--GENAP--"<<endl;
    for(x=1;x<=angka;x++){
        if(x%2==0){
            cout<<' '<<x;
            }
        }
        cout<<endl<<endl;

        cout<<"--GANJIL--"<<endl;
        for(x=1;x<=angka;x++){
            if(x%2==1){
                cout<<' '<<x;
            }
        }
        cout<<endl;
        return 0;
    }