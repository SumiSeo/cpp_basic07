#include <iostream>
#include "Array.hpp"

int main()
{
    
    try
    {
       Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); ++i)
        {
            arr[i] = i + 1;
        }

        std::cout << "Array size: " << arr.size() << std::endl;

        for (unsigned int i = 0; i < arr.size(); ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
   catch (const std::exception& error)  
    {
        std::cerr << error.what() << std::endl;
    }
}