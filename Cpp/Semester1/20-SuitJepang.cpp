#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

// GAME SUIT JEPANG

int main(){
	system("cls");
	int pilih;
	char lagi;
	a:
	cout<<"------Welcome to SUWIT JEPANG GAME------"<<endl;
	cout<<"[1]. BATU"<<endl<<"[2]. KERTAS"<<endl<<"[3]. GUNTING"<<endl;
	cout<<"Pilihan anda? > ";cin>>pilih;cout<<endl;
	system("cls");
	if(pilih==1){
		cout<<"Anda memilih BATU"<<endl;
		srand(time(NULL));
		int acak = rand() % 3;
		if(acak==0){
			cout<<"Musuh anda: BATU"<<endl<<endl;
			cout<<"DRAW"<<endl<<endl;
		} else if (acak==1){
			cout<<"Musuh anda: KERTAS"<<endl<<endl;
			cout<<"KALAH"<<endl<<endl;
		} else if(acak==2){
			cout<<"Musuh anda: GUNTING"<<endl<<endl;
			cout<<"MENANG"<<endl<<endl;
		}
	}

	if(pilih==2){
		cout<<"Anda memilih KERTAS"<<endl;
		srand(time(NULL));
		int acak = rand() % 3;
		if(acak==0){
			cout<<"Musuh anda: KERTAS"<<endl;
			cout<<"DRAW"<<endl;
		} else if (acak==1){
			cout<<"Musuh anda: GUNTING"<<endl;
			cout<<"KALAH"<<endl;
		} else if(acak==2){
			cout<<"Musuh anda: BATU"<<endl;
			cout<<"MENANG"<<endl;
		}
	}

	if(pilih==3){
		cout<<"Anda memilih GUNTING"<<endl;
		srand(time(NULL));
		int acak = rand() % 3;
		if(acak==0){
			cout<<"Musuh anda: GUNTING"<<endl;
			cout<<"DRAW"<<endl;
		} else if (acak==1){
			cout<<"Musuh anda: BATU"<<endl;
			cout<<"KALAH"<<endl;
		} else if(acak==2){
			cout<<"Musuh anda: KERTAS"<<endl;
			cout<<"MENANG"<<endl;
		}
	}

	if(pilih>3) {
		cout<<"Hanya bisa masukkan angka 1-3!"<<endl;
	}
	
	cout<<"Mau mulai lagi?(Y/N)";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
		system("cls");
		goto a;
	}
	return 0;
}
