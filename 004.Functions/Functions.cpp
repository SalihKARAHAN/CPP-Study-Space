#include <iostream> // input output stream;

#include "lib\contants.h"
#include "lib\sum.h"

using namespace std; // use for cout and cin keywords;

int main(int argc, char const *argv[])
{
    int numbers[4] = {1,2,3,4};
    int total = sum(4, numbers);
    cout << "Total: " << total << endl;
    
    return EXIT_SUCCESS;
}
