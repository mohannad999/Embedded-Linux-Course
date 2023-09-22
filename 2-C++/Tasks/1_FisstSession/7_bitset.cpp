#include <iostream>
#include <bitset>

int main() {
    int decimalNumber;

    // Input the decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert the decimal number to binary using std::bitset
    std::bitset<32> binaryRepresentation(decimalNumber);

    // Display the binary representation
    std::cout << "Binary representation: " << binaryRepresentation << std::endl;

    // Convert the binary representation back to decimal
    // int decimalFromBinary = static_cast<int>(binaryRepresentation.to_ulong());
    int decimalFromBinary = (binaryRepresentation.to_ulong());
    // Display the decimal number obtained from binary
    std::cout << "Decimal representation: " << decimalFromBinary << std::endl;

    return 0;
}
