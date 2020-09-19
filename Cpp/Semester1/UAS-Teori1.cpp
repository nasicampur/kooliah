#include <iostream>
using namespace std;

int main(){
    int umur[3] = {31,22,33};
    int hasil = 0;
    for(int i=0;i<3;i++){
        hasil = hasil + umur[i];
    }
    cout<<hasil;
}