#include<stdio.h>

int swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int sort012(int a[],int size)
{
	int l=0;
	int m=0;
	int h=size-1;
	while(m<=h)
	{
		switch(a[m])
		{
			case 0:
				swap(&a[l++],&a[m++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(&a[m],&a[h--]);
		}
	}
}

int print(int a[],int len)
{
	for(int i=0;i<len;i++)
	{
		printf("%d,",a[i]);
	}
	
}
int main()
{
	int a[]={0,1,2,0,1,2};
	int size=sizeof(a)/sizeof(int);
	sort012(a,size);
	print(a,size);
}