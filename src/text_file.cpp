#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "text_file.h"

std::vector<std::string> readTextFile(const std::string &filename)
{
    std::ifstream inFile(filename);

    std::string line;
    std::vector<std::string> lines;

    if (inFile.is_open())
    {
        while (std::getline(inFile, line))
        {
            lines.push_back(line);
        }

        inFile.close();
    } else {
        std::cout << "Error opening file." << std::endl;
    }

    return lines;
}