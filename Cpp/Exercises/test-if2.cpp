#include <iostream>
using namespace std;

int main(){
    string nama,semester,ipk2; float ipk;
    cout<<"Masukkan nama anda: ";cin>>nama;
    cout<<"Masukkan semester anda: ";cin>>semester;
    cout<<"Masukkan IPK anda: ";cin>>ipk;
    if(ipk>=3) ipk2 = "Selamat anda memperoleh nilai terbaik!";
    else if(ipk>=2) ipk2 = "Selamat anda memperoleh nilai cukup!";
    else if (ipk>=1) ipk2 = "KOK GOBLOG?";
    cout<<"==========================="<<endl;
    cout<<"Nama: "<<nama<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"IPK: "<<ipk<<endl;
    cout<<ipk2;
    return 0;
}