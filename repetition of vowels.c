//find the most repeated vowel

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a string: ");
	scanf("%[^\n]%*c",&a);
	int len=strlen(a);
	printf("%d",len);
	int al=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<len;j++)
	{
		if (a[j]=='a'||a[j]=='A')
			al++;
		else if(a[j]=='e'||a[j]=='E')
			e++;
		else if(a[j]=='i'||a[j]=='I')
			i++;
		else if(a[j]=='o'||a[j]=='O')
			o++;
		else if(a[j]=='u'||a[j]=='U')
			u++;
		else
			continue;
	}
  
    int max = al;
    char maxVowel = 'a';
  
    if (e > max) 
	{
		max = e;
		maxVowel='e';
	}
    if (i > max) {
		max = i;
		maxVowel='i';
	}
    if (o > max) {
		max = o;
		maxVowel='o';
	}
    if (u > max) {
		max = u;
		maxVowel='u';
	}
    printf("\nMax is %d", max);
    printf("\nVowel is %c",maxVowel);
}