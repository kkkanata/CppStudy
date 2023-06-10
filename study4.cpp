#include <iostream>
using namespace std;
int main(void) {
	int a = 0; int b = 0;
	char p; char q;
	char aray[7] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int aray2[6] = { 3, 1, 4, 1, 5, 9 };
	cin >> p >> q;
	for (int i = 0; i < sizeof(aray); i++) {
		if (aray[i] == p) {
			a = i;
		}
		if (aray[i] == q) {
			b = i;
		}
	}
	int c = 0; int sum = 0; int w = 0;
	if (a > b) {
		w = a - 1;
		c = b;
	}
	else if (a < b) {
		w = b - 1;
		c = a;
	}for (int j = c; j <= w; j++) {
		sum += aray2[j];
	}
	cout << sum << endl;
	return 0;
}//C³‚³‚ê‚½³‚µ‚¢ƒvƒƒOƒ‰ƒ€
