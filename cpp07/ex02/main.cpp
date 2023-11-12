#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
		std::cout << "index:		" << i << "nums:		" << numbers[i] << "	mirror:		" << mirror[i] << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // try
    // {
    //     std::cout << numbers[0] << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
	
    delete [] mirror;//
    return 0;
}

// int main ( void )
// {
// 	int c;
// 	Array<int> numbers(5);
// 	Array<char> cahra(5);
	
// 	c = 'a';
// 	for(int i = 0; i < 5; i++)
// 	{
// 		cahra[i] = c;
// 		numbers[i] = (char)c;
// 		c++;
// 	}
// 	try
//     {
// 		for(int i = 0; i < 5; i++)
// 		{
// 			std::cout << numbers[i] << std::endl;
// 			std::cout << cahra[i] << std::endl;
// 		}
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	try
// 	{
// 		std::cout << cahra[6] << std::endl;
// 		// std::cout << cahra[-6] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	return (0);
// }