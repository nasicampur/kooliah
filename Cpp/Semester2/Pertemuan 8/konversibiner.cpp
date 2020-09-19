#include <iostream>
using namespace std;

int main(){
    int bilangan, sisa, sisa_temp, hasil_temp, hasil;
    cin>>bilangan;
        do{
            sisa = sisa_temp;
            sisa_temp = hasil % 2;
            hasil_temp = hasil / 2;
            hasil = hasil_temp;
            cout<<sisa_temp;
    } while(hasil_temp !=0);
    sisa = bilangan % 2;
    sisa_temp = sisa;
    hasil = bilangan / 2;
    hasil_temp = hasil;
    cout<<sisa; 
}