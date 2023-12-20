#include <iostream>
#include <ctime>

void show2Arr(int** ArrForChange, int strAmount, int colAmount);
void fill2Array(int** ArrForChange, int strAmount, int colAmount);

int main() {
    setlocale(LC_ALL, "rus");

    int stringAmount = 0;
    int columnAmount = 0;

    std::cout << "Введите размерность двумерного массива!\n";
    std::cout << "Строк: ";
    std::cin >> stringAmount;
    std::cout << "Столбцов: ";
    std::cin >> columnAmount;

    int** ArrayForChange = new int*[stringAmount];
    for (int i = 0; i < stringAmount; i++) {
        ArrayForChange[i] = new int[columnAmount];
    }

    fill2Array(ArrayForChange, stringAmount, columnAmount);
    show2Arr(ArrayForChange, stringAmount, columnAmount);

    for (int i = 0; i < stringAmount; i++) {
        delete[] ArrayForChange[i];
    }
    delete[] ArrayForChange;

    return 0;
}

void show2Arr(int** ArrForChange, int strAmount, int colAmount) {
    std::cout << std::endl << std::endl;
    for (int i = 0; i < strAmount; i++) {
        std::cout << " |  ";
        for (int j = 0; j < colAmount; j++) {
            std::cout << ArrForChange[i][j] << "  ";
        }
        std::cout << "|" << std::endl;
    }
}

void fill2Array(int** ArrForChange, int strAmount, int colAmount) {
    srand(time(0));
    for (int i = 0; i < strAmount; i++) {
        for (int j = 0; j < colAmount; j++) {
            ArrForChange[i][j] = 10 + rand() % 41;
        }
    }
}