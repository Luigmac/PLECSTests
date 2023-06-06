
#include "Transformations.h"
#include "math.h"

const float MATH_SQRT3_2 = 1.7320508f / 2.0f;  //   = sqrt(3)/2




void Transform_abc2AB(Transform *T, float coef)
{
    T->alpha = coef * (T->a - 0.5f * T->b - 0.5f * T->c);
    T->beta =  coef * (MATH_SQRT3_2 * T->b - MATH_SQRT3_2 * T->c);
}