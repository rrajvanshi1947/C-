#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

srand(time(0));
int x[15];
for(int i = 0; i < sizeof(x)/sizeof(x[0]); i++){
x[i] = rand()%10;
cout << x[i] << endl;
}


long y[10][3];
for(int i = 0; i < sizeof(y)/sizeof(y[0]); i++){
for(int j = 0; j < 3; j++){

y[i][j] = rand()%66 + 10;
cout << y[i][j] << " ";
}
cout << endl;

}


return 0;
}
