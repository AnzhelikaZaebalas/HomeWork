#include <iostream>
#include <string>

std::string reverseString(const std::string& input) {
    std::string reversed;
    for (int i = input.length()-1; i >= 0; i--) {
        reversed += input[i];
    }
    return reversed;
}

int main() {
    std::string userInput;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    std::string reversedInput = reverseString(userInput);
    
    std::cout << "Reversed string: " << reversedInput << std::endl;

    return 0;
}