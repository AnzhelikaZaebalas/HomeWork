#include <iostream>
#include <algorithm>

const int ROWS = 4;
const int COLS = 4;

void sort2DArraySnake(int arr[ROWS][COLS]) {
    for (int row = 0; row < ROWS; ++row) {
        if (row % 2 == 0) {
            std::sort(arr[row], arr[row] + COLS);
        }
        else {
            std::sort(arr[row], arr[row] + COLS, std::greater<int>());
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {{5, 2, 8, 1},
                           {9, 4, 3, 6},
                           {7, 0, 4, 2},
                           {8, 3, 5, 9}};

    std::cout << "Исходный массив: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    sort2DArraySnake(arr);

    std::cout << "Отсортированный массив: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}