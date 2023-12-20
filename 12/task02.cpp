#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
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
    
    selectionSort(arr, size);

    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;

    return 0;
}