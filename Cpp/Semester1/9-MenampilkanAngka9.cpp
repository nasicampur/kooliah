#include <iostream>
using namespace std;

// MENGELUARKAN ANGKA SEMBILAN DARI 1-100

int main(){
    int angka;
    for(angka=1;angka<=80;){
    if(angka==1){
        angka+=8;
        } else if(angka>=1 && angka<=80){
            angka+=10;
        }
        cout<<angka<<' ';
    }
    for(angka=90;angka<=99;angka++){
        cout<<angka<<' ';
    }
}
