#include <iostream>
using namespace std;
int main(void) {
	char c[100];
	for (int j = 0; j < sizeof(c); j++) {
		c[j] = 0;
	}
	cin >> c;
	for (int i = 0; c[i] != 0; i++) {
		switch (c[i]) {
		case 'A':
			c[i] = '4';
			break;
		case 'E':
			c[i] = '3';
			break;
		case 'G':
			c[i] = '6';
			break;
		case 'I':
			c[i] = '1';
			break;
		case 'O':
			c[i] = '0';
			break;
		case 'S':
			c[i] = '5';
			break;
		case 'Z':
			c[i] = '2';
			break;
		}
	}for (int k = 0; c[k] != 0; k++) {
		cout << c[k];
	}
}