#include <iostream>
#include "HeapSorter.h"
using namespace std;

int main() {
    // Call the HeapSorter class to sort 50 random integers
    
    vector<int> N1 = HeapSorter::sortRandomIntegers();

    cout << "Initial Max: " << N1.back() << " Initial Min: " << N1.front()<< endl;
    cout << endl;
    cout << endl;

    // Output the sorted integers
    
    cout << "Sorted numbers " <<endl;

    for (int num : N1) {
        
        cout << num << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    N1.pop_back();

    cout << "Numbers after Pop back " << endl;

    for (int num : N1) {

        cout << num << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    N1.push_back(200);


    cout << "Numbers after Push back 200" << endl;

    for (int num : N1) {

        cout << num << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
  

    push_heap(N1.begin(), N1.end());


    cout << "Numbers after Push heap" << endl;

    for (int num : N1) {

        cout << num << " ";
    }
    cout << endl;









    return 0;
}
