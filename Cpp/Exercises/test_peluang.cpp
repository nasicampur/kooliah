#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(){
    // this is comment line
cout<<"NIM : 222019003 Ivander Gautama \n";
cout<<"Class Exercise Week 4 Quiz No 3 \n";
cout<<"Submit date : 4-3-2020\n";
cout<<"-------------------------------- \n";
int r;
int x = 1;
int y = 4;
int z;
int a=0,b=0,c=0,d=0,e=0,f=0;
z=y-x+1;
srand (time(NULL));
for (int i=1;i<=100;i++){
    r = rand()% z+x;

    if (r==1)
    {
        a=a+1;
    }
    else if (r==2)
    {
        b=b+1;
    }
    else if (r==3)
    {
        c=c+1;
    }
    else if (r==4)
    {
        d=d+1;
    }
}
e=a+b+c;
cout<<" head-head = "<<a;
cout<<endl;
cout<<" head-tail = "<<b;
cout<<endl;
cout<<" tail-head = "<<c;
cout<<endl;
cout<<" tail tail = "<<d;
cout<<endl;
cout<<" head = "<<e;
cout<<endl;
}