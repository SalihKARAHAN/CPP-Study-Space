#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int students_scores[4][2] = {{15, 30}, {45, 77}, {38, 55}, {100, 90}};

    ;
    for (int i = 0; i < 4; i++)
    {
        int student_score[2] = {students_scores[i][0]};
        student_score[1] = students_scores[i][1];
        float average1 = student_score[0] * .25f + student_score[1] * .75f;

        int *another_arr = students_scores[i];
        float average2 = another_arr[0] * .25f + another_arr[1] * .75f;

        float average = students_scores[i][0] * 0.25f + students_scores[i][1] * .75f;

        if (average1 == average2)
            cout << i + 1 << ". student's score is " << average << endl;
    }

    return EXIT_SUCCESS;
}
