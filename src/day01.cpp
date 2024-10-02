#include <chrono>
#include <iostream>
#include <vector>

#include "text_file.h"

int main() 
{
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();

    std::vector<int> lines;
    lines = readTextFile_asInt("../puzzle_input/day01.txt");

    bool breakOut = false;
    for (int index1 = 0; index1 < std::size(lines); index1 ++) 
    {
        int number1 = lines[index1];
        for(int index2 = index1 + 1; index2 < std::size(lines); index2 ++) {
            int number2 = lines[index2];
            if (number1 + number2 == 2020) 
            {
                std::cout << "The answer to puzzle 1 is: " << number1 * number2 << std::endl;
                breakOut = true;
                break;
            }
        }

        if (breakOut) 
        {
            break;
        }
    }

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "[µs]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - start).count() << "[ns]" << std::endl;   

    return 0;
}