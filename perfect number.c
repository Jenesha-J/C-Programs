//perfect number

#include<stdio.h>
int isperfect(int num);
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(isperfect(num))
	{
		printf("%d is a perfect number",num);
	}
	else
	{
		printf("%d is not a perfect number",num);
	}
	return 0;
}


int isperfect(int num)
{
	int sum=0;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i == 0)
		{
			sum += i;
		}
	}
	if(num==sum)
	{
		return 1;
	}
	else{
		return 0;
	}
}