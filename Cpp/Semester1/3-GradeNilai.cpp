#include <iostream>
using namespace std;

// NILAI SISWA

int main(){
    int nilai; char predikat;
    cout<<"Masukkan nilai mahasiswa: ";cin>>nilai;
    if(nilai>=80){
        predikat = 'A';
    } else if(nilai>=70){
        predikat = 'B';
    } else if(nilai>=60){
        predikat = 'C';
    } else if(nilai>=50){
        predikat = 'D';
    } else if(nilai<50){
        predikat = 'E';
    }
    cout<<"Mahasiswa mendapatkan predikat: "<<predikat<<endl;
    return 0;
}
