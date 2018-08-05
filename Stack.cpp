#include <iostream>
#include <string>
#define MAX_SIZE  10

using namespace std;

int top = -1;
int A[MAX_SIZE];

void push(int z){
	if(top == MAX_SIZE - 1)
	cout << "Stack is full" << endl;
	else
	A[++top] = z;
}

void pop(){
	if(top == -1)
	cout<< "Nothing to pop" << endl;
	else
	top--;
}

int top1(){
	if(top == -1)
	cout << "No stack" << endl;
	else
	return A[top];
}

bool isEmpty(){
	if(top == -1)
	return true;
	else
	return false;
}

int main(){
	push(1);
	push(2);
	pop();
	cout <<top1() << endl;
	cout<< isEmpty() << endl;
	pop();
	cout <<isEmpty() << endl;
	
		
	return 0;
}
