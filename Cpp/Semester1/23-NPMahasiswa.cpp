#include <iostream>
#include <stdlib.h>
using namespace std;

// NPM GENERATOR

int main(){
	int fakultas, prodi;
	string tahun, idtahun,idfakultas,idprodi,nomor,npm;
	system("cls");
	cout<<"Masukkan tahun: ";cin>>tahun;
	idtahun=tahun.substr(2,3);
	system("cls");
	cout<<"Fakultas: \n 1.Hukum \n 2. Pendidikan \n 3. Ilmu Kesehatan \n 4. Teknik \n";
	cout<<"Masukkan fakultas anda (1-3): ";cin>>fakultas;
	system("cls");
	switch(fakultas){
	case 1:
		idfakultas="01";
		cout<<"Program Studi:\n 1. Ilmu Hukum(S-1)\n";
		break;
	case 2:
		idfakultas="02";
		cout<<"Program Studi:\n 1. Bimbingan Konseling(S-1) \n 2. Pendidikan Guru PAUD(S-1) \n 3.Pendidikan Guru SD(S-1)\n";
		break;
	case 3:
		idfakultas="03";
		cout<<"Program Studi:\n 1. Ilmu Keperawatan(S-1) \n 2. Keperawatan(D-3) \n 3. Farmasi(D-3) \n 4. Profesi Ners\n";
		break;
	case 4:
		idfakultas="04";
		cout<<"Program Studi:\n 1. Teknik Industri(S-1) \n 2. Teknik Informatika(S-1) \n ";
		break;
	default:
		cout<<"Hanya masukkan 1-3!";
		break;
	}
	cout<<"Masukkan pilihan anda: ";cin>>prodi;
	system("cls");
	switch(prodi){
	case 1:
		idprodi="01";
		break;
	case 2:
		idprodi="02";
		break;
	case 3:
		idprodi="03";
		break;
	case 4:
		idprodi="04";
		break;
	}

	cout<<"Masukkan nomor urut: ";cin>>nomor;
	npm = idtahun+'.'+idfakultas+'.'+idprodi+'.'+nomor;
	system("cls");
	cout<<"NPM anda: "<<npm<<endl;
	return 0;
}