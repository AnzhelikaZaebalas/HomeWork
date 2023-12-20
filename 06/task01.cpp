#include <iostream>
#include <string>

int main() {
    std::string strings[2];
    int stringLengths[2];

    for (int i = 0; i < 2; ++i) {
        std::cout << "Введите строку " << i + 1 << ": ";
        std::cin >> strings[i];
        stringLengths[i] = strings[i].length();
    }

    std::cout << "Количество символов в каждой строке:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "Строка " << i + 1 << ": " << stringLengths[i] << std::endl;
    }

    std::cout << "Введенные строки в обратном порядке:" << std::endl;
    for (int i = 1; i >= 0; --i) {
        for (int j = strings[i].length() - 1; j >= 0; --j) {
            std::cout << strings[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}