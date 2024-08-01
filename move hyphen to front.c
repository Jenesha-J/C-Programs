//Move hyphen to front of string
//input a-bc-def--ghi
//output ----abcdefghi

#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    char newString[100];
    int hyphenCount = 0;
    int newIndex = 0;
    printf("Enter String: ");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '-')
            hyphenCount++;
    }
    for (int i = 0; i < hyphenCount; i++) {
        newString[newIndex++] = '-';
    }
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != '-') 
            newString[newIndex++] = s[i];
    }
    newString[newIndex] = '\0';
    printf("%s\n", newString);
}