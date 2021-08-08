#include<iostream>
using namespace std;

int main() {
	int n, array[50], target;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> array[i];
	}
	cin >> target;
	cout << endl;

	int j = 0;
	for (int i = 0; i<n; i++) {
		if (array[i] != target) {
			array[j] = array[i];
			cout << array[j];
			j++;
		}
	}
}

