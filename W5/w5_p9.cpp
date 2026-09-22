#include <iostream>
using namespace std;

int main() {
    int n, arr[100], num;
    int frequency = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number whose frequency you want to find: ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            frequency++;
    }

    cout << "Frequency of " << num << " = " << frequency;

    return 0;
}

