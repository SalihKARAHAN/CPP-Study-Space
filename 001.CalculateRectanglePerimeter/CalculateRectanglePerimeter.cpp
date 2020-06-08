#include <iostream>

#include "constants.h"
#include "another.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int long_edge, short_edge = 0;

    cout << "Enter to long edge value:" << endl;
    cin >> long_edge;
    cout << "Enter to short edge value:" << endl;
    cin >> short_edge;

    if (long_edge <= short_edge)
    {
        int error_code = -1;
        errno = error_code;
        cout << "Error::" << error_code << " The long edge value cannot be less or equal than short edge value" << endl;
        return errno;
    }

    int total_edge_value = (long_edge + short_edge) * 2;
    cout << endl
         << "The total perimeter length of your rectangle is :" << total_edge_value << endl;

    return EXIT_SUCCESS;
}
