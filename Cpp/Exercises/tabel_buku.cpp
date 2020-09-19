#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
	int main(){	
	struct buku{
	char kode[99][99], judul[99][99], namapengarang[99][99];
    };
    int n;
	buku tabel;
	cout<<"masukkan banyak data yang ingin diinput:";
	cin>>n;
	cout<<endl<<endl;
	for(int i=0;i<n;i++){
	cout<<"masukkan kode buku:";
	cin>>tabel.kode[i];
	cin.get();
	cout<<"masukkan judul buku:";
	cin.getline(tabel.judul[i], 99);
	cout<<"masukkan nama pengarang:";
	cin.getline(tabel.namapengarang[i], 99);
}

	system("cls");
	cout<<"===============================================================================================\n";
	cout<<"| kode | judul buku                                               | pengarang                 |\n";
	cout<<"===============================================================================================\n";
	for(int j=0; j<n;j++){
		cout<<setiosflags(ios::left)<<setw(2)<<' ';
		cout<<setiosflags(ios::left)<<setw(7)<<tabel.kode[j];
		cout<<setiosflags(ios::left)<<setw(59)<<tabel.judul[j];
		cout<<tabel.namapengarang[j];
        cout<<"\n-----------------------------------------------------------------------------------------------\n";
	}
}