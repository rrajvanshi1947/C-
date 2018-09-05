#include <iostream>
#include <string>

using namespace std;

int factorial(int x){
	if(x==0)
	return 1;
	int  p = x*factorial(x-1);
return p;
}

int main(){
	char a = 'b';
	cout <<a << endl;
	cout << factorial(5) << endl;

	return 0;
}
