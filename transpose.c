#include<stdio.h>
int main()
{
	int arr[4][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	int n=4;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=arr[j][i];	
			arr[j][i]=arr[i][j];
			arr[i][j]=temp;
		}
	}
	for(int i=0;i<n;i++)			//printing transpose matrix
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}