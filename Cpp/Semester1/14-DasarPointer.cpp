#include <iostream>
using namespace std;

void hitung(int x, int y, int *p, int *q){
    *p = x + y;
    *q = x * y;
}

int main(){
    int x,y,p,q;
    cout<<"X: ";cin>>x;
    cout<<"Y: ";cin>>y;
    hitung(x,y,&p,&q);
    cout<<"X + Y = "<<p<<endl;
    cout<<"X * Y = "<<q<<endl;
}