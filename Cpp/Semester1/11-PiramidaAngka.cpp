#include <iostream>
#include <stdlib.h>
using namespace std;

// SEGITIGA SAMAKAKI

int main(){
    int n,x,y,z;
    cout<<"Masukkan angka: ";cin>>n;
    system("cls");
    for(x=1;x<=n;x++){
        for(z=n;z>=x;z--)cout<<' ';
        for(z=x;z<2*x;z++){
            y=z%10;
            cout<<y;
        }
        for(z=2*(x-1);z>=x;z--){
            y=z%10;
            cout<<y;
        } cout<<endl;
    }
    return 0;
}