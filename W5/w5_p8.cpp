#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    cout << "Enter number of elements in first array: ";
    cin >> n1;

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter number of elements in second array: ";
    cin >> n2;

    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    // Merge arrays
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    cout << "Merged sorted array:\n";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}

