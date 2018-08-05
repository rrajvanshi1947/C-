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

void print(){
	node* temp = head;
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}

void reverse(){
	node* prev; node* current; node* next;
	current = head;
	prev = 0;
	while(current != 0){
	next = current->link;
	current->link = prev;
	prev = current;
	current = next;
	}
	head = prev;
}

int main(){
	head = NULL;
	insert(1, 1);
	insert(2,2);
	print();
	insert(3,3);
	print();
	insert(4,1);
	print();
	insert(5,2);
	print();

	reverse();
	print();
	

	return 0;
}
