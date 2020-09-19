#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct antrian{
	int angka;
	struct antrian *next, *prev;
} *head, *tail, *current;

void print(){
	if(head != NULL){
		current = head;
		while(current != NULL){
			cout<<current->angka<<endl;
			current = current->next;
		}
	} else{
		cout<<"Tidak ada data";
	} cout<<endl;
};

void enqueue(int angka){
	current = (struct antrian*) malloc(sizeof(antrian));
	current->angka = angka;
	current->next = current->prev = NULL;
	if(head == NULL){
	head = tail = current;
	} else{
		head->prev = current;
		current->next = head;
		head = current;
	}
}

void dequeue(){
	if(tail == NULL){
		cout<<"Tidak ada data";
	} else if (tail == head){
		current = tail;
		head = tail = NULL;
		free(current);
	} else {
		current = tail;
		tail = tail->prev;
		tail->next = NULL;
		free(current);
	}
}

void clear(){
	if(head == NULL){
		cout<<"Tidak ada data";
	} else {
		head = tail = NULL;
}
}

int main(){		
	int menu;
	int antre=1;
	print();
	do{
		system("cls");
		print();
		cout<<"1. Queue\n";
		cout<<"2. Dequeue\n";
		cout<<"3. Clear\n";
		cout<<"4. Exit\n";
		cout<<"Pilih: ";cin>>menu;

		switch(menu){
		case 1:
			cout<<"Masukkan angka: ";cin>>antre;
			enqueue(antre);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			clear();
			break;
		}
	} while(menu<4);
}