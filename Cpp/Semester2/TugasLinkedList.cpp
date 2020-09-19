#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


struct TNode{
      int data;
      TNode *next;
};

TNode *head, *bantu, *baru, *hapus;

int isEmpty(){
      if(head==NULL){
            return 1;
      } else return 0;
}

void inputDepan(int databaru){
      baru = new TNode;
      baru->data = databaru;
      baru->next = NULL;
      if(isEmpty()==1){
            head = baru;
            head->next = NULL;
      } else{
            baru->next = head;
            head = baru;
      }
      cout<<"Data Masuk\n";
}

void inputBelakang(int databaru){
      baru = new TNode;
      baru->data = databaru;
      baru->next = NULL;
      if(isEmpty()==1){
            head = baru;
            head->next = NULL;
      } else{
            bantu = head;
            while(bantu->next != NULL){
                  bantu = bantu->next;
            } bantu->next = baru;
      } cout<<"Data masuk\n";
}

void hapusDepan(){
      int d;
      if(isEmpty()==0){
            if(head->next != NULL){
                  hapus = head;
                  d = hapus->data;
                  head = head->next;
                  delete hapus;
            } else{
                  d = head->data;
                  head = NULL;
            }cout<<"Data "<<d<<" telah terhapus";
      }
}

void hapusBelakang(){
      int d;
      if(isEmpty() == 0){
            if(head->next != NULL){
                  bantu == head;
                  while(bantu->next->next != NULL){
                        bantu = bantu->next;
                  }
                  hapus = bantu->next;
                  d = hapus-> data;
                  bantu->next = NULL;
                  delete hapus;
            } else{
                  d = head->data;
                  head == NULL;
            } cout<<"Data "<<d<<" telah terhapus\n";
      } else cout<<"Data masih kosong\n";
}

void print(){
      bantu = head;
      if(isEmpty() == 0){
            while(bantu != NULL){
                  cout<<bantu->data<<" ";
                  bantu = bantu->next;
            } cout<<endl;
      } else cout<<"Data masih kosong\n";
}

int main(){
    int pilih,data;
    do{
        system("cls");
        cout<<"Menu Linked List\n";
        cout<<"==================\n";
        cout<<"1. Tambah data di depan\n";
        cout<<"2. Tambah data di belakang\n";
        cout<<"3. Hapus data di depan\n";
        cout<<"4. Hapus data di belakang\n";
        cout<<"5. Cetak data\n";
        cout<<"6. Exit\n";
        cout<<"Pilihan anda: ";cin>>pilih;
        switch(pilih){
            case 1:
                  cout<<"Masukkan angka: ";cin>>data;
                  inputDepan(data);
                  getch();
                  break;
            case 2:
                  cout<<"Masukkan angka: ";cin>>data;
                  inputBelakang(data);
                  getch();
                  break;
            case 3:
                  hapusDepan();
                  getch();
                  break;
            case 4:
                  hapusBelakang();
                  getch();
                  break;
            case 5:
                  print();
                  getch();
                  break;
        }
    } while(pilih<6);
}