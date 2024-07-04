#include<stdio.h>
#include<string.h>

void revwd(char *b,char *l)
{
	char temp;
	while(b<l)
	{
		temp=*b;
		*b++ = *l;
		*l-- = temp;
	}
}

void reversestr(char *s)
{
	char *begin =s;
	char *temp=s;
	while(*temp)
	{
		if(*temp==' ')
		{
			revwd(begin,temp-1);
			begin=temp+1;
		}
		temp++;
	}
	revwd(begin,temp-1);
	revwd(s,temp-1);
}
int main()
{
	char a[100];
	fgets(a,50,stdin);
	printf("%s",a);
	reversestr(a);
	printf("%s",a);
}