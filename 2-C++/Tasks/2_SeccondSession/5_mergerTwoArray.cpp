#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> mergeTwoArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;

    // Merge the two input vectors into mergedArray
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(mergedArray));

    // Sort the mergedArray
    //std::sort(mergedArray.begin(), mergedArray.end());

    return mergedArray;
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7};
    std::vector<int> arr2 = {2, 4, 6, 8};

    // Call the mergeTwoArrays function
    std::vector<int> mergedArray = mergeTwoArrays(arr1, arr2);

    // Print the merged and sorted array
    std::cout << "Merged and Sorted Array: ";
    for (const auto& num : mergedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
