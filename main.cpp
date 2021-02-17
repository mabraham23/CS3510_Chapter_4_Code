#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <fstream>
#include "binary_heap.h"


void testBinaryHeap() {
    // vector to hold element objects for creating the heap
    std::vector<Element> test{};

    // values for id and key
    std::vector<int> ids{1,2,3,4,5,6,7,8};
    std::vector<int> keys{21,22,25,30,31,26,25,45};

    // fill the test vector
    for ( int i=0; i<keys.size(); i++){
        test.push_back(Element{ ids[i], keys[i]});
    }

    // Inialize binary heap with test data
    BinaryHeap heap(test);

    // output the heaps values    
    std::cout << heap << std::endl;
}

int main( int argc, char const* argv[]) {
    testBinaryHeap();
    
    return 0;
}