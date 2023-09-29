#include <iostream>
#include <vector>
#include <algorithm> // for std::remove

// Function to delete a number from the array
void deleteNumber(std::vector<int>& numbers, int target) {
    // Use std::remove to move elements to be deleted to the end of the vector
   std::vector<int>::iterator newEnd = std::remove(numbers.begin(), numbers.end(), target);


    // Print the values from the beginning to newEnd
    std::cout << "Values from beginning to newEnd: ";
    for (auto it = numbers.begin(); it != newEnd; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    // Erase the removed elements from the vector
    numbers.erase(newEnd, numbers.end());
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    int target;
    std::cout << "Enter a number to delete from the array: ";
    std::cin >> target;

    // Call the function to delete the number from the vector
    deleteNumber(numbers, target);

    // Print the modified vector
    std::cout << "Array after deleting " << target << ": ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
