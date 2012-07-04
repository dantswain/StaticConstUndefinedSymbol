#include <iostream>
#include "shlib.h"

int main(int argc, char** argv)
{
    int x = 1;
    int y = MaxFunc(x);
    std::cout << "MaxFunc(" << x << ") = " << y << std::endl;
}
