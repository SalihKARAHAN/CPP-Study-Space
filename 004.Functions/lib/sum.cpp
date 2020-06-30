#include <iostream>
#include "sum.h"


int sum(int number_count, int *ptr)
{
    int total = 0;
    for (int i = 0; i < number_count; i++)
    {
        int number = *(ptr + i);
        std::cout << "[" << i << "]=" << number << std::endl;
        total += number;
    }

    return total;
}