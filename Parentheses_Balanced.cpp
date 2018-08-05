#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool balancedParentheses(string A){
	int n = A.length();
	stack<char> S;

	for(int i = 0; i < n; i++){
	if(A[i] == '{' || A[i] == '[' || A[i] == '('){
	S.push(A[i]);
	continue;
		}

	if(S.empty())
	return false;

	switch(A[i]){

	case '}':
	if(S.top() == '[' || S.top() == '(')
	return false;
	else if(S.top() == '{')
	S.pop();
	break;

	case ']':
	if(S.top() == '{' || S.top() == '(')
	return false;
	else if(S.top() == '[')
	S.pop();
	break;

	case ')':
	if(S.top() == '[' || S.top() == '{')
	return false;
	else if(S.top() == '(')
	S.pop();
	break;
		}

	}
	if(S.empty())
	return true;
}

int main(){
	string S = "({[]}alfm;lawmf;lqw)";
	cout << balancedParentheses(S) << endl;
	return 0;
}
