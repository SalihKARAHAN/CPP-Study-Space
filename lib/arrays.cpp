#include "arrays.h"

// template <typename TArrayType>
int get_size(int arr[])
{
    int size_of_type = sizeof(arr[0]);
    // int size_of_array = sizeof(arr);
    //    ..\..\..\..\lib\arrays.cpp:10:31: warning: 'sizeof' on array function parameter 'arr' will return size of 'int*' [-Wsizeof-array-argument]
    //    int size_of_array = sizeof(arr);
    //                            ^
    // Yukarıdaki uyarıyı almamak için sizeof operatörüne pointer ver!
    int size_of_array = sizeof(&arr);
    int length = size_of_array / size_of_type;
    return length;
}