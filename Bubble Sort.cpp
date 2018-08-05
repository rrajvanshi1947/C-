#include <iostream>
#include <string>

using namespace std;

void bubbleSort(int A[], int n){
	for(int i = 0; i < n-1; i++){
	int flag = 0;	

	for(int j = 0; j < n-i-1; j++){

	if(A[j] > A[j+1]){
	swap(A[j], A[j+1]);
	flag = 1;
	}
	
	}
	if (flag == 0)
	break;
	
}
	for(int i = 0; i < n; i++)
	cout << A[i] << " ";
	cout << endl;


}

int main(){
	int B[] = {21,12,43,34,65,7,2,4,9,1};
	bubbleSort(B, sizeof(B)/sizeof(B[0]));



	return 0;
}
