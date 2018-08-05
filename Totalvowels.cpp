#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream Text("Paragraph.txt");

	int i = 0;
	int j = 0;
	char letter[500];
	string words[400];
	int totalVowels = 0;
	int totalWords = 0;

	if(Text.is_open()){
	while(Text >> letter[i]){
	if(letter[i] == 'a' || letter[i] == 'e' || letter[i] == 'i' || letter[i] == 'o' || letter[i] == 'u')
	totalVowels++;
	else
	i++;
	}
}	
	cout << "Total number of vowels: " << totalVowels << endl; 
	Text.close();

	ifstream Text2("Paragraph.txt");
	if(Text2.is_open()){
	while(Text2 >> words[j]){
	//totalWords++;	
	j++;
	}
}
	cout << "Total number of words: " << j << endl;	
	Text2.close();
	
	return 0;
} 	
