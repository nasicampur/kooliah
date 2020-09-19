#include <iostream>
using namespace std;

int main(){
    int tinggi,x,y;
    cout<<"Masukkan tinggi: ";cin>>tinggi;
    for(x=1;x<=tinggi;x++){
        for(y=x;y<=tinggi;y++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}