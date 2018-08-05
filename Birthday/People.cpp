#include <iostream>
#include "DOB.h"
#include "People.h"
#include <string>

using namespace std;

People::People(string x, DOB y)
: name(x), bo(y)
{

}

void People::printInfo(){
	cout << name << " was born on ";
	bo.printDate();
}
