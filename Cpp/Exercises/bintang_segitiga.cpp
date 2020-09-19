#include <iostream>
using namespace std;

int main(){
    int tinggi,x,y;
    cout<<"Masukkan tinggi segitiga: ";cin>>tinggi;
    for(x=1;x<=tinggi;x++){
        for(y=1;y<=x;y++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}