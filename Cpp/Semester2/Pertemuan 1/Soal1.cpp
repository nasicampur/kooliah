#include <iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5}, hasil=0;
    for(int b=0;b<5;b++){
        cout<<a[b];
        if(a[b]<a[4]){
            cout<<'+';
            }
        hasil =+ a[b];
    }
    cout<<"="<<hasil;
}