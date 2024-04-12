#pragma once

#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class HeapSorter {
private:
    static vector<int> generateRandomIntegers();

public:
    static vector<int> makeHeap();
    static vector<int> sortRandomIntegers();
  
};
