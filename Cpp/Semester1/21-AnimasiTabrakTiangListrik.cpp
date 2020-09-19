#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
 
// ANIMASI TABRAK TIANG LISTRIK

void gotoxy(int x, int y){
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 
main(){
int a;
    //t
    cout<<endl;
    for (a=0;a<=6;a++){
        cout<<"*";
		Sleep(50);
    }
    for (a=0;a<=5;a++){
        gotoxy(3,1+a);
		cout<<"*";
		Sleep(50);
    }
   
   
    //A
    for(a=0;a<=5;a++){
        gotoxy(9,6-a);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(9+a,1);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(14,1+a);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(9+a,3);
		cout<<"*";
		Sleep(80);
    }
   
   
    //b
    for(a=0;a<=5;a++){
        gotoxy(16,1+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(16+a,1);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=2;a++){
        gotoxy(21,1+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=4;a++){
        gotoxy(21-a,3);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(21,3+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=4;a++){
        gotoxy(21-a,6);
		cout<<"*";
		Sleep(50);
    }
   
   
    //r
    for(a=0;a<=5;a++){
        gotoxy(23,6-a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(23+a,1);
		cout<<"*";
		Sleep(50);
    }
   
   
    //A
    for(a=0;a<=5;a++){
        gotoxy(30,6-a);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(30+a,1);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(35,1+a);
		cout<<"*";
		Sleep(80);
    }
    for(a=0;a<=5;a++){
        gotoxy(30+a,3);
		cout<<"*";
		Sleep(80);
    }
   
   
    //k
    for(a=0;a<6;a++){
        gotoxy(37,1+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(37+a,4);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(40,6-a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(35,1+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(30+a,3);
		cout<<"*";
		Sleep(50);
    }
 
   
   
    //r
    for(a=0;a<=5;a++){
        gotoxy(3,9+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(1+a,9);
		cout<<"*";
		Sleep(50);
    }
   
   
    //i
    for(a=0;a<=5;a++){
        gotoxy(8,9+a);
		cout<<"*";
		Sleep(50);
    }
   
   
    //A
    for(a=0;a<=5;a++){
        gotoxy(10,14-a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(10+a,9);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(15,9+a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(10+a,11); 
		cout<<"*";
		Sleep(50);
    }
   
   
    //N
    for(a=0;a<=5;a++){
        gotoxy(17,9+a); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(17+a,9); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(22,9+a); 
		cout<<"*";
		Sleep(50);
    }
 
   
    //G
    for(a=0;a<=5;a++){
        gotoxy(29-a,9); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(24,9+a); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(24+a,14); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(29,14-a); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(29-a,11); 
		cout<<"*";Sleep(50);
    }
 
 
    //L
    for(a=0;a<=5;a++){
        gotoxy(33,9+a); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(33+a,14); 
		cout<<"*";
		Sleep(50);
    }
 
 
    //i
    for(a=0;a<=5;a++){
        gotoxy(40,9+a); 
		cout<<"*";
		Sleep(50);
    }
 
 
    //S
    for(a=0;a<=5;a++){
        gotoxy(42+a,9); 
		cout<<"*";
		Sleep(30);
    }
    for(a=0;a<=3;a++){
        gotoxy(42,9+a); 
		cout<<"*";
		Sleep(30);
    }
    for(a=0;a<=5;a++){
        gotoxy(42+a,12); 
		cout<<"*";
		Sleep(30);
    }
    for(a=0;a<=2;a++){
        gotoxy(47,12+a); 
		cout<<"*";
		Sleep(30);
    }
    for(a=0;a<=5;a++){
        gotoxy(47-a,14); 
		cout<<"*";
		Sleep(30);
    }
    
    
 	//T
 	for(a=0;a<=5;a++){
        gotoxy(49+a,9); 
		cout<<"*";
		Sleep(50);
    }
 	for(a=0;a<=5;a++){
        gotoxy(51,9+a); 
		cout<<"*";
		Sleep(50);
    }
   
    //r
    for(a=0;a<=5;a++){
        gotoxy(56,14-a);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=5;a++){
        gotoxy(56+a,9); 
		cout<<"*";
		Sleep(50);
    }
 
 
    //i
    for(a=0;a<=5;a++){
        gotoxy(63,9+a); 
		cout<<"*";
		Sleep(50);
    }
 
 
    //k
    for(a=0;a<=5;a++){
        gotoxy(65,9+a); 
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(65+a,12);
		cout<<"*";
		Sleep(50);
    }
    for(a=0;a<=3;a++){
        gotoxy(68,14-a);
		cout<<"*";
		Sleep(50);
    }
 
 
    //loading
    gotoxy(1,22); cout<<"Loading";
    for(int i=0;i<=12;i++){
    system("color 09");cout<<" * ";Sleep(100);
    }
    return 0;
}
