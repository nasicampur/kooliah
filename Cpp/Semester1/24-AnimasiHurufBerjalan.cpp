#include <iostream>
#include <windows.h>
using namespace std;

// ANIMASI HURUF BERJALAN

void gotoxy( int kolom, int baris )
  {
  COORD coord;
  coord.X = kolom;
  coord.Y = baris;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
}

int main(){
	int i;
	for(i=1;i<70;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"I";
	}

	for(i=1;i<68;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"D";
	}

	for(i=1;i<66;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"L";
	}

	for(i=1;i<64;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"A";
	}

	for(i=1;i<62;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"N";
	}

	for(i=1;i<60;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"O";
	}

	for(i=1;i<58;i++){
	Sleep(10);
	gotoxy(i-1,12);cout<<" ";
	gotoxy(i,12);cout<<"R";
	}
	cout<<endl;
	return 0;
}
