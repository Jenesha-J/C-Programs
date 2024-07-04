#include <stdio.h>  
#include <string.h>  
int main() {  
char password[] = "secret";  
char input[20];  
//dowhile
do {  
printf("Enter the password: ");  
scanf("%s", input);  
} while (strcmp(input, password) != 0); 
 
printf("Access granted!\n");  
return 0;  
} 