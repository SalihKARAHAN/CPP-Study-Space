#include <iostream> // input output stream;
#include <string.h>

#include "lib\contants.h"
#include "lib\sum.h"

using namespace std; // use for cout and cin keywords;

void test_function(int argc, char const *argv[])
{
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    cout << "Hello Functions" << endl;
    int numbers[4] = {1, 2, 3, 4};
    int *number_ptr;
    number_ptr = numbers;
    int total = sum(4, number_ptr);
    cout << "Total: " << total << endl;

    int var1, *var1_ptr;
    var1 = 3;
    var1_ptr = &var1;

    cout << "Var: " << var1 << " - Address: " << var1_ptr << endl;
    cout << "Get value from pointer: " << *var1_ptr << endl;
    cout << "Get address from variable: " << &var1 << endl;

    return EXIT_SUCCESS;
}
