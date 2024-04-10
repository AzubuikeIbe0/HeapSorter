#include <iostream>
#include "HeapSorter.h"

int main() {
    // Call the HeapSorter class to sort 50 random integers
    std::vector<int> sortedNumbers = HeapSorter::sortRandomIntegers();

    // Output the sorted integers
    std::cout << "Sorted numbers: ";
    for (int num : sortedNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
