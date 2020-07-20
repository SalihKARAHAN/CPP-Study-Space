#include <iostream> 

#include "..\..\sort.h"
// #include "selection_sort.h"
#include "selection_sort.h"


using namespace std;

int main(int argc, char const *argv[])
{
    int integer_array[6];
    integer_array[0] = 29;
    integer_array[1] = 32;
    integer_array[2] = 4;
    integer_array[3] = 11;
    integer_array[4] = -5;
    integer_array[5] = 3;

    cout << "Sort Kind is " << sort::ASCENDING << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "array[" << i << "]= " << integer_array[i] << endl;
    }

    sort_selection::sort_array(integer_array, sort::SORT_KIND::ASCENDING);
    


    return 0;
}
