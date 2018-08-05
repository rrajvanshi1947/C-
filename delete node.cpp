#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void insert(int x, int n){
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
	if(n == 1){
	temp->link = head;
	head = temp;
	//cout << head->data << endl;
	return;
	}
	node* temp1 = head;
	for(int i = 0; i < n-2; i++){
	temp1 = temp1->link;
	}
	temp->link = temp1->link;
	temp1->link = temp;
	//cout << temp1->data << endl;
}

void deleteNode(int n){
	node* temp = head;
	if(n==1){
	head = head->link;
	free (temp);
	return;
	}

	for(int i = 0; i < n-2; i++)
	temp = temp->link;
	node* temp1 = temp->link;
	temp->link = (temp->link)->link;
	free (temp1);	 
}

void print(){
	node* temp = head;
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}

int main(){
	head = 0;
	
	node* temp = new node();
	temp->data = 1;
	temp->link = 0;
	head = temp;

	while(temp->data < 10){
	temp->link = new node();
	(temp->link)->data = temp->data + 1;
	temp = temp->link;
		}
	temp->link = NULL;
	
	print();
	deleteNode(10);
	print();
	insert(12,3);
	print();

	return 0;
}
