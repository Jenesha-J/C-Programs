//harshad's number
// num=21  sum =2+1 =3   21/3 ==0 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int num=n;
	int sum=0;
	while(num!=0)
	{
		sum+= num%10;
		num=num/10;
	}
	if(n%sum==0)
	{
		printf("%d is a harshad number",n);
	}
	else{
		printf("%d is not a harshad number",n);
	}
}