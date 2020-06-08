#include <iostream> // input output stream;
#include <cstddef>

#include "lib\contants.h"

using namespace std; // use for cout and cin keywords;

int main(int argc, char const *argv[])
{
    int array_size;
    cout << "Enter the array size:" << endl;
    cin >> array_size;

    int integer_array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter the value of index " << i << endl;
        cin >> integer_array[i];
    }

    cout << "All indexes taken value by you!" << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << "Array[" << i << "] = " << integer_array[i] << endl;
    }

    int *array_addr = integer_array;
    cout << "Addresses: " << array_addr << endl;
    for (int j = 0; j < array_size; j++)
    {
        cout << &integer_array[j] << endl;
        cout << array_addr++ << endl;
    }

    cout << "RANDOM MEMORY READING.." << endl;

    int *address = array_addr;
    for (int i = 0; i < 100; i++)
    {
        cout << "Address(" << address << "): " << *address << endl;
        address++;
    }

    return EXIT_SUCCESS;
}
