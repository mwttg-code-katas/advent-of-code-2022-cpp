#include <iostream>
#include <vector>

#include "text_file.h"

int main() 
{
    std::vector<std::string> lines;
    lines = readTextFile("../puzzle_input/day01.txt");

    for (std::string line : lines) {
        std::cout << line << std::endl;
    }


    return 0;
}