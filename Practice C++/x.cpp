#include <iostream>
#include <string>





using namespace std;
#define log(x) cout << x << endl;cout << "a" << endl;
typedef int i;

int minimum(i &x, i &y){
	return(x<y?x:y);
}

int minimum(i &x, i &y, i &z){
	if(x<y && x<z)
	return x;
	if(y<x && y<z)
	return y;
	if(z<x && z<y)	
	return z;
}

void cycle(i* arg1, i* arg2, i* arg3){
	i temp = *arg2;
	*arg2 = *arg3;
	*arg3 = *arg1;
	*arg1 = temp;
}

i main(){

i a = 5, b = 6,c = 7;
cout << max(a,b) << endl;

double x = 11.22;
cout << x << endl;

i y = true;
cout << y << endl;

i ax = static_cast<int>(x);
cout << ax << endl;

cout << minimum(a,b) << endl;
cout << minimum(a,b,y) << endl;

string ab = "asdaf";
string bc = "asfdqegf";
cout << max(ab, bc) << endl;
cout << min(ab, bc) << endl;
bc.insert(3, "asf");
cout << bc << endl;
bc.replace(6, 5, "aaaaa");
cout << bc << endl;
cout << bc.substr(3, 2)<< endl;

int as = 0xFF;
bool asd = as;
cout << asd << endl;
cycle(&a, &b, &c);
cout << a <<b << c << endl;

char array[] = {'0','1','2','3','4','5','6','7','8','9'};
for(int i = 0; i < 11; i++)
	cout << array[i] << " ";
	cout << endl;

log("Hello");

/*int z = &a;
	cout << z << endl;		important concept:false*/

return 0;
}
