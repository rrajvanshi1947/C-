#include <iostream>
#include <stack>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void reverse(node* h){
	if(p == 0)
	return;

	stack<node*> S;
	node* temp = head;
	while(temp->link != 0){
	S.push(temp);
	temp = temp->link;
	}
	head = temp->link;
	while(!S.empty()){
	temp->link = temp;
	}
}

int main(){


	return 0;
}

