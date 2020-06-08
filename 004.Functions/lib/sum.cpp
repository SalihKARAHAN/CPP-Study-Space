#include <iostream>
#include "sum.h"

int sum(int number_count, int numbers[])
{
    int total = 0;
    for(int i = 0; i < number_count; i++)
    {
        total += numbers[i];
    }

    return total;
}