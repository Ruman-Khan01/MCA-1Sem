#include <iostream>
using namespace std;

class Student {
    int rollNo;

public:
    Student(int n) {
        rollNo = n;
    }

    // Returns the pointer to the current object
    Student* getObject() {
        return this;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student s(166);

    // Get the pointer to object using this pointer
    Student* ptr = s.getObject();

    // Access the object through the returned pointer
    ptr->display();

    return 0;
}

