#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr;

    // Initialize pointer to the first element
    ptr = arr;

    // Read elements using pointer
    cout << "Enter 5 elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> *ptr;
        ptr++;
    }

    // Reset pointer to the first element
    ptr = arr;

    // Display elements using pointer
    cout << "The array elements are:" << endl;

    while (ptr < arr + 5) {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}

