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
}//�����ƍŏ�����Ō�܂Œ��J�Ƀg���[�X���Ȃ���΂Ȃ�Ȃ��A�������l������ĐÓI��́B��蕶�͍Ō�܂œǂށB
//�ϐ��̏���A���͂����l�̏�������Ȃ��Ă͂Ȃ�Ȃ��B