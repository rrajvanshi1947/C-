#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double valueOfPie;
	valueOfPie = 12*log((2 + pow (5, 0.5))*(3 + pow (13, 0.5)) / pow(2, 0.5)) / pow (130, 0.5);
	cout << setprecision(16) << valueOfPie << endl;
	return 0;
}
