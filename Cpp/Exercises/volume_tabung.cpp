#include <iostream>
using namespace std;

int main(){
    float volume,r,t;const float pi = 3.14;
    cout<<"============="<<"\n";
    cout<<"VOLUME TABUNG"<<"\n";
    cout<<"============="<<"\n";
    cout<<"Masukkan radius: ";
    cin>>r;
    cout<<"Masukkan tinggi: ";
    cin>>t;
    volume = pi*r*r*t;
    cout<<"Volumenya adalah: "<<volume<<endl;
    return 0;
}