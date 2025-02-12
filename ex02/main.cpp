#include <iostream>
#include "Array.hpp"

int main()
{
    
    try
    {
        Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); ++i)
            arr[i] = i + 1;

        std::cout << "Array size: " << arr.size() << std::endl;

        for (unsigned int i = 0; i < arr.size(); ++i)
            std::cout << arr[i] << " " << std::endl;

        Array<int> arr2 = arr;
        std::cout << "Array 2 size :" << arr2.size() << std::endl;
        std::cout << "Array 2[0] :" << arr2[0]<<std::endl;
        std::cout << "Array 2[1] :" << arr2[1]<<std::endl;
        std::cout << "Array 2[2] :" << arr2[2]<<std::endl;
        std::cout << "Array 2[3] :" << arr2[3]<<std::endl;
        std::cout << "Array 2[4] :" << arr2[4]<<std::endl;
        std::cout << "Array 2[5] :" << arr2[5]<<std::endl;
     
    }
   catch (const std::exception& error)  
    {
        std::cerr << error.what() << std::endl;
    }
}