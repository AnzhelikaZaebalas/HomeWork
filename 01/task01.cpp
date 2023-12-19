#include <iostream>

int main() {
    int a[6]{};
    for (int i = 0; i < 6; i++) {
        std::cin >> a[i];
    }
    std::cout << std::endl;
    for (int i = 5; i >= 0; i--) {
        std::cout << a[i] << " ";
    }
}