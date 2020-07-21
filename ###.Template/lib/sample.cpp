#include <iostream>

#include "sample.h"

using namespace std;

template <typename T>
void print_line(T t)
{
    cout << t << endl;
}

template void print_line<int>(int);
template void print_line<char const*>(char const*);