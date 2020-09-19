#include <iostream>
#include <cmath>
using namespace std;

// membulatkan angka dengan array

int main(){
    double nilai[4] = {78.23,80.12,63.93,72.34};
    for(int i=0;i<=3;i++){
    int result = round(nilai[i]);
    cout<<"round("<<nilai[i]<<") = "<<result<<endl;
    }
}