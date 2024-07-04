//Alaphabet or not

#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(toupper(c) >=65 && toupper(c)<=90)
	{
		printf("An Alphabet");
	}
	else
	{
		printf("Not an alphabet");
	}
	return 0;
}