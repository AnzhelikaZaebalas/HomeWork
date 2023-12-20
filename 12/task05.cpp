#include <iostream>

const int rows = 4;
const int cols = 3;

void sort2DArrayColumnByColumn(int arr[rows][cols]) {
    for (int col = 0; col < cols; col++) {
        for (int i = 0; i < rows - 1; i++) {
            for (int j = 0; j < rows - i - 1; j++) {
                if (arr[j][col] > arr[j + 1][col]) {
                    int temp = arr[j][col];
                    arr[j][col] = arr[j + 1][col];
                    arr[j + 1][col] = temp;
                }
            }
        }
    }
}

int main() {
    int arr[rows][cols] = {{7, 5, 2},
                           {6, 3, 0}, 
                           {9, 17, 1},
                           {8, 4, 34}};

    std::cout << "Исходный массив: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    sort2DArrayColumnByColumn(arr);

    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}