#include <iostream>

int main()
{
    const int SIZE = 20;
  
    int arr[SIZE]{};
  
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 2 * i + 1;
    }
  
    for (int j = 0; j < SIZE; j++) {
        std::cout << *(arr + j) << " ";
        if (((j + 1) % 5) == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << "\nReverse order:\n";
  
    for (int j = (SIZE - 1); j >= 0; j--) {
        std::cout << *(arr + j) << " ";
        if ((j % 5) == 0) {
            std::cout << std::endl;
        }
    }
}