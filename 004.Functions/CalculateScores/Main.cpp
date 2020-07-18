#include <iostream>

#include "lib\score_calculator.h"

using namespace std;

void print_console(string); // function declaration

int main(int argc, char const *argv[])
{
    print_console("Hello my basic function in cpp");
    cout << endl;

    float first_value = calculate::calculate_first_exam(34);
    float second_value = calculate::calculate_second_exam(87);
    float final_score = first_value + second_value;
    print_console("Final score is ");
    cout << final_score << endl;
    return EXIT_SUCCESS;
}


void print_console(string text){
    cout << text;
}

