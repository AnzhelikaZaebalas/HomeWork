#include <iostream>
#include <string>

int main() {
    const int b = 10;
    std::string a[b] = {
        "bool",
        "int",
        "unsigned",
        "long",
        "long long",
        "char",
        "float",
        "double",
        "long double",
        "std::string"
    };

    for (int i = 0; i < b; i++) {
        std::cout << a[i]<< std::endl;
    }
    return 0;
}