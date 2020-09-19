#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int data[99], jml;

void asc(){
    int temp, j;
    for(int i=0;i<jml;i++){
        temp = data[i];
        j = i - 1;
        while (data[j]>temp && j>=0){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

void desc(){
    int temp, j;
    for(int i=0;i<jml;i++){
        temp = data[i];
        j = i - 1;
        while (data[j] < temp && j>=0){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

void print(){
    cout<<"\nDiurutkan menjadi: ";
    for(int i=0; i<jml; i++){
        cout<<data[i]<<" ";
    }
}

int main(){
    int pilih;
    system("cls");
    cout<<"Masukkan jumlah data: ";cin>>jml;
    for(int i=0;i<jml;i++){
        cout<<"Masukkan angka ke-"<<i+1<<": ";
        cin>>data[i];
    }
    do{
    system("cls");
    cout<<"Pilihan: \n";
    cout<<"1. Ascending\n";
    cout<<"2. Descending\n";
    cout<<"Pilih: ";cin>>pilih;
    switch(pilih){
        case 1:
            asc();
            print();
            getch();
            break;
        case 2:
            desc();
            print();
            getch();
            break;
        } 
    } while(pilih<3);
}