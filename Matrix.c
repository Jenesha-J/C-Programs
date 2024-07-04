#include<stdio.h>
int main()
{
	/*int n;
	printf("Enter a number");
	scanf("%d",&n);
	int arr[n][n];
	//get elements in matrix
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	*/
	int n=3;
	 int arr[3][3] = {
        { 9, 8, 7 },
        { 5, 4, 6 },
        { 1, 2, 3 }
    };

	//print the matrix
	printf("\n The matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//print the upper triangle of matrix
	printf("Upper Triangle \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
			{
				printf("%d ",arr[i][j]);
				
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	//print the diagonal elements
	
	printf("Diagonal Elemets \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d ",arr[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	//snake traversal
		// odd row left to right
		//even row right to left
	
	printf("The snake traversal \n");
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d ",arr[i][j]);
			}
		}
		else{
			for(int j=n-1;j>=0;j--)
			{
				printf("%d ",arr[i][j]);
			}
		}
	}
	printf("\n");
	
	//transpose of matrix
	
	int res[3][3];
	printf("\nThe transpose of a matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=arr[j][i];		// swapping elements above the diagonal elements with elemts below diagonal elements
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
	
	//print boundary elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1
                || j == n - 1)
                printf("%d ", arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
	printf("\n");
	int r=n;
	int c=n;
	
	
	//boundary traversal
	printf("Boundary traversal\n");
	for(int i=0;i<c;i++)
	{
		printf("%d",arr[0][i]);
	}								 	//  ->  ->  ->
	for(int i=1;i<r;i++)				//  1  2  3  4  |
	{									//  5   6  7  8  |
		printf("%d",arr[i][n-1]);		//  9  10  11 12 |
	}									// 13  14  15 16 |
	for(int i=c-2;i>=0;i--)             //    <-   <-
	{
		printf("%d",arr[n-1][i]);
	}
	for(int i=r-2;i>=1;i--)
	{
		printf("%d",arr[i][0]);
	}
	printf("\n\n");
	
	//search for a element in matrix and print its index:
	int target = 2;
	int flag =0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==target)
			{
				printf("The element is found in %d th row %d th column",i,j);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("Element Not found");
	}
	printf("\n");
	
	//search an element in sorted matrix
	int mat[3][3]={
        { 5, 10, 15 },
        { 20, 25, 30 },
        { 35, 40, 45 }
    };
    int key=35;
    int row=3;
    int col=3;
    int i=0;
    int j=col-1;
    while(i<row && j>=0)
    {
    	if(mat[i][j]==key)
    	{
    		printf("Element found at position[%d][%d]",i,j);
    		break;
		}
		else if(key<mat[i][j])
		{
			j--;
		}
		else{
			i++;
		}
	}
	
}