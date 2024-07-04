#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter number of rows:");
	scanf("%d",&row);
	printf("Enter number of columns:");
	scanf("%d",&col);
	int a[row][col],b[row][col],sum[row][col];
	printf("Enter elements of A matrix");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of B matrix");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of two matrix \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}