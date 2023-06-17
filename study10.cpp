#include <iostream>
using namespace std;
int main10(void) {
	int pitcharray[50][10]; int sumarray[10];
	for (int j = 0; j < 10; j++) {
		sumarray[j] = 100;
		//sumarrayを初期化
	}
	int n = 0; int m = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> pitcharray[i][0];
		//0列目の要素に入力
	}
	for (int j = 1; j < n + 1; j++){
		for (int i = 0; i < m; i++) {
			cin >> pitcharray[i][j];
		}
		//0列目の要素以外に入力
	}
	int w = 0;
	for (int j = 1; j < n + 1; j++) {
		for (int i = 0; i < m; i++) {
			w = (pitcharray[i][0] - pitcharray[i][j] >= 0) ? (pitcharray[i][0] - pitcharray[i][j]) : (pitcharray[i][j] - pitcharray[i][0]);
			if (w <= 5) {
				break;
			}
			else if (w <= 10) {
				sumarray[j - 1] -= 1;
			}
			else if (w <= 20) {
				sumarray[j - 1] -= 2;
			}
			else if (w <= 30) {
				sumarray[j - 1] -= 3;
			}
			else {
				sumarray[j - 1] -= 5;
			}
		}
		//点数を算出
	}
	int max = 0;
	for (int j = 0; j < n; j++) {
		if (sumarray[j] > max) {
			max = sumarray[j];
		}
	}
	cout << max;
	return 0;

}//不明間違ったコード