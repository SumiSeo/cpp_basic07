#include <iostream>
#include "Iter.hpp"

void printNum(const int& n)  
{
    std::cout << n << std::endl;
}

void increment(int& n) 
{
    n++;
}



int main()
{
    int foo[5] = {1, 2, 3, 4, 5};  
    iter(foo, 5, printNum);  
    iter(foo, 5, increment);
    iter(foo, 5, printNum);  
}