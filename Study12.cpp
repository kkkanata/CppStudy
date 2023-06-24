#include<iostream>
using namespace std;
int main(void) {
	int n = 0;
	cin >> n;
	int a[100000] = {};
	int sum[20000] = {};
	int i = 1;
	for (int j = 0; j < 7 * n; j++) {
		cin >> a[j];
		if (j < 7 * i) {
			sum[i - 1] += a[j];
		}
		else {
			i++;
			sum[i - 1] += a[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << sum[i] << " ";
		
	}
	return 0;

	//本日の教訓として何がネックになっているのか落ち着いて考えるべきだということ、
	//そして数学的知識が...
}