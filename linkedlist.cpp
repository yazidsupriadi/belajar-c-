#include<iostream>
using namespace std;

struct node
{
		int number;
		node *next;
};

char menu();
bool isEmpty(node *head);
void insertAsFirstElement(node *&head,node *&last, int number);
void insert(node *&head,node *&last, int number);
void remove(node *&head,node *&last);
void showList(node *current);

int main(){
	node *head = NULL;
	node *last = NULL;	
	char choice;
	int number;
	do{
		choice = menu();
		switch(choice)
		{
			case '1':
				cout<<" enter a number";
				cin>>number;
				insert(head,last,number);
				break;
				case '2':
					remove(head,last);
					break;
				case '3':
					showList(head);
					break;
				default:cout<<"system exit";	
		}
		
	}while(choice != '4');
}

char menu(){
	char choice;
	cout<<" Menu "<<endl;
	cout<<"1. add an item "<<endl;
	cout<<"2. remove an item "<<endl;
	cout<<"3. show an item "<<endl;
	cout<<"4. exit"<<endl;
	cout<<" masukan pilihan anda : ";
	cin>>choice;
	cout<<endl;
	return choice;	
}

bool isEmpty(node *head){
		if(head == NULL){
			return true;
		}else{
			return false;
		}
}
void insertAsFirstElement(node *&head,node *&last, int number){
	node *temp = new node;
	temp->number = number;
	temp->next = NULL;
	head = temp;
	last = temp;
}
void insert(node *&head,node *&last, int number){
	if(isEmpty(head)){
		insertAsFirstElement(head,last,number);	
	}else{
		node *temp = new node;
	temp->number = number;
	temp->next = NULL;
	last->next = temp;
	last = temp;
	}
	
}
void remove(node *&head,node *&last){
	if(isEmpty(head)){
		cout<<"gak ada list"<<endl;
	}else if(head == last){
		
		delete head;
		head == NULL;
		last == NULL;
		
	}else{
		node *temp = head;
		head = head->next;
		delete temp;
	}
}
void showList(node *current){
	if(isEmpty(current)){
		cout<<"ga ada listnya";
	}else{
		cout<<" sekarang listnya ada : "<<endl;
		while(current != NULL){
			cout<<current->number<<endl;
			current = current->next;
		}
		
	}
}


