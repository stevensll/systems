#include "euler.h"
#include <stdio.h>

int main(){
    printf("Sum of first 1000 multiples of three or five: %d\n", three_five(1000));
    printf("Smallest multiple of every number from 1-20: %d\n", smallest_multiple(20));
    printf("Difference between the sum of the squares of first 100 numbers and square of sum: %d\n", (int)sum_square_difference(100));
    return 0;
}
