#include "task01.h"

int fact(int n, int ans) {
    if (n <= 1) {
        return ans;
    } else {
        return fact(n - 1, ans * n);
    }
}