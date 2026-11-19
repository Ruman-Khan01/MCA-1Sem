#include <iostream>
using namespace std;
int main(){
	char str[100];
	char *ptr;
	int length = 0;
	
	cout << "Enter the string; ";
	cin.getline(str, 100);
	
	ptr = str;
	
	while (*ptr != '\0'){
		length++;
		ptr++;
	}
	
	cout << "The length of string is: " << length; 
}
