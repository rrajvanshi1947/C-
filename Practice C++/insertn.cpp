#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void print(){
	node* temp = head;
	while(temp != NULL){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}

void insert(int v, int n){
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
}
