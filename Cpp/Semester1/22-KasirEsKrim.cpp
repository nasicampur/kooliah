#include <iostream>
#include <stdlib.h>
using namespace std;

// KASIR ES KRIM

int main(){
	char ulang;
	string es, nama;
	int total,harga,pilih,jumlah, hasil, diskon, uang, kembalian;
	mulai:
	system("cls");
	cout<<"===================="<<endl;
	cout<<"==  CM ICE CREAM  =="<<endl;
	cout<<"===================="<<endl<<endl;
	cout<<"Input nama pembeli: ";cin>>nama;cout<<endl;
	cout<<"Pilihan es krim yang tersedia: "<<endl;
	cout<<"1. Cokelat Stroberi"<<endl;
	cout<<"2. Cokelat Vanilla"<<endl;
	cout<<"3. Cokelat Cappucinno"<<endl;
	cout<<"Es krim yang dipilih: ";cin>>pilih;
	switch(pilih){
		case 1:
			harga=15000;
			es="Cokelat Stroberi";
			break;
		case 2:
			harga=20000;
			es="Cokelat Vanilla";
			break;
		case 3:
			harga=25000;
			es="Cokelat Cappucinno";
			break;
	}
	cout<<"\n";
	cout<<"Jumlah beli: ";cin>>jumlah;
	cout<<"\n";
	cout<<"Uang pembeli: Rp ";cin>>uang;
	total = jumlah * harga;
	if(total>50000){
		diskon = total * 0.1;
	} else if(total>40000 && total<50000){
		diskon = total * 0.05;
	} else if(total<40000){
		diskon = total * 0;
	}
	hasil = total - diskon;
	kembalian = uang - hasil;
	system("cls");
	cout<<"======================"<<endl;
	cout<<"   Struk Pembayaran  "<<endl;
	cout<<"======================"<<endl<<endl;
	cout<<"Nama pembeli: "<<nama<<endl;
	cout<<"Nama es krim: "<<es<<endl;
	cout<<"Harga: "<<harga<<endl;
	cout<<"Jumlah: "<<jumlah<<endl;
	cout<<"Total: "<<total<<endl;
	cout<<"Potongan: "<<diskon<<endl;
	cout<<"==========================="<<endl;
	cout<<"Total keseluruhan: "<<hasil<<endl;
	cout<<"Uang bayar: Rp "<<uang<<endl;
	cout<<"Uang kembali: Rp "<<kembalian<<endl;
	cout<<"Mau input lagi (Y/N)?";cin>>ulang;
	if(ulang=='Y' || ulang=='y'){
		system("cls");
		goto mulai;
	}
	return 0;
}
