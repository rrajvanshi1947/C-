#include <iostream>
#include <string>

using namespace std;

template <class Bucky>
Bucky selectionSort(Bucky A[], int n){
	for(int i = 0; i < n - 1; i++){
	int iMin = i;

	for(int j = i + 1; j < n; j++){
		if(A[j] < A[iMin])
		iMin = j;
		}
	Bucky temp = A[i];
	A[i] = A[iMin];
	A[iMin] = temp;					//A[i].swap(A[iMin]);
	}
		
}	


int main(){
	float B[] = {1,3,5,2,8,111.3,1.2,4};
	selectionSort(B, sizeof(B)/sizeof(B[0]));
	for(int i = 0; i < sizeof(B)/sizeof(B[0]); i++)
	cout << B[i] << " ";
	cout << endl;
	
	return 0;
}


