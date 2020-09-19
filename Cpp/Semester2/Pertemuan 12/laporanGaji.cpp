#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;

/*
    ** PROGRAM LAPORAN KEUANGAN **

    Anggota Kelompok:
    - Heryanto (121190001)
    - Nathaneal Fransisco Suthio (121190003)
    - Clairence (121190004)
    - Ronaldi Chandra Karuna (121190006)
*/

int main(){
    string nama[100] = {"Chandra W", "Melissa", "Dedy Mulyawan", "Shinta Maulina", "Wawan Darmawan", "Irene", "Bagus M", "Dedy Warman", "Vena", "Hendra"};
    int nik[100]={90001, 90002, 90003, 90004, 90005, 90006, 90007, 90008, 90009, 90010};
    int direk, staff1, staff2, staff3,jabatan[100], tunj_anak[100], anak[100], hadir[100], golongan[100], total[100], tjabat=0, tanak=0, thadir=0, tgolongan=0, ttotal=0;
    staff1 = 500000;
    staff2 = 750000;
    staff3 = 1000000;
    direk = 2000000;
    for(int i=0;i<=9;i++){
        system("cls");
        cout<<"Karyawan ke-"<<i+1<<endl;
        cout<<"Nama: "<<nama[i]<<endl;
        cout<<"NIK: "<<nik[i]<<endl<<endl;
        cout<<"- Pilih jabatan:"<<endl;
        cout<<"  1. Staff 1"<<endl<<"  2. Staff 2"<<endl<<"  3. Staff 3"<<endl<<"  4. Direktur"<<endl;
        cout<<"  Jabatan: ";
        cin>>jabatan[i];
        switch(jabatan[i]){
            case 1:
                jabatan[i] = staff1;
                break;
            case 2:
                jabatan[i] = staff2;
                break;
            case 3:
                jabatan[i] = staff3;
                break;
            case 4:
                jabatan[i] = direk;
                break;
        }
        cout<<endl;
        cout<<"- Jumlah anak: ";cin>>anak[i];
        if (anak[i]>=3){
            tunj_anak[i] = 1000000;
        } else if(anak[i] == 1 || anak[i] == 2){
            tunj_anak[i] = 500000;
        } else tunj_anak[i] = 0;
        cout<<endl;
        
        cout<<"- Pilih Golongan :"<<endl<<"  1. C1 s.d C5"<<endl<<"  2. C6 s.d C9"<<endl<<"  3. D1 s.d D5"<<endl<<"  Pilih: "; cin>>golongan[i];
		switch(golongan[i]){
		case 1:
			golongan[i]=3000000;
			cout<<endl;
			cout<<"- Jumlah Hadir: "; cin>>hadir[i];
			hadir[i]=hadir[i]*50000;
			break;
			
		case 2:
			golongan[i]=3500000;
			cout<<endl;
			cout<<"- Jumlah Hadir: "; cin>>hadir[i];
			hadir[i]=hadir[i]*80000;
			break;	
		
		case 3:
			golongan[i]=4000000;
			cout<<endl;
			cout<<"- Jumlah Hadir: "; cin>>hadir[i];
			hadir[i]=hadir[i]*90000;
			break;
		
		}
		total[i]=jabatan[i]+tunj_anak[i]+hadir[i]+golongan[i];
		tjabat=tjabat+jabatan[i];
		tanak=tanak+tunj_anak[i];
		thadir=thadir+hadir[i];
		tgolongan=tgolongan+golongan[i];
		ttotal=ttotal+total[i];
		
	}
    system("cls");
    cout<<"====================================================================================================================================================="<<endl;
    cout<<"No.   NIK      Nama                Tunjangan Jabatan          Tunjangan Anak		Kehadiran		Golongan		Total"<<endl;
    cout<<"====================================================================================================================================================="<<endl;
    for(int i=0;i<=9;i++){
        cout<<setiosflags(ios::left)<<setw(6)<<i+1;
        cout<<setiosflags(ios::left)<<setw(9)<<nik[i];
        cout<<setiosflags(ios::left)<<setw(22)<<nama[i];
        cout<<"Rp."<<setiosflags(ios::left)<<setw(24)<<jabatan[i];
        cout<<"Rp."<<setiosflags(ios::left)<<setw(21)<<tunj_anak[i];
        cout<<"Rp."<<setiosflags(ios::left)<<setw(21)<<hadir[i];
        cout<<"Rp."<<setiosflags(ios::left)<<setw(19)<<golongan[i];
        cout<<"Rp."<<setiosflags(ios::left)<<setw(8)<<total[i];
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<setiosflags(ios::left)<<setw(15)<<" ";
    cout<<setiosflags(ios::left)<<setw(22)<<"Total";
    cout<<"Rp."<<setiosflags(ios::left)<<setw(24)<<tjabat;
    cout<<"Rp."<<setiosflags(ios::left)<<setw(21)<<tanak;
    cout<<"Rp."<<setiosflags(ios::left)<<setw(21)<<thadir;
    cout<<"Rp."<<setiosflags(ios::left)<<setw(19)<<tgolongan;
    cout<<"Rp."<<setiosflags(ios::left)<<setw(8)<<ttotal;
    cout<<endl;
    cout<<"====================================================================================================================================================="<<endl;
    getch();
}

