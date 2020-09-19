#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

// GAME SUIT JAWA

int main(){
	system("cls");
	int pilih;
	char lagi;
	a:
	cout<<"=========================="<<endl;
	cout<<"Welcome to SUWIT JAWA GAME"<<endl;
	cout<<"=========================="<<endl;
	cout<<"1. GAJAH"<<endl<<"2. SEMUT"<<endl<<"3. ORANG"<<endl<<endl;
	cout<<"Pilihan anda? > ";cin>>pilih;cout<<endl;
	system("cls");
	if(pilih==1){
		cout<<"Anda memilih GAJAH"<<endl;
		srand(time(NULL));
		int com = rand() % 3;
		if(com==0){
			cout<<"Musuh anda: GAJAH"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======SERI!======"<<endl;
			cout<<"================="<<endl;
		} else if (com==1){
			cout<<"Musuh anda: ORANG"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"=====MENANG!====="<<endl;
			cout<<"================="<<endl;
		} else{
			cout<<"Musuh anda: SEMUT"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======KALAH!====="<<endl;
			cout<<"================="<<endl;
		}
	}

	if(pilih==2){
		cout<<endl<<"Anda memilih SEMUT"<<endl;
		srand(time(NULL));
		int com = rand() % 3;
		if(com==0){
			cout<<"Musuh anda: SEMUT"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======SERI!======"<<endl;
			cout<<"================="<<endl;
		} else if (com==1){
			cout<<"Musuh anda: ORANG"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"=====MENANG!====="<<endl;
			cout<<"================="<<endl;
		} else{
			cout<<"Musuh anda: GAJAH"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======KALAH!====="<<endl;
			cout<<"================="<<endl;
		}
	}

	if(pilih==3){
		cout<<endl<<"Anda memilih ORANG"<<endl;
		srand(time(NULL));
		int com = rand() % 10;
		if(com==0){
			cout<<"Musuh anda: ORANG"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======SERI!======"<<endl;
			cout<<"================="<<endl;
		} else if (com==1){
			cout<<"Musuh anda: SEMUT"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"=====MENANG!====="<<endl;
			cout<<"================="<<endl;
		} else {
			cout<<"Musuh anda: GAJAH"<<endl<<endl;
			cout<<"================="<<endl;
			cout<<"======KALAH!====="<<endl;
			cout<<"================="<<endl;
		}
	}

	if(pilih>3) {
		cout<<"Hanya bisa masukkan angka 1-3!"<<endl;
		goto a;
	}
	
	cout<<endl;

	cout<<"Mau mulai lagi? (Y/N)";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
		system("cls");
		goto a;
	} else {
		exit;
	}
	return 0;
}