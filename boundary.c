#include<stdio.h>
int main()
{
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int c=4,r=4,n=4;
	printf("Boundary traversal\n");
	for(int i=0;i<c;i++)
	{
		printf("%d ",arr[0][i]);
	}								 	
	for(int i=1;i<r;i++)				
	{									
		printf("%d ",arr[i][n-1]);		
	}									
	for(int i=c-2;i>=0;i--)             
	{
		printf("%d ",arr[n-1][i]);
	}
	for(int i=r-2;i>=1;i--)
	{
		printf("%d ",arr[i][0]);
	}
	printf("\n\n");
	
}