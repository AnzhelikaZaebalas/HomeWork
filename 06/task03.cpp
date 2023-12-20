#include <iostream>
#include <string>

int main() {
    std::string str[2];

    std::cout << "Enter first string: ";
    std::cin >> str[0];
    std::cout << "Enter second string: ";
    std::cin >> str[1];

    std::string a = str[0] + " " + str[1];
    std::cout << a << std::endl;

    return 0;
}