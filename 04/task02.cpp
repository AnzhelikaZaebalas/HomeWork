#include <iostream>

int main() {
    const int SIZE = 20;
  
    int arr[SIZE]{};
  
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 2 * i + 1;
    }

    int* ptr = arr;
    for (int i = 0; i < 20; i++) {
        std::cout << *ptr << " ";
        
        if ((i + 1) % 5 == 0)
            std::cout << std::endl;

        ptr++;
    }

    ptr--;
    std::cout << "\nReverse order:\n";
    for (int i = 0; i < 20; i++) {
        std::cout << *ptr << " ";
        
        if ((i + 1) % 5 == 0)
            std::cout << std::endl;

        ptr--;
    }
}