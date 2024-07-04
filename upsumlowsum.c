#include<stdio.h>
int main()
{
	int a[3][3]={{6,5,4},{1,2,5},{7,9,7}};
	int upsum=0,lowsum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<=j)
			{
			upsum+=a[i][j];
			}
			if(j<=i)
			{
				lowsum+=a[i][j];
			}
		}
	}
	printf("Upper triangle sum = %d\n",upsum);
		printf("lower triangle sum = %d",lowsum);
}