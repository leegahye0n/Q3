#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum = 0;
	cin >> a >> b;
	cout << "N ���� " << a << ", M ���� " << b;

	if (a < b) {
		for (int i = a; i <= b; i++)
			sum += i;
	}
	else
		for (int i = b; i <= a; i++)
			sum += i;
	
	cout << "\n" << sum;

	return 0;
}