#include <iostream>
#include <algorithm>

class A
{
public:
    static const int X = 10;
    static int getX(){return 10;};
};

// will make the first case work
// const int A::X;

int main(int argc, char** argv)
{
    // don't work
    std::cout << std::max(1, A::X) << std::endl;
    // std::cout << std::max<int>(1, A::X) << std::endl;
    
    // do work
    // std::cout << std::max(1, (int) A::X) << std::endl;
    // std::cout << A::X << std::endl;
    // std::cout << std::max(1, A::getX()) << std::endl;        
    // std::cout << A::getX() << std::endl;    
}
