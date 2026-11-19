#include <iostream>
using namespace std;

class pntr_obj{
	private:
		int roll_no;
		string name;
	
	public:
		void set_data(int r, string n){
			roll_no = r;
			name = n;
		}
		
		void print(){
			cout << "Object address (This Pointer): " << this;
			cout << "Roll No: " << roll_no << " Name: " << name << "\n"; 
		}
};

int main(){
	pntr_obj obj1, obj2, obj3;
	
	obj1.set_data(132, "Owaish");
	obj2.set_data(165, "Wazid");
	obj3.set_data(166, "Ruman");
	
	cout << "---Displaying obj information---";
	obj1.print();
	obj2.print();
	obj3.print();

	return 0;	
}
