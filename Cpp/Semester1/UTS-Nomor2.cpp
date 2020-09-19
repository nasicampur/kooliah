#include <iostream>
#include <iomanip>
using namespace std;

// UTS SEMESTER 1 NO. 2

int main(){
    int i,j,m,n,x;
    cout<<"Masukkan jumlah kolom: ";cin>>n;
    cout<<"Masukkan jumlah baris: ";cin>>m;
    for(i=0;i<m;i++){
        x=m-i;
        for(j=0;j<n;j++){
            cout<<setiosflags(ios::right)<<setw(3)<<x;
            x+=m;
        }
        cout<<endl;
    }
    return 0;
}