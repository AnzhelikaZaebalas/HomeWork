#include <iostream>

struct Matrix
{
    int rows;
    int cols;
    int** data;
};

Matrix createMatrix(int rows, int cols)
{
    Matrix mat;
    mat.rows = rows;
    mat.cols = cols;
    mat.data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        mat.data[i] = new int[cols];
    }
    return mat;
}
