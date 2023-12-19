#include <iostream>

int main() {
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i * i;
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    std::cout << "Сумма элементов массива: " << sum << std::endl;

    delete[] arr;

    return 0;
}