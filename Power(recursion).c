//power using recursion
#include<stdio.h>
double power(double base,double exp)
{
	if(exp<0)
	{
		return(power(base,exp+1)/base);
	}
	else if(exp>0)
	{
		return(power(base,exp-1)*base);
	}
	else
	{
		return 1;
	}
}
int main()
{
	double base,exp,res;
	printf("Enter value of base and exponent");
	scanf("%lf %lf",&base,&exp);
	res = power(base,exp);
	printf("Result: %lf",res);
	return 0;
}