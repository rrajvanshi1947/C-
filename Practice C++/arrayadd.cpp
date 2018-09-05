#include <iostream>

using namespace std;

void increment_array(int a[], unsigned int size, const unsigned int add_on){
	for( int i = 0; i < size; i++)
	a[i] = a[i] + add_on;
}

int main(){
	int a[] = {1,2,3,4,5};
	increment_array(a, 5, 1);
	for(int i = 0; i < 5; i++)
	cout << a[i] << " ";
	cout << endl;

	int b[1][1];
	for(int i =0; i < 2; i++){
	for(int j = 0; j < 2; j++)
	b[i][j] = i+j;
	}
	cout << b[0][0] << b[0][1] << b[1][0] << b[1][1] << endl; 

	return 0;
}
