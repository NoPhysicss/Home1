#include <iostream>
#include "Helpers.h"

int main()
{
    int a = 0;
    int b = 0;

    std::cout << "first num = ";
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "second num = ";
    std::cin >> b;
    std::cout << std::endl;

    int mul = sum(a, b);
    
    std::cout << "sum = " << mul;

    return 0;
}
