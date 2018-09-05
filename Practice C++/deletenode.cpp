#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void deleteNode(int n){
	node* temp = head;
	for(int i = 1; i < n; i++){
	temp = temp->link;
	}
	node* temp2 = temp;	
	temp = temp->link;
	free(temp2);
}

void print(){
	node* temp = head;
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}

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

int main(){
	head = 0;

	

	insert(1,1);
insert(2,2);
insert(3,3);
insert(4,4);
insert(5,5);
	
	print();
deleteNode(2);
	print();

return 0;}



