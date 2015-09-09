#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    unsigned int value1, value2, sum; //unsigned is type specifier
    value1 = 33;
    value2 = 88;
    sum = value1 + value2;
    printf("The sum of %i and %i is %i :) \n", value1, value2, sum);
    return EXIT_SUCCESS; //Normally, when return 0, means there is no problem
}