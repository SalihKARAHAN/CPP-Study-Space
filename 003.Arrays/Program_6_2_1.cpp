#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Hello Arrays" << endl;
    
    // object initialize sırasında eksik veri girilen dizi 1
    {
        cout << "nubmers[5] = {9, 15, 79}" << endl;
        int nubmers[5] = {9, 15, 79};
        for (int i = 0; i < 5; i++)
        {
            cout << "number[" << i << "]: " << nubmers[i] << endl;
        }

        cout << endl;
    }

    // object initialize sırasında eksik veri girilen dizi 2
    {
        cout << "nubmers[5] = {8}" << endl;
        int nubmers[5] = {8};
        for (int i = 0; i < 5; i++)
        {
            cout << "number[" << i << "]: " << nubmers[i] << endl;
        }
        
        cout << endl;
    }

    return EXIT_SUCCESS;
}
