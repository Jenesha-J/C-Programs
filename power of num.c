//power of num without built in function

#include<stdio.h>

int main() 
{
    double base = 2.32;
    // exp has to be int value. But, can be neg/pos both
    int exp = -2;
    double result = 1.0;
    
    // if exponent is positive
    while (exp > 0) {
        result *= base;
        --exp;
    }
    
    // if exponent is negative
    while (exp < 0) {
        result /= base;
        ++exp;
    }
    
    printf("Answer = %lf", result);
    
    return 0;
}