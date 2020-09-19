#include <iostream>
using namespace std;

// ANAK AYAM

int main(){
    int ayam, x;
    cout<<"Masukkan jumlah anak ayam: ";cin>>ayam;
    for(x=ayam;x>0;x--){
        if(x>1){
        cout<<"Anak ayam "<<x<<" mati 1, tinggal "<<x-1<<endl;
        } else if(x>0){
            cout<<"Anak ayam 1 mati 1, tinggal induknya";
        }
    }
    return 0;
}
