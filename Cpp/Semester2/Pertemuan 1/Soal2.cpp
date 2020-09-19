#include <iostream>
using namespace std;

int main(){
    for(int b=1;b<=15;b+=2){
        cout<<b;
        if(b<=14){
            cout<<", ";
            }
    }
    cout<<".";
}