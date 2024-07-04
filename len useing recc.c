#include<stdio.h>
#include<string.h>
int findlength(char *s)
{
	if(*s=='\0')
		return 0;
	return 1+ findlength(s+1);
}

int main()
{
	char st[100];
	gets(st);
	int len=findlength(st);
	printf("%d",len);
	
}