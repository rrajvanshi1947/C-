#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;
	 
void insert(int x){
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
	
	node* temp1 = head;	
	while(temp1->link != NULL){
	temp1 = temp1->link;
	}
	
	temp1->link = temp;
}

void print(){
	node* temp2 = head;
	while(temp2 != NULL){
	cout << temp2->data << " ";
	temp2 = temp2->link;
	}
	cout << endl;
}

int main(){
	head = new node();
	head->data = 2;
	head->link = NULL;
	insert(4);
	print();
	insert(6);
	print();


	return 0;
}
