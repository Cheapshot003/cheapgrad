#include "cheap.h"

cVal *createVal(float Value)
{
    cVal *target = malloc(sizeof(cVal));
    target->Value = Value;
    target->child = NULL;
    target->parents[0] = NULL;
    target->parents[1] = NULL;
    return (target);
}

cVal *addVal(cVal *a, cVal *b)
{
    cVal *c = createVal(0.0);
    c->Value = a->Value + b->Value;
    c->parents[0] = a;
    c->parents[1] = b;

    return (c);
}