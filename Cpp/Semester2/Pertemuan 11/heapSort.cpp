#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std; 
  
/*
    ** PROGRAM HEAP SORT **

    Anggota Kelompok:
    - Heryanto (121190001)
    - Nathaneal Fransisco Suthio (121190003)
    - Clairence (121190004)
    - Ronaldi Chandra Karuna (121190006)
*/


void heapify(int isi[], int n, int i) { 
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
  
    if (l < n && isi[l] > isi[largest]) 
        largest = l; 
  
    if (r < n && isi[r] > isi[largest]) 
        largest = r; 
  
    if (largest != i) { 
        swap(isi[i], isi[largest]); 
        heapify(isi, n, largest); 
    } 
} 
  
void heapSort(int isi[], int n) { 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(isi, n, i); 
  
    for (int i = n - 1; i >= 0; i--){ 
        swap(isi[0], isi[i]); 
        heapify(isi, i, 0); 
    } 
} 
  
void printArray(int isi[], int n) { 
    for (int i = 0; i < n; ++i) 
        cout << isi[i] << " "; 
        cout << "\n"; 
} 
  
int main() { 
    int isi[10];
    int angka;
    system("cls");
    cout<<"Masukkan jumlah angka yg diinput: ";
    cin>>angka;
    cout<<endl;
    // system("cls");
    for(int i = 0; i < angka; i++){
        cout<<"Masukkan angka ke-"<<i+1<<": ";
        cin>>isi[i];
    }
    cout<<endl;
    heapSort(isi, angka);
    // system("cls"); 
    cout << "Hasil array yg sudah di-sorting: "; 
    printArray(isi, angka);
    getch();
} 