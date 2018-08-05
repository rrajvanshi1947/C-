#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <string>
#include "DOB.h"

namespace std {

class People {
public:
	People(string x, DOB y);
	void printInfo();

private:
	string name;
	DOB bo;
};

} /* namespace std */

#endif /* PEOPLE_H_ */
