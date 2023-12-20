#include <iostream>

int main() {
    const int maxLanguages = 10;
    const int maxStringLength = 50;

    char languages[maxLanguages][maxStringLength] = {
        "C++",
        "Java",
        "Python",
        "JavaScript",
        "C#",
        "Ruby",
        "Go",
        "Swift",
        "PHP",
        "Rust"
    };

    for (auto language : languages) {
        std::cout << language << std::endl;
    }

    return 0;
}