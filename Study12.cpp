#include <iostream>
using namespace std;
int main() {
	int n = 0;
	char sarray[50];
	char sarray2[100];
	cin >> n;
	cin >> sarray;
	for (int i = 0; i < 2; i++) {
		int w = 0;
		for (int j = 0; j < n * 2; j += 2) {
			if (i == 0) {
				sarray2[j] = sarray[w];
			}
			else {
				sarray2[j + 1] = sarray[w];
			}
			w++;
		}
	}
	for (int i = 0; i < n * 2; i++) {
		cout << sarray2[i];
	}
	return 0;
}