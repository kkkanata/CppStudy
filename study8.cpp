#include <iostream>

int main8() {
    int n, h, w, p, q;
    std::cin >> n >> h >> w >> p >> q;

    int seatsarray[100][100];
    int seatsarray2[100][100];

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            seatsarray[i][j] = 0;
            seatsarray2[i][j] = 200;
        }
    }

    for (int k = 0; k < n; k++) {
        int p1, q1;
        std::cin >> p1 >> q1;
        seatsarray[p1][q1] = 1;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (seatsarray[i][j] != 1) {
                int a = (p - i >= 0) ? (p - i) : (i - p);
                int b = (q - j >= 0) ? (q - j) : (j - q);
                seatsarray2[i][j] = a + b;
            }
        }
    }

    int min = 200;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (min > seatsarray2[i][j]) {
                min = seatsarray2[i][j];
            }
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (seatsarray2[i][j] == min) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }

    return 0;
}//ChatGPT‚ÉC³‚³‚ê‚½ƒR[ƒh
