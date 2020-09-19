#include<iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>

using namespace std;

struct Node {
	char item;          
   	Node *kiri;      
   	Node *kanan;     
  	};

void tambah(Node **akar,char itembaru)
{
	if((*akar) == NULL)
	{   		
		cout<<itembaru<<" successfully inputted";
		Node *baru;                        
    	baru = new Node;                   
    	baru->item = itembaru;   
    	baru->kiri = NULL;       
    	baru->kanan = NULL;  
    	(*akar) = baru;         
    	(*akar)->kiri = NULL;         
    	(*akar)->kanan = NULL;
	}
   	else if(itembaru < (*akar)->item)   
	   tambah(&(*akar)->kiri,itembaru);
   	else if(itembaru > (*akar)->item)   
	   tambah(&(*akar)->kanan,itembaru);
	else if(itembaru == (*akar)->item) 
		cout<<"Item sudah ada!";
}
 
void preOrder(Node *akar)       
{
	if(akar != NULL)
   	{
   		cout<< akar->item<<"  ";         
   		preOrder(akar->kiri),            
   		preOrder(akar->kanan);           
  	}
}

void inOrder(Node *akar)        
{
	if(akar != NULL)
	{
   		inOrder(akar->kiri),         
   		cout<< akar->item<<"  ";     
   		inOrder(akar->kanan);        
   }
}

void postOrder(Node *akar)      
{
	if(akar != NULL)
	{
   		postOrder(akar->kiri),       
   		postOrder(akar->kanan);      
   		cout<< akar->item<<"  ";     
  	}
}


main()
{
	char item;
  	Node *phn;      
  	phn = NULL;     
  	int pil;

  	do 
  	{
	  	system ("color a");
    	system ("cls");
		cout<<"==================================="<<endl;
		cout<<"           Tugas Kelompok "<<endl;
		cout<<"       Traversal Pohon Biner"<<endl;
		cout<<"==================================="<<endl;
		cout<<"MENU :"<<endl;
		cout<<"  1. Insert Node"<<"\0";
		cout<<"  2. In-Order Traversal" << endl;
		cout<<"  3. Pre-Order Traversal" << endl;
		cout<<"  4. Post-Order Traversal" << endl;
		cout<<"  5. Exit"<<endl;
		cout<<"-----------------------------------"<<endl;
		cout<<"Your choice: ";
    	cin>>pil;
    	
    	//Isi Menu
        if(pil==1)//Insert Node
        {
          	cout<<endl;
			cout<<"Insert the alphabet of data you want to add : ";
			cin>>item;
          	tambah(&phn,item); 
          	getch();
        }
        
        else if(pil==2)//In-Order Traversal
        {
        	if(phn!=NULL) 
			{
				cout<<endl;
				cout<<"In-Order Traversal : ";
				inOrder (phn); 
          	}
        	else
        	{
				cout<<endl; 
				cout<<"\"Binary Tree is Empty\"";
        	}
          	getch();
        }

		else if(pil==3)//Pre-Order Traversal
        {
        	if(phn!=NULL) 
			{
				cout<<endl;
				cout<<"Pre-Order Traversal : ";
				preOrder(phn); 
          	}
        	else
        	{
				cout<<endl; 
				cout<<"\"Binary Tree is Empty\"";
        	}
          	getch();
        }

		else if(pil==4)//Post-Order Traversal
        {
        	if(phn!=NULL) 
			{
				cout<<endl;
				cout<<"Post-Order Traversal : ";
				postOrder(phn);      
          	}
        	else 
        	{
        		cout<<endl;
				cout<<"\"Binary Tree is Empty\"";
			}
          	getch();
        }
        
        else if (pil==5)//Exit
		{
			cout<<endl;
			cout<<"The program is closed, thank you :)";
			getch();
			cout<<endl;
    		cout<<endl;
    		cout<<endl;
    		cout <<" <<<   CREATED BY KELOMPOK 4   >>> \n";  
  			cout <<"\n 1. ------------------------";
  			cout <<"\n 2. ------------------------";
  			cout <<"\n 3. ------------------------";
  			cout <<"\n 4. ------------------------";
  			getch();
		}
		else
		{
			cout<<endl;
			cout<<"Input error!!"<<endl;
			cout<<"Please re-enter your choice";
			getch();
		}
        
  }
  while(pil!=5);
  return 0;
}