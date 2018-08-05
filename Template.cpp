#include <iostream>
#include <string>

using namespace std;

template <class T, class U>

T sum(T a, U b){
	T z = a + b;
	return z;	
	}

int main(){

	cout << sum(125, 14) << endl;
	cout << sum(125, 14.51485) << endl;


	return 0;
}

