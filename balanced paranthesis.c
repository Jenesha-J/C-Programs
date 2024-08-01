//balanced parenthesis
//input :((()()))
//output:Balanced
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	char stack[1000];
	int top=-1;
	printf("Enter String:");
	scanf("%s",s);
	int len=strlen(s);
	if(len%2!=0)
	{
		printf("Not Balanced");
		return 0;
	}
	for(int i=0;i<len;i++)
	{
		if(s[i]=='(')
		{
			stack[++top]='(';
		}
		else if(s[i]==')')
		{
			if(top>=0 && stack[top]=='(')
			{
				top--;
			}
			else
			{
				printf("Not Balanced");
				return 0;
			}
		}
	}
	if(top==-1) printf("Balanced");
	else printf("Not Balanced");
	return 0;
}