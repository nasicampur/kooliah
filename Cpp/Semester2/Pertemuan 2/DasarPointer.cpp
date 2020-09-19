#include <iostream>
#include <string>
using namespace std;

/*
	Program: Pointer
	Nama: Ronaldi Chandra Karuna
	NIM: 121190006
*/

void main(){
	char *alamat_x;
	char X;
	X = 'a';
	alamat_x = &X;
	cout<<"X, yaitu "<<X<<", disimpan pada alamat "<<&alamat_x<<" atau "<<&alamat_x<<" dalam hexa"<<endl;
}