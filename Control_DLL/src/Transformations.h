#pragma once



typedef struct
{
    float a;
    float b;
    float c;


    float alpha;
    float beta;

    float d;
    float q;
}Transform;


;
void Transform_abc2AB(Transform *T, float coef);