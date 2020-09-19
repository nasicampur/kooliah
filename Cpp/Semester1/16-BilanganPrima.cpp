#include<iostream>
using namespace std;

int flag;
int prima(int N)
{
	int X;
	for(X=2;X<N;X++)
	if (N%X==0) 
	{
		flag++;
	}
	return (flag);
}

int main()
{
	int M,a;
	cout<<"Masukkan Angka : "; cin>>M;
	a=prima(M);
	if(a==0)
	{
		cout<<"Bilangan "<<M<<" adalah bilangan prima"<<endl;
	}else cout<<"Bilangan "<<M<<" bukan bilangan prima"<<endl;
}
