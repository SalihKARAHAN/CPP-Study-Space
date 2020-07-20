#include "selection_sort.h"

#include <iostream>

#include "..\..\sort.h"
// #include "..\..\..\..\lib\arrays.h"
#include "..\..\..\..\lib\arrays.h"

using namespace std;

namespace sort_selection
{
    void sort_ascending(int arr[]);
    void sort_descending(int arr[]);
        //
        // https://stackoverflow.com/questions/22898818/not-declared-in-this-scope-and-no-declarations-were-found-by-argument-dependen
        // This link is for below error message!
        // main.cpp:24:78:   required from here
        // selection_sort.cpp:16:27: error: 'sort_ascending' was not declared in this scope, and no declarations were found by argument-dependent lookup at the point of instantiation [-fpermissive]
        //             sort_ascending(arr);
        //     void sort_ascending(T arr[])
        //         ^~~~~~~~~~~~~~
        // template <typename T>
        // void sort_ascending(T arr[]);

        // template <typename T>
        // void sort_descending(T arr[]);

        // template <typename TArrayType>
        void sort_array(int arr[], SORT_KIND sort_kind)
    {
        if (sort_kind == ASCENDING)
        {
            sort_ascending(arr);
        }
        else
        {
            sort_descending(arr);
        }
    }

    // template <typename T>
    void sort_ascending(int arr[])
    {
        int array_length = get_size(arr);
        int selected_index, control_index;
        int selected, control;
        // ! How I can compare two same generic type with each other?
        // * https://stackoverflow.com/a/13654360 🤪
        for (int i = 0; i < array_length; i++)
        {
            cout << "========= STEP " << i << " =========" << endl;
            selected_index = i;
            selected = arr[i];
            cout << "Selected -> " << selected_index << " = " << selected << endl;
            for (int j = i + 1; j < array_length; j++)
            {
                cout << "======= SUB STEP " << i << " =======" << endl;
                control_index = j;
                control = arr[j];
                cout << "Compared -> " << control_index << " = " << control << endl;
                if (control < selected)
                {
                    selected_index = control_index;
                    selected = control;
                }
            }
        }
    }

    // template <typename T>
    void sort_descending(int arr[])
    {
    }
} // namespace sort_selection