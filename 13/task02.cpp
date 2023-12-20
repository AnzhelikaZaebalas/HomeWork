#include "task02.h"

int pow(int ans, int n) {
    if (n <= 1) {
        return ans;
    } else {
        return ans * pow(ans, n - 1);
    }
}