#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr;

    ptr = arr;

    cout << "Enter 5 elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> *ptr;
        ptr++;
    }

    ptr = arr;

    cout << "Array elements are:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}

