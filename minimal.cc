#include <iostream>
#include <algorithm>

struct AStruct
{
    static const int M = 10;
};

int main(int argc, char** argv)
{
    // doesn't work
    std::cout << std::max(1, AStruct::M) << std::endl;
    // does work
    // std::cout << std::max(1, (int) AStruct::M) << std::endl;
}
