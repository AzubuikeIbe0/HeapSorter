#include "HeapSorter.h"

std::vector<int> HeapSorter::sortRandomIntegers() {
    // Step 1: Generate 50 random integers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    std::vector<int> numbers;
    for (int i = 0; i < 50; ++i) {
        numbers.push_back(dis(gen));
    }

    // Step 2: Create a max heap
    std::make_heap(numbers.begin(), numbers.end());

    // Step 3: Sort the max heap
    std::sort_heap(numbers.begin(), numbers.end());

    return numbers;
}
