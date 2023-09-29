#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Sort the array in ascending order using a lambda function
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b; // Sort in ascending order
    });

    std::cout << "Sorted in ascending order: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using a lambda function
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b; // Sort in descending order
    });

    std::cout << "Sorted in descending order: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
