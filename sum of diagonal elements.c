/*Write a program that will print the sum of diagonal elements of a 10X10 matrix.
The program will take a total of 100 numbers as input (10 numbers will be input
per line and each number will be separated by a space).*/

#include<stdio.h>
int main()
{
	int sum=0;
	int a[10][10]={ {1,2,3,4,5,6,7,8,9,0},
				{0,1,2,3,4,5,6,7,8,0},
				{3,4,5,6,7,8,9,6,4,0},
				{2,3,4,5,6,7,8,9,3,2},
				{3,4,5,6,7,4,3,2,1,3},
				{3,4,5,6,2,4,4,2,4,6},
				{2,3,4,6,2,4,6,2,3,5},
				{2,3,5,6,2,4,6,2,3,5},
				{2,4,6,2,1,4,3,3,5,2},
				{3,3,5,2,4,6,2,1,4,6}};
	for(int i=0;i<10;i++)
	{
		sum+=a[i][i];
	}
	printf("sum is: %d",sum);
}