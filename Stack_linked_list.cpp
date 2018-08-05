#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct node{
	int data;
	node* link;
};

node* top;

void insert(int x){
	node* temp = new node();
	temp->data = x;
	temp->link = top;
	top = temp;

	}

void print(){
	node* temp2 = top;
	while(temp2 != 0){
	cout << temp2->data << " ";
	temp2 = temp2->link;
	}
	cout << endl;
}

void push(int x){
	node* temp = new node();
	temp->data = x;
	temp->link = top;
	top = temp;
}

void pop(){
	if(top == 0)
	return;
	else{
	node* temp = top;
	top = top->link;
	free(temp);
	}	
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	print();
	push(0);
	print();
	pop();
	print();

	return 0;
}
