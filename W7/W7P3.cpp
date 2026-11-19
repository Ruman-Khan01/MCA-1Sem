#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	
	cout << "Enter the number of elements: ";
	cin >> n;
	
	double arr[n];
	double *ptr = arr;
	double sum = 0, mean = 0, variance = 0, std_dev = 0;
	
	cout << "Enter" << n << "real number: ";
		cin >> *(ptr + i);
		sum += *(ptr + i);
	}
	mean = sum / n;
		
	for (int i = 0; i < n; i++){
		variance += pow(*(ptr + i) - mean, 2);	
	}
	
	variance /= n;
	std_dev = sqrt(variance);
	
	cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << std_dev << endl;
    
    return 0;
}
