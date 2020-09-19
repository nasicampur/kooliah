#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct mahasiswa{
    int nim;
    mahasiswa *next;
};

void init(mahasiswa **p){
    *p = NULL;
}
mahasiswa *alokasi(int nim){
    mahasiswa *p;
    p = (mahasiswa*) malloc(sizeof(mahasiswa));
    if(p!=NULL){
        p->next=NULL;
        p->nim=nim;
    }
    return (p);
}

void add(mahasiswa **p, int nim){
    *p = alokasi(nim);
    cout<<(*p)->nim<<endl;
}

int main(){
    mahasiswa *head;
    init(&head);
    add(&head,20);
}