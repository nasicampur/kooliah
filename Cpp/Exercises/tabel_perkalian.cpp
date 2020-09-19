#include <iostream>
using namespace std;

int main()
{
    int atas,bawah;
    for(atas=1;atas<=10;atas++){
        cout<<"\t"<<atas;
    }
    for(bawah=1;bawah<=10;bawah++)
    {
        cout<<"\n"<<bawah;
        for(atas=1;atas<=10;atas++)
        {
            cout<<"\t"<<atas*bawah;
        }
    }
} 