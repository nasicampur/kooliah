#include <iostream>
#include <time.h>
using namespace std;

int main(){
    int nim[10], acak;
    for(int i=0;i<9;i++){
        cout<<"Masukkan NIM mahasiswa ke-"<<i+1<<": "; cin>>nim[i];
    }
    srand(time(NULL));
	acak = rand() % 9;
    cout << "\nSelamat untuk NIM:"<<nim[acak]<<endl;
}