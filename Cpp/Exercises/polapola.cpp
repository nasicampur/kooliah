#include <iostream>
using namespace std;

int main()
{
    int a,b;

    for(a=1;a<=37;a++){
        for(b=1;b<=a;b++){
            if(b==4 || b==8 || b==10){
                b = b + 1;
            } else if (b==10){
                b = b + 2;
            } else if(b==11){
                b = b + 6;
            }
            cout<<"*";
        }
            cout<<endl;
    }

    for(a=1;a<=37;a++){
        for(b=a;b<=12;b++){
            if(b==5 || b==8 || b==10){
                b = b + 1;
            } else if (b==10){
                b = b + 2;
            } else if(b==11){
                b = b + 6;
            }
            cout<<"*";
        }
            cout<<endl;
    }
}