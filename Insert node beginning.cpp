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
	temp->link = head;
	head = temp;

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
	head = NULL;
	
	node* temp = new node();
	temp->data = 1;
	temp->link = NULL;
	head = temp;
	node* temp1 = temp;

	while(temp->data < 10){
	temp->link = new node();
	(temp->link)->data = temp->data + 1;
	temp = temp->link;
		}
	temp->link = NULL;

	/*node* temp2 = head;
	while(temp2 != NULL){
	cout << temp2->data << " ";
	temp2 = temp2->link;
		}
	cout << endl; */

	insert(0);

	print();

		

	return 0;
	}
