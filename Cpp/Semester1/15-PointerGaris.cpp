#include <iostream>
using namespace std;

void garis(char x){
    for(int i=1;i<=10;i++){
        cout<<x;
    } cout<<endl;
}

int main(){
    char a='-';
    garis(a);
    return 0;
}