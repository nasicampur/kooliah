#include <iostream>
using namespace std;

// belajar switch case unch unch

int main(){
    int angka;
    string hari;
    cout<<"Masukkan angka (1-7) : ";cin>>angka;
    switch (angka){
    case 1:
        cout<<"Hari: Senin"<<endl;
        break;
    case 2:
        cout<<"Hari: Selasa"<<endl;
        break;
    case 3:
        cout<<"Hari: Rabu"<<endl;
        break;
    case 4:
        cout<<"Hari: Kamis"<<endl;
        break;
    case 5:
        cout<<"Hari: Jumat"<<endl;
        break;
    case 0:
        cout<<"Hari apaan tuh?"<<endl;
        break;
    case 6:
        cout<<"Hari: Sabtu"<<endl;
        break;
    case 7:
        cout<<"Hari: Minggu"<<endl;
        break;
    default:
        cout<<"Hari cuma ada 7 cuk!"<<endl;
        break;
    }
}