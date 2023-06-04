#include <iostream>
using namespace std;
int main(void) {
	int n = 0; int k = 0;
	string array1[100];
	int array2[100];
	int min = 1000000000; int min2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array1[i] >> array2[i];
		if (min > array2[i]) {
			min = array2[i];
			min2 = i;
		}
	}for (int j = 0; j < n; j++) {
		if (min2 + j >= n) {
			cout << array1[k] << endl;
			k++;
		}
		else {
			cout << array1[j + min2] << endl;
		}

	}

	return 0;
}//ちゃんと最初から最後まで丁寧にトレースしなければならない、もちろん値も入れて静的解析。問題文は最後まで読む。
//変数の上限、入力される値の上限も見なくてはならない。