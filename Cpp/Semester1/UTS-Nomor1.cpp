#include <iostream>
using namespace std;

// UTS SEMESTER 1 NO. 1 

int main(){
    int a,b,c;
    cout<<"Masukkan angka: ";cin>>a;
    for(b=1;b<=a;){
    	b+=2;
        for(c=2;c<=b;){
            cout<<c<<' ';
            c+=2;
        }
        cout<<endl;
    }
}