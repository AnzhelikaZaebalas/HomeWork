#include <iostream>
using namespace std;

void MetersToKilometers(int meters)
{
    int kilometers = meters / 1000;
    int meters2 = meters % 1000;
    cout << meters << " м = " << kilometers << " км и " << meters2 << " м." << endl;
}

int main() {
    int meters;
    setlocale(LC_ALL, "rus");
    cout << "Введите расстояние в метрах: ";
    cin >> meters;
    MetersToKilometers(meters);
    return 0;
}
