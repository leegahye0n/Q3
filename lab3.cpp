#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum = 0;
	cin >> a >> b;
	cout << "N 값은 " << a << ", M 값은 " << b;

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