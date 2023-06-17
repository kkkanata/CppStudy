#include <iostream>

int main11(void) {
    int pitcharray[50][10];
    int sumarray[10];

    for (int j = 0; j < 10; j++) {
        sumarray[j] = 100;
    }

    int n, m;
    std::cin >> n >> m;

    for (int i = 0; i < n; i++) {
        std::cin >> pitcharray[i][0];
    }

    for (int j = 1; j < m + 1; j++) {
        for (int i = 0; i < n; i++) {
            std::cin >> pitcharray[i][j];
        }
    }

    for (int j = 1; j < m + 1; j++) {
        for (int i = 0; i < n; i++) {
            int w = std::abs(pitcharray[i][1] - pitcharray[i][j]);
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
    }

    int max = 0;
    for (int j = 0; j < m; j++) {
        if (sumarray[j] > max) {
            max = sumarray[j];
        }
    }

    std::cout << max << std::endl;
    return 0;
}