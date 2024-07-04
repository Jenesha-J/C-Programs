#include<stdio.h>
#include<string.h>

void reversewd(char *b,char *l)
{
	while(b<l)
	{
	char temp=*b;
	*b++ = *l;
	*l-- =temp;
}
}
void reversestr(char *s)
{
	int start=0;
	int n=strlen(s);
	for(int i=0;i<=n;i++)
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			if(start!=0 && i!=n)
			{
				reversewd(s+start,s+i-1);
			}
			start =i+1;
		}
		
	}
}
int main()
{
	char a[100];
	fgets(a,100,stdin);
	reversestr(a);
	printf("%s",a);
}