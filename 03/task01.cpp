#include <iostream>
#include <cmath>

double f(double x) {
    return exp(x);
}

double left(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return h * sum;
}

double right(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return h * sum;
}

double middle(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x = a + (i + 0.5) * h;
        sum += f(x);
    }
    return h * sum;
}

int main() {
    double a = 0.0;
    double b = 1.0;

    double analyticalvalue = exp(b) - exp(a);
    std::cout << "Аналитическое значение: " << analyticalvalue << std::endl;

    for (int i = 1; i <= 9; i++) {
        int n = pow(10, i);

        double leftResult = left(a, b, n);
        double leftError = std::abs(leftResult - analyticalvalue);
        std::cout << "Количество разбиений: " << n << std::endl;
        std::cout << "Метод левых прямоугольников: " << leftResult << std::endl;
        std::cout << "Погрешность метода левых прямоугольников: " << leftError << std::endl;

        double rightResult = right(a, b, n);
        double rightError = std::abs(rightResult - analyticalvalue);
        std::cout << "Метод правых прямоугольников: " << rightResult << std::endl;
        std::cout << "Погрешность метода правых прямоугольников: " << rightError << std::endl;

        double middleResult = middle(a, b, n);
        double middleError = std::abs(middleResult - analyticalvalue);
        std::cout << "Метод центральных прямоугольников: " << middleResult << std::endl;
        std::cout << "Погрешность метода центральных прямоугольников: " << middleError << std::endl;

        std::cout << std::endl;
    }

    return 0;
}