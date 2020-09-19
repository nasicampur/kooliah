#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct buku{
	char namaSiswa[30];
	struct buku *next, *prev;
} *head, *tail, *current;

void print(){
	if(head != NULL){
		current = head;
		while(current != NULL){
			cout<<current->namaSiswa<<endl;
			current = current->next;
		}
	} else{
		cout<<"Tidak ada data";
	} cout<<endl;
};

void pushHead(char name[]){
	current = (struct buku*) malloc(sizeof(buku));
	strcpy(current->namaSiswa, name);
	current->next = current->prev = NULL;
	if(head == NULL){
	head = tail = current;
	} else{
		head->prev = current;
		current->next = head;
		head = current;
	}
}

void popHead(){
	if(head == NULL){
		cout<<"Tidak ada data";
	} else if (head == tail){
		current = head;
		head = tail = NULL;
		free(current);
	} else {
		current = head;
		head = head->next;
		head->prev = NULL;
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
	char namaSiswa[30];
	print();
	do{
		system("cls");
		print();
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Clear\n";
		cout<<"4. Exit\n";
		cout<<"Pilih: ";cin>>menu;

		switch(menu){
		case 1:
			cout<<"Masukkan nama siswa: ";cin>>namaSiswa;
			pushHead(namaSiswa);
			break;
		case 2:
			popHead();
			break;
		case 3:
			clear();
			break;
		}
	} while(menu<4);
}