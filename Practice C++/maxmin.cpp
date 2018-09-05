#include <iostream>
#include <string>

#define MAX 100
#define MIN 0

using namespace std;

struct max_min { int min; int max; };
const int MI= MAX;
const int Mi= MIN;
inline int min(int a0, int a1 =MI) { return (a1 == MI?a0:(a0<a1?a0:a1));}//    a0 < a1 ? a0 : a1);}
inline int max(int a0, int a1) { return (a1 == MI ? a0: (a0 > a1 ? a0 : a1));}
void minMax(int a1, int a2=MI, int a3=MI, int a4=MI, int a5=MI){
max_min* result = new max_min();;
result->min = min(a1,min(a2, min(a3, min(a4, a5))));
result->max = max(a1,max(a2, max(a3, max(a4, a5))));
cout << result->max << result->min << endl;
}

int main(){
	minMax(1,2);
int max = min(1);
cout << max; 
	return 0;
}



