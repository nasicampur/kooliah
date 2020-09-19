#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
using namespace std;

// MEREKAM DATA MAHASISWA BESERTA NILAI

int main(){
	int a,data, uts[5], uas[5], rata[5];
	char nama[5][20],nim[5][8], kelas[5][6], grade[5], ket[5][6];
	system("cls");
	cout<<"Jumlah data: ";cin>>data;
	for(a=1;a<=data;a++){
		cout<<"Data ke: "<<a<<endl;
		cout<<"Masukkan nama: ";cin>>(nama[a]);
		cout<<"Masukkan semester: ";cin>>kelas[a];
		cout<<"Masukkan NIM: ";cin>>nim[a];
		cout<<"Masukkan nilai UTS: ";cin>>uts[a];
		cout<<"Masukkan nilai UAS: ";cin>>uas[a];
		rata[a] = (uts[a] + uas[a])/2;

		if(rata[a]>=80){
			grade[a]='A';
			strcpy(ket[a], "LULUS");
		} else if(rata[a]>=70){
			grade[a]='B';
			strcpy(ket[a], "LULUS");
		} else if(rata[a]>=60){
			grade[a]='C';
			strcpy(ket[a], "LULUS");
		} else if(rata[a]>=50){
			grade[a]='D';
			strcpy(ket[a], "GAGAL");
		} else {
			grade[a]='E';
			strcpy(ket[a], "GAGAL");
			} cout<<endl;

	}

    system("cls");
	cout<<"==============================================================================="<<endl;
	cout<<"No  NIM          Nama         Kelas        UAS   UTS   Rata  Grade   Keterangan"<<endl;
	cout<<"==============================================================================="<<endl;
	for(a=1;a<=data;a++){
		cout<<setiosflags(ios::left)<<setw(4)<<a;
		cout<<setiosflags(ios::left)<<setw(13)<<nim[a];
		cout<<setiosflags(ios::left)<<setw(15)<<nama[a];
		cout<<setiosflags(ios::left)<<setw(12)<<kelas[a];
		cout<<setiosflags(ios::left)<<setw(6)<<uts[a];
		cout<<setiosflags(ios::left)<<setw(6)<<uas[a];
		cout<<setiosflags(ios::left)<<setw(7)<<rata[a];
		cout<<setiosflags(ios::left)<<setw(8)<<grade[a];
		cout<<setiosflags(ios::left)<<setw(10)<<ket[a]<<endl;
	}
	return 0;
}
