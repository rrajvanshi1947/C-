#include <iostream>
#include <string>
#include <stack>

using namespace std;

void reverse(char *C, int n){
	stack<char> S;
	for(int i = 0; i < n; i++){
	S.push(C[i]);
	}
	for(int i = 0; i < n; i++){
	C[i] = S.top();
	S.pop();
	}
}

int main(){
	char C[6] = "Hello";
	reverse(C, 5);
	cout << C << endl;


	return 0;
}
