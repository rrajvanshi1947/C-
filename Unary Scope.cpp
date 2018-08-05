#include <iostream>
#include <string>

using namespace std;

int math(int x = 10);
int calcVol(int x = 10, int y = 10, int z = 10);
int tuna = 5;

int main() {
	
	math();
	cout << calcVol(1) << endl;

	return 0;
}

int math(int x){
	int tuna = x;
	cout << ::tuna << endl;
	cout << tuna << endl;
	}

int calcVol(int x, int y, int z){
int vol = x*y*z;
return vol;
}
