#include <iostream>
#include <algorithm>


bool searchNumber(const int numbers[],int size ,int target)
{
  return  std::find(numbers,numbers+size,target) !=numbers+size;
}

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    int target;
    std::cout << "Enter a number to search in the array: ";
    std::cin >> target;

    if (searchNumber(numbers, size, target)) {
        std::cout << "Number " << target << " found in the array." << std::endl;
    } else {
        std::cout << "Number " << target << " not found in the array." << std::endl;
    }

    return 0;
}
