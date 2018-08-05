#ifndef DOB_H_
#define DOB_H_

namespace std {

class DOB {
public:
	DOB(int x, int y, int z);
	void printDate();
private:
	int month, day, year;
};

}

#endif /* DOB_H_ */
