#include <iostream>
#include <stdlib.h>
using namespace std;

// SEGITIGA SIKU-SIKU

int main(){
    int angka,x,y;
    cout<<"Masukkan angka: ";cin>>angka;
    system("cls");
    for(x=1;x<=angka;x++){
        for(y=1;y<=x;y++){
            cout<<x*y<<' ';
        }
        cout<<endl;
    }
    return 0;
}