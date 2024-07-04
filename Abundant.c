/*For user input num

Find all proper divisors of num
Calculate the sum of these divisors
If sum > num : Abundant number
Else, not an Abundant number  */


#include<stdio.h>
int main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int num=n;
	int sum=0;
	int i=1;
	while(i<=num/2)
	{
		if(num%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(sum > n)
	{
		printf("%d ia s Abundant number",n);
	}
	else
	{
		printf("%d ia s not Abundant number",n);
	}
}
