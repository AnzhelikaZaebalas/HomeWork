#include <iostream>

void sortRow(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
    }
}

const int rows = 4;
const int cols = 3;
void sort2DArrayRowByRow(int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        sortRow(arr[i], cols);
    }
}
int main() {
    int arr[rows][cols] = {{7, 5, 2},
                           {6, 3, 0}, 
                           {9, 17, 1},
                           {8, 4, 34}};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Исходный массив: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    sort2DArrayRowByRow(arr);

    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}