#include <iostream>

int main5() {
    int a = 0;
    int b = 0;
    char p;
    char q;
    char array[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
    int array2[] = { 3, 1, 4, 1, 5, 9 };

    std::cin >> p >> q;

    for (int i = 0; i < sizeof(array); i++) {
        if (array[i] == p) {
            a = i;
        }
        if (array[i] == q) {
            b = i;
        }
    }

    int sum = 0;
    int start = 0;
    int end = 0;

    if (a > b) {
        start = b;
        end = a - 1;
    }
    else if (a < b) {
        start = a;
        end = b - 1;
    }

    for (int j = start; j <= end; j++) {
        sum += array2[j];
    }

    std::cout << sum << std::endl;

    return 0;
}
