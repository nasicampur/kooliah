#include <iostream>
using namespace std;

main(){
    int uang,total;
    float bunga,bunga2,total_bunga;
    cout<<"Masukkan jumlah uang yang akan ditabung: ";cin>>uang;
    cout<<"Masukkan bunga: ";cin>>bunga;
    int i=1; 
    while(i<=12){
        cout<<"Tabungan bulan ke-"<<i;
        bunga2=bunga*0.01;
        total_bunga=uang*bunga2;
        uang=uang+total_bunga; i++;
        cout<<"\t"<<"Saldo: Rp "<<uang<<endl;
    }
}