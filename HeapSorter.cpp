#include "HeapSorter.h"
#include <iostream>
using namespace std;

vector<int> HeapSorter::generateRandomIntegers() {
    // Create a random number generator engine
    // Random_device is a non-deterministic random number generator

    random_device rd;
    // mt19937 is a random number engine based on the Mersenne Twister algorithm
    // It's seeded with the random device rd, ensuring different results each time the program runs
    mt19937 gen(rd());

    // uniform_int_distribution is a random number distribution that produces integers
    // uniformly distributed in the specified range [1, 100]
    uniform_int_distribution<> dis(1, 100);

    // Create a vector to store the generated random integers
    vector<int> numbers;
    // Generate 50 random integers and store them in the vector
    for (int i = 0; i < 50; ++i) {
        // Generate a random integer using the distribution dis and the random number engine gen
        int random_number = dis(gen);

        // Add the generated random number to the vector
        numbers.push_back(random_number);
    }

    return numbers;
}



vector<int> HeapSorter::sortRandomIntegers() {
    vector<int> numbers = generateRandomIntegers();

    // Step 2: Create a max heap
    make_heap(numbers.begin(), numbers.end());

    // Step 3: Sort the max heap
    sort_heap(numbers.begin(), numbers.end());

    return numbers;
}