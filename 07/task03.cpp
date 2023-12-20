#include <iostream>

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int** sum(int a[3][3], int b[3][3]) {
    int** c = new int*[3];
    for (int i = 0; i < 3; i++) {
        c[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}

int main() {
    int a, b;
    double c, d;
    std::cout << sum(41, 193) << std::endl << sum(19.5849, 25.01) << std::endl;
    int aa[3][3] = {{8, 2, 14}, {0, 1, 75}, {19, 3, 6}};
    int bb[3][3] = {{100, 0, 0}, {45, 9, 1}, {11, 0, 23}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << aa[i][j] << " ";
        }
        if (i == 1)
            std::cout << "+ ";
        else
            std::cout << "  ";
        for (int j = 0; j < 3; j++) {
            std::cout << bb[i][j] << " ";
        }
        if (i == 1)
            std::cout << "= ";
        else
            std::cout << "  ";
        for (int j = 0; j < 3; j++) {
            std::cout << sum(aa, bb)[i][j] << " ";
        }
        std::cout << std::endl;
    }
}