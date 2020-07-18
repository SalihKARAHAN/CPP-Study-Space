
#include <iostream>
#include <cstddef>

using namespace std;

int main(int argc, char const *argv[])
{
    {
        char name_characters[5];
        int size = sizeof(name_characters);
        int size_of_one = sizeof(name_characters[0]);
        int length = size / size_of_one;

        cout << "   Size: " << size << endl;
        cout << "   One : " << size_of_one << endl;
        cout << "Length : " << length << endl;
    }

    {
        int indexes[5];
        int size = sizeof(indexes);
        int size_of_one = sizeof(indexes[0]);
        int length = size / size_of_one;

        cout << "   Size: " << size << endl;
        cout << "   One : " << size_of_one << endl;
        cout << "Length : " << length << endl;
    }

    {
        int arr[4] = {0};
        for (int i = 0; i < 4; i++)
        {
            cout << "arr[" << i << "]" << i << endl;
        }        
    }
    
    return EXIT_SUCCESS;
}
