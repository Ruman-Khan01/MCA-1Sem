#include <iostream>
using namespace std;
int main() {
	int a, b, sum;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	
	sum =a;
	
	for (int i = 0; i < b; i++)
	{
		a++;
	}
	
	cout << "sum =  " << a;
 

return 0;
}
