#include <iostream>

int main() {
    const int maxLength = 100;
    char input[maxLength];

    std::cout << "Введите строку: ";
    std::cin.getline(input, maxLength);

    int count = 0;
    while (input[count] != '\0') {
        count++;
    }

    std::cout << "Количество символов: " << count << std::endl;
    std::cout << "Строка в обратном порядке: ";
    for (int i = count - 1; i >= 0; i--) {
        std::cout << input[i];
    }
    std::cout << std::endl;

    return 0;
}