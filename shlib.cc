#include <algorithm>
#include <iostream>

#include "shlib.h"

struct AStruct
{
    static const int M = 10;
};

int MaxFunc(int x)
{
#ifdef OPT_1

    std::cout << "Opt 1" << std::endl;
    const int M = 10;
    return x >= M ? x : M;
    
#elif defined(OPT_2)

    std::cout << "Opt 2" << std::endl;    
    return x >= AStruct::M ? x : AStruct::M;
    
#elif defined(OPT_3)
    
    std::cout << "Opt 3" << std::endl;
    return std::max(x, (int) AStruct::M);
    
#else
    
    std::cout << "Opt 4 (defuault)" << std::endl;
    return std::max(x, AStruct::M);    
    
#endif
}
