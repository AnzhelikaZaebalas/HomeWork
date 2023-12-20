#include <iostream>

struct Matrix
{
    int rows;
    int cols;
    int** data;
};

Matrix createMatrix(int rows, int columns)
{
    Matrix mat;
    mat.rows = rows;
    mat.cols = columns;
    mat.data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        mat.data[i] = new int[columns];
    }
    return mat;
}

void deleteMatrix(Matrix& mat)
{
    for (int i = 0; i < mat.rows; i++) {
        delete[] mat.data[i];
    }
    delete[] mat.data;
}

void printMatrix(const Matrix& mat)
{
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.cols; j++) {
            std::cout << mat.data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int rows, cols;
    setlocale(LC_ALL, "rus");
    std::cout << "Введите количество строк и столбцов матрицы: ";
    std::cin >> rows >> cols;

    Matrix mat = createMatrix(rows, cols);

    std::cout << "Введите значения элементов матрицы: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> mat.data[i][j];
        }
    }

    std::cout << "Матрица: " << std::endl;
    printMatrix(mat);

    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += mat.data[i][j];
        }
    }
    std::cout << "Сумма всех элементов матрицы: " << sum << std::endl;

    deleteMatrix(mat);

    return 0;
}