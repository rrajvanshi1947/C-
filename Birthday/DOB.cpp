#include <iostream>
#include "DOB.h"
#include "People.h"
#include <string>

using namespace std;

DOB::DOB(int x, int y, int z){
	month = x;
	day = y;
	year = z;
}

void DOB::printDate(){
	cout << month << "/" << day << "/" << year << endl;

}
