#include <iostream>
#include <cmath>

int main() {
	double num1, num2, result;
	char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter operator (+, -, *, /, %): ";
    std::cin >> op;

    bool valid = true;

    switch (op) {

        case '+': // Addition
            result = num1 + num2;
            break;
        case '-': // Subtraction
            result = num1 - num2;
            break;
        case '*': // Multiplication
            result = num1 * num2;
            break;
        case '/': // Division
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: division by zero!" << '\n';
                return 1;
            }
            break;
        case '%':// Modulo
            if (num2 != 0) {
                result = fmod(num1, num2);
            } else {
                std::cout << "Error: modulo by zero!" << '\n';
                return 1;
            }
            break;
        default:
            std::cout << "Invalid operator!" << '\n';
            valid = false;
    }

    if (valid) {
        std::cout << "Result: " << result << '\n';
    }

    return 0;
}