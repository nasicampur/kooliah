#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{

   string nama[10];
   int nik[10];
   string jabt;

   int jum, jmlh_anak[10], jmlh_hadir[10];
   string gol[10];

   int tun_jabatan[10], tun_anak[10], tun_hadir[10], tun_gol[10], total[10];
   system ("cls");

   cout<<"Masukan Jumlah Karyawan: ";

   cin>>jum;

   cout<<endl;
   system ("cls");
               
   for (int i=0;i<jum;i++){

        cout<<"KARYAWAN KE-"<<i+1<<endl;

                cout<<"NIK              : ";

                cin>>nik[i];

                cout<<"Nama              : ";

                cin>>nama[i];

                cout<<"Jabatan              : ";

                getline(cin,jabt);getline(cin,jabt);

                cout<<"Jumlah Anak          : ";

                cin>>jmlh_anak[i];

                cout<<"Jumlah Hadir  : ";

                cin>>jmlh_hadir[i];

                cout<<"Golongan  : ";

                cin>>gol[i];
            
                    if(jabt == "Direktur") {
                     tun_jabatan[i] = 2000000;
                    } else
                    if(jabt == "Staff 3"){
                        tun_jabatan[i] = 1000000;
					}
                     else
                     if(jabt == "Staff 2"){
                         tun_jabatan[i] = 750000;
					 }
                     else
                    if(jabt == "Staff 1"){
                        tun_jabatan[i] = 500000;
					}
                     else tun_jabatan[i] = 0;
    
                
                if (jmlh_anak[i] >= 3) { //Anak >= 3 
                    tun_anak[i] = 1000000;
                } else if (jmlh_anak[i] >= 1) { //Anak  1 sd 2 
                    tun_anak[i] = 500000;
                } else { //Anak 0 
                    tun_anak[i] = 0;
                }

               if (gol[i] == "C1" ||
			   		gol[i] == "C2" ||
				   	gol[i] == "C3" ||
					gol[i] == "C4" ||
					gol[i] == "C5") {
                    tun_gol[i] = 3000000;
                    tun_hadir[i] = jmlh_hadir[i] * 50000;   
                } else 
                   if (gol[i] == "C6" ||
				   gol[i] == "C7" ||
				   gol[i] == "C8" ||
				   gol[i] == "C9") {
                    tun_gol[i] = 3500000;
                    tun_hadir[i] = jmlh_hadir[i] * 80000;   
                } else 
                   if (gol[i] == "D1" ||
				   gol[i] == "D2" ||
				   gol[i] == "D3" ||
				   gol[i] == "D4" ||
				   gol[i] == "D5") {
                    tun_gol[i] = 4000000;
                    tun_hadir[i] = jmlh_hadir[i] * 90000;   
                } else 
                
                
                total[i] = tun_jabatan[i] + tun_anak[i] + tun_hadir[i] + tun_gol[i];

                cout<<"Laporan Gaji Bulan : Mei 2020\nPT XYZ\n"<<endl;


                for (int i=0; i<jum;i++){
                    system ("cls");
                    cout<<"KARYAWAN KE-"<< i+1 <<endl;
                    cout<<"\nNIK                  : "<<nik[i]<<endl;
                    cout<<"Nama                 : "<<nama[i]<<endl;
                    cout<<"Tunjangan Jabatan    : "<<tun_jabatan[i]<<endl;
                    cout<<"Tunjangan Anak       : "<<tun_anak[i]<<endl;
                    cout<<"Kehadiran            : "<<tun_hadir[i]<<endl;
                    cout<<"Golongan             : "<<tun_gol[i]<<endl;
                    cout<<"Total                : "<<total[i]<<endl;
                    cout<<"\n"<<endl;
                }             

return 0;

    }
}