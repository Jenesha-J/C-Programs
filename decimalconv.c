/*#include <stdio.h>
// Function to find remainders in base b and print them recursively
void findrem(int n, int b)
{
    if (n < b)
    {
        if (n <= 9)
            printf("%d", n);
        else
            printf("%c", n + 87);
    }
    else
    {
        int rem = n % b;
        int quotient = n / b;
        
        findrem(quotient, b); // Recursive call
        
        if (rem <= 9)
            printf("%d", rem);
        else
            printf("%c", rem + 87);
    }
}

int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    
    if (n == 0)
        printf("0"); // Edge case: if n is 0, directly print 0
    
    findrem(n, b);
    
    printf("\n"); // Print a newline at the end
    return 0;
}

*/
#include<stdio.h>
int findrem(int n,int b)
{
	if(n>b)
	{
		int rem=n%b;
		n=n/b;
		findrem(n,b);
		if(rem<=9)
			printf("%d",rem);
		else 
		{
			printf("%C",rem+87);
		}
	}
	else if(n<b)
	{
		if(n<=9)
			printf("%d",n);
		else 
		{
			printf("%C",n+87);
		}
	}

}
int main()
{
	int n,b;
	scanf("%d %d",&n,&b);
	findrem(n,b);
}