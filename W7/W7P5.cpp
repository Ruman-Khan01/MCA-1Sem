#include <iostream>
using namespace std;

class Number{
	int value;
	
	public:
		Number(int v) {
			value = v;
		}
		
		Number& findGreater(Number &num){
			if (num.value > this->value){
				return num;
			}
			else {
				return *this;
			}
		}
		
		void display(){
			cout << value << endl;
		}
};

int main(){
	Number num1(45);
	Number num2(78);
	
	cout << "First Number: ";
	num1.display();
	
	cout << "Second Number: ";
	num2.display();
	
	Number &greatest = num1.findGreater(num2);
	
	cout << "\nThe greatest number is: ";
	greatest.display();
	
	return 0;
}
