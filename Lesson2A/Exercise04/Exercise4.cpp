//============================================================================
// Name        : Exercise4.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise 4 Lesson 2
//============================================================================

#include <iostream>
#include <string>

enum class Apple {
    RedDelicious,
    GoldenDelicious,
    Gala,
    Fuji,
    GrannySmith
};

enum class Orange {
    Navel,
    Valencia,
    Hamlin,
    ParsonBrown
};

void printOrange(int orange)
{
    std::cout << "printOrange => " << orange << "\n";
}

int main(int argc, char**argv)
{
    std::cout << "\n\n------ Exercise 4 ------\n";

    Apple apple = Apple::RedDelicious;
    Orange orange{Orange::Hamlin};

    std::cout << "apple = " << static_cast<int>(apple) << "\n";
    std::cout << "orange = " << static_cast<int>(orange) << "\n";

    apple = Apple::Gala;
    std::cout << "apple = " << static_cast<int>(apple) << "\n";

//    if (apple == orange)
//    {
//        std::cout << "apple == orange" << "\n";
//        orange = Orange::Valencia;
//    }
//    else
//    {
//        std::cout << "apple != orange" << "\n";
//    }

    printOrange(static_cast<int>(orange));
//    printOrange(apple);

    std::cout << "Complete.\n";
    return 0;
}

