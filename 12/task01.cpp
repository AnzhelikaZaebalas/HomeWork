#include <iostream>

void bubblesort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {7, 5, 2, 0, 10, 41};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Исходный массив: " << std::endl;
     for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;
    
    bubblesort(arr, size);

    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;

    return 0;
}