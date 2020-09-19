#include <iostream>
using namespace std;

int main(){
    
int X[3] = {1,2,3};

int Y[3] = {4,5,6};

int temp;

for (int i=0;i<=2;i++){
    temp = X[i];
    X[i] = Y[i];
    Y[i] = temp;
}

for (int i=0;i<=2;i++){ 
    cout<<"{"<<X[i]<<"}";
 for (int i=0;i<=2;i++){
     cout<<"{"<<Y[i]<<"}"; 
        }
    }
}