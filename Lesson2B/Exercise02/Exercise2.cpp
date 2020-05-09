//============================================================================
// Name        : Exercise8.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise 2 Lesson 3
//============================================================================

#include <iostream>
#include <vector>

using IntVector = std::vector<int>;
using IntVectorIter = std::vector<int>::iterator;

void printVector(IntVector& ary)
{
    std::cout << "Array is : ";
    for(IntVectorIter it{ary.begin()}; it != ary.end() ; ++it)
    {
        std::cout << *it << ",";
    }
    std::cout << "\n";
}

int main(int argc, char**argv)
{
    std::cout << "\n\n------ Exercise 2 ------\n";

    IntVector ary = {2,4,6,1,3,5};

    printVector(ary);

    std::cout << "Complete.\n";
    return 0;
}
