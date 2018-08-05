#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream roopam("Test.txt");	//or ofsteram roopam; roopam.open("Test.txt");
	if (roopam.is_open()){
	roopam << "This is a test file.\n";
	}
	roopam << "This is a test file.\n";
	roopam.close();
	if (roopam.is_open()){
	roopam << "This is a test file.\n";
	}
	ofstream Test("dir.cpp");
	Test << "#include <iostream>\n#include <fstream>\n using namespace std \n    int main(){\n\nreturn 0;\n}";
	Test.close();			 



	return 0;
}
