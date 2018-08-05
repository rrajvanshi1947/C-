#include <iostream>
#include "DOB.h"
#include "People.h"
#include <string>

using namespace std;

int main() {

	DOB roopam(05,25,1991);
	roopam.printDate();
	People raj("Roopam", roopam);
	raj.printInfo();






	return 0;
}
