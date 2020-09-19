#include <iostream>
using namespace std;

int main(){
    int n;char pilihan;
    do{
        cout<<"Masukkan angka: ";cin>>n;
        cout<<"Anda memasukkan angka "<<n<<endl;
        cout<<"Ingin melanjutkan? (y/n) ";cin>>pilihan;
    } while (pilihan=='y');
    return 0;
}