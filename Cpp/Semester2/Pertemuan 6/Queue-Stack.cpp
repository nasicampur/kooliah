#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

/*
Nama: Ronaldi Chandra Karuna
NIM: 121190006
Jurusan: Teknik Informatika
Semester: 2
*/

struct dataa{
	char namaSiswa[30];
    int angka;
	struct dataa *next, *prev;
} *head, *tail, *current;

void print_stack(){
	if(head != NULL){
		current = head;
		while(current != NULL){
			cout<<current->namaSiswa<<endl;
			current = current->next;
		}
	} else{
		cout<<"Tidak ada data\n";
	} cout<<"\n";
};

void push_stack(char name[]){
	current = (struct dataa*) malloc(sizeof(dataa));
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

void pop_stack(){
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

void clear_stack(){
	if(head == NULL){
		cout<<"Tidak ada data";
	} else {
		head = tail = NULL;
    }
}

void print_queue(){
	if(head != NULL){
		current = head;
		while(current != NULL){
			cout<<" -> "<<current->angka;
			current = current->next;
		}
	} else{
		cout<<"Tidak ada data";
	} cout<<"\n\n";
};

void enqueue(int angka){
	current = (struct dataa*) malloc(sizeof(dataa));
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

void clear_queue(){
	if(head == NULL){
		cout<<"Tidak ada data";
	} else {
		head = tail = NULL;
}
}

void queue(){
    int menu, antre;
    do{
	print_queue();
		system("cls");
		print_queue();
		cout<<"1. Enqueue\n";
		cout<<"2. Dequeue\n";
		cout<<"3. Clear\n";
		cout<<"4. Kembali ke menu awal\n";
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
			clear_queue();
			break;
		}
    } while(menu<4);
}

void stack(){
	int menu;
	char namaSiswa[30];
	print_stack();
	do{
		system("cls");
		print_stack();
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Clear\n";
		cout<<"4. Kembali ke menu awal\n";
		cout<<"Pilih: ";cin>>menu;
		switch(menu){
		case 1:
			cout<<"Masukkan nama siswa: ";cin>>namaSiswa;
			push_stack(namaSiswa);
			break;
		case 2:
			pop_stack();
			break;
		case 3:
			clear_stack();
			break;
	    }
    } while(menu<4);
}

int main(){
    int pilih;
	do{
    system("cls");
    cout<<"Pilih program yg ingin dipakai: \n";
    cout<<"1. Queue (Input angka)\n";
    cout<<"2. Stack (Input nama Mahasiswa)\n";
	cout<<"3. Exit\n";
    cout<<"Pilih: ";cin>>pilih;
    switch(pilih){
        case 1:
        queue();
        break;
        case 2:
        stack();
        break;
    	}
	} while(pilih<3);
}