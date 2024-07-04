//toggle letters
#include <stdio.h>
#include<string.h>

int lengthofstring(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
  
    
}

int main()
{
    char str[50];
    printf("Enter a string");
    scanf("%[^\n]s",str);
    int res=lengthofstring(str);
    printf("length is %d\n",res);
    for(int i=0;i<res;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
    }
    printf("After Toggled : %s",str);

    return 0;
}