//Automorphic number

// num =5 sq =25  last num of sq is equal to original number
//num =76 sq=(76)2 = 5776 (last two digits)
#include<stdio.h>

int isautomorphic(int num)
{
	int sq=num*num;
	while(num!=0)
	{
		if(num%10 != sq%10)
		{
			return 0;
		}
		num=num/10;
		sq=sq/10;
	}
	return 1;
}
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(isautomorphic(num))
	{
		printf("%d is a automorphic number",num);
	}
	else
	{
		printf("%d is not a automorphic number",num);
	}
	return 0;
}