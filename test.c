#include "cheap.h"

int main(int argc, char **argv)
{
    cVal *a = createVal(5.0);
    cVal *b = createVal(2.0);
    cVal *c = addVal(a, b);
    printf("Hello, %.2f!", c->Value);
}