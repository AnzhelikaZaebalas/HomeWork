#include "task04.h"
#include <iostream>

int fibNoRec(int n) {
    int a = 1, b = 1;
    if (n <= 2) {
        std::cout << 1;
        return 0;
    }
    for (int  i = 0; i < n - 2; i++) {
        int c = b;
        b = a + b;
        a = c;
    }
    return b;
}