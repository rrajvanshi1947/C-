#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
	};

int main(){

	node *A;	//or node* A; A=0; you cannot write node *A and then A = 0 not allowed
	

	node *temp = new node();	//node* temp = new node();
	temp->data = 2;		//*temp.data = 2
	temp->link = NULL;

	A = temp;

	temp = new node();
	temp->data = 4;
	temp->link = NULL;
	
	A->link = temp;

	temp = new node();
	temp->data = 6;
	temp->link = NULL;
	
	node* temp1 = A;
	while(temp1->link != 0){
	temp1 = temp1->link;
	}
	temp1->link = temp;
	
	node* temp2 = A;
	while(temp2 != 0){
	cout << temp2->data << endl;
	temp2 = temp2->link;	
	}

	//cout << A->data << endl;
	//cout << (A->link)->data << endl;

	return 0;
}
