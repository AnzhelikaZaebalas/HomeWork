#include <iostream>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
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
    
    insertionSort(arr, size);
    
    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;

    return 0;
}