//pascal's triangle

#include<stdio.h>

int printpascal(int i,int j)
{
	if(j==0||j==i)
		return 1;
	return (printpascal(i-1,j-1)+printpascal(i-1,j));
}
int main(){
	int n,i,j;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",printpascal(i,j));
		}
		printf("\n");
	}
}