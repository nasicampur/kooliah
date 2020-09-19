#include <iostream>
#include <string.h>
using namespace std;

// PEMBALIK KATA DENGAN STRREV

int main(){
    char kata[100];
    char* strrev(char*);
    cout<<"Masukkan kata: ";cin>>kata;
    strrev(kata);cout<<kata;
    return 0;
}