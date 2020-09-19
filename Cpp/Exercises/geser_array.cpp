#include <iostream>
#include <utility>
using namespace std;

int main(){
    int A[5] = {1,2,3,4,5};
        for (int i=0;i<=4;i++){
            cout<<"Step "<<i<<" --> ";
        for (int j=0;j<=4;j++){
            swap(A[i], A[j]);
            cout<<A[i]<<" ";
            }
        cout<<endl;
        }
}