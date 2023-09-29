#include <iostream>

int main() {
    // Define a lambda function to calculate the square of a number
    auto square = [](int x) { return x * x; };

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate and print the square of the number using the lambda function
    std::cout << "Square of " << number << " is: " << square(number) << std::endl;

    return 0;
}
