#include <iostream>
using namespace std;
int main3(void) {
	int n = 0; int m = 0;
	cin >> n;
	m = n % 5;
	n = n / 5 * 5;
	if (m > 2) {
		n += 5;
	}cout << n << endl;
	return 0;
}