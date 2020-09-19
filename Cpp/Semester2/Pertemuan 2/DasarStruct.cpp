#include <iostream>
#include <string>
using namespace std;

/*
	Program: Record/Struct
	Nama: Ronaldi Chandra Karuna
	NIM: 121190006
*/

struct mahasiswa{
	string NIM, nama;
	float ipk;
};


void main(){
	mahasiswa mhs;
	cout<<"NIM: ";cin>>mhs.NIM;
	cout<<"Nama: ";cin>>mhs.nama;
	cout<<"IPK: ";cin>>mhs.ipk;
	cout<<endl;
	
	cout<<"Data anda: \n";
	cout<<"NIM: "<<mhs.NIM<<endl;
	cout<<"Nama: "<<mhs.nama<<endl;
	cout<<"IPK: "<<mhs.ipk<<endl;
}