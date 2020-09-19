#include <iostream>
#include <string.h>
using namespace std;

// PEMBALIK KATA MAUPUN KALIMAT

int main(){
    int a,b;
    char kalimat[50];
    cout<<"Masukkan kalimat: ";cin.getline(kalimat, 50);
    a = strlen(kalimat);
    for(b=a-1;b>=0;b--){
        cout<<kalimat[b];
    }
    cout<<endl;
}