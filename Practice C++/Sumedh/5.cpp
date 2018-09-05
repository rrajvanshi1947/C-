/*Given the following definition of a C++ class:
class dummyClass
{
public:
...
private:
int listLength; // # of elements in the int array
int *list;
// an array of int
double salary;
string name;
}
Write the definition/implementation of the destructor and copy constructor for the class
dummyClass. Assume the initial size of the array is passed as an argument to the constructor
and make sure your constructor acts as a default constructor. (10 points)*/

~dummyclass(){
	delete list;
}

dummyClass(){}

dummyclass(int size){
	listLength = size;
}

dummyclass(const dummyClass &c){
	list = new int(*c.list);
	listLength = c.listLength;
	salary = c.salary;
	name = c.name;
}
