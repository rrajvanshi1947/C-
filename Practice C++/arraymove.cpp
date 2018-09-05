#include <iostream>

#define MAX 10

using namespace std;

void insert(int A[], int n, int l){
	try{
	if(l < 0 || MAX <= l + 1)
	throw 1;
	} catch(int x){
	cout << "Invalid value of l \nError code: 1" << endl;
	return;
	}
	
	int temp = A[l];
	A[l] = n;
	int temp2 = l + 1;
	int temp3;

	while(temp != 0){
	temp3 = A[temp2];
	A[temp2] = temp;
	temp = temp3;
	temp2++;
	}
	
	
	
}

int main(){
	int A[MAX] = {1,2,3,4};
	insert(A, 5, 2);
	insert(A, 10, 3);
	insert(A, 10, 7);
	for(int i = 0; i < MAX; i++)
	cout << A[i] << " " << endl;
	insert(A, 10, 12);
	return 0;
}
