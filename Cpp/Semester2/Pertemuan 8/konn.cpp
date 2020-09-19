#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
 
void konversiBiner(int n)
{
  int hasil;
 if(n>1){
 konversiBiner(n/2);
 }
 hasil = n%2;
 cout<<hasil;
}
 
int main(){
 int a;
 cout<<"Masukkan Bilangan yang akan dikonversi : ";
 cin>>a;
 cout<<a<<" dalam biner adalah ";
 konversiBiner(a);
 
 return 0;
}