#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
	node* prev;
};

node* head;

void insertAtHead(int x){
	if(head == 0){
	head = new node();
	head->data = x;
	head->link = 0;
	head->prev = 0;
	}
	else{
	node* temp = new node();
	temp->data = x;
	temp->link = head;
	temp->prev = 0;
	head->prev = temp;
	head = temp;
	}
}

void insertAtTail(int x){
	if(head == 0)
	insertAtTail(x);
	else{
	node* temp1 = new node();
	temp1->data = x;
	temp1->link = 0;

	node* temp = head;
	while(temp->link !=0){
	temp = temp->link;
		}

	temp->link = temp1;
	temp1->prev = temp;	
	}
}

void insertNode(int x, int n){
	node* temp1 = new node();
	temp1->data = x;
	temp1->link = 0;
	
	if(n == 1){
	temp1->link = head;
	temp1->prev = 0;
	head = temp1;
	}

	else{	
	node* temp = head;
	for(int i = 1; i < n-1; i++){
	temp = temp->link;
		}
	temp1->link = temp->link;
	temp1->prev = temp;
	//temp->link = temp1;
	if(temp->link == 0)
	temp->link = temp1;
	else{
	(temp->link)->prev = temp1;
		}
	temp->link = temp1;
	} 
}

void print(){
	node* temp = head;
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}

void reversePrint(){
	node* temp = head;
	if(temp == 0)
	return;
	else{
	while(temp->link != 0){
	temp = temp-> link;
		}
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->prev;
		}
	}
	cout << endl;
}

int main(){
	head = 0;
	insertAtHead(2);
	print();
	insertAtHead(4);
	print();
	insertAtHead(6);
	print();
	insertAtHead(8);
	print();
	reversePrint();
	insertAtTail(10);
	print();
	insertAtHead(10);
	print();
	insertNode(12,5);
	print();
	insertNode(12,8);
	print();
	insertNode(100,6);
	print();
	reversePrint();

	return 0;
}

