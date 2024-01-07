#ifndef CHEAP_H
#define CHEAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct cVal cVal;
struct cVal {
    float Value;
    cVal *child;
    cVal *parents[2];
};
void freeVal(cVal *a);
cVal *createVal(float Value);
cVal *addVal(cVal *a, cVal *b);
cVal *subVal(cVal *a, cVal *b);
cVal *mulVal(cVal *a, cVal *b);
cVal *divVal(cVal *a, cVal *b);

#endif