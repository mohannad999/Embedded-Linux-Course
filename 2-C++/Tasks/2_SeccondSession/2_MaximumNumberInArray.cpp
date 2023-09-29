#include <iostream>
#include <algorithm> // Include the algorithm header

int main() {
    int numbers[] = {5, 2, 9, 1, 56, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    // Use std::max_element to find the maximum element in the array
    int* maxElement = std::max_element(numbers, numbers + size);

    if (maxElement != numbers + size) {
        std::cout << "The maximum number in the array is: " << *maxElement << std::endl;
    } else {
        std::cout << "Error occurred while finding the maximum number." << std::endl;
    }

    return 0;
}
