#include <iostream>
using namespace std;
main(){
    int x,y,z;
    cout<<"Masukkan angka: ";
    cin>>z;
    for (x=1;x<=z;x++){
        for(y=1;y<=z;y++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}