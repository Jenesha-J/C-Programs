//Friendly pair

/* Check if (Sum of divisors of num1)/num1 = (Sum of divisors of num2)/num2 holds true or not
If same then print that they are friendly pairs */

#include <stdio.h>

int getDivisorsSum(int num){
    
    int sum = 0;
    
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}

int main ()
{
    int num1 = 6, num2 = 28;
    
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);
    
    if(sum1/num1 == sum2/num2)
        printf("(%d, %d) are friendly pairs", num1, num2);
    else
        printf("(%d, %d) are not friendly pairs", num1, num2);

    
}
// Time complexity: O(N)
// Space complexity: O(1)