#include "score_calculator.h"

const float FIRST_PERCENTAGE_VALUE = .25f;
const float SECOND_PERCENTAGE_VALUE = .25f;

// tanım yolu 1
float calculate::calculate_first_exam(float value)
{
    float first_value = value * FIRST_PERCENTAGE_VALUE;
    return first_value;
}

// tanım yolu 2
namespace calculate
{
    float calculate_second_exam(float value)
    {
        float second_value = value * SECOND_PERCENTAGE_VALUE;
        return second_value;
    }
} // namespace calculate