#include <stdio.h>
#include <ctype.h>
// toupper/tolower function is available in ctype.h header file
int main() {

  char str[100];
  int vowels = 0, consonants = 0, digits = 0, whitespaces = 0, special = 0;

  // get full line of string input
  printf("Enter string: \n");
  fgets(str, sizeof(str), stdin);
  
  // can also use this instead of fgets
  // scanf("%[^\n]s",&str);

  // loop through each character of the string
  for (int i = 0; str[i] != '\0'; ++i) {

    // convert to uppercase
    str[i] = toupper(str[i]);

    // checking for a vowel
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {

      // increment value of vowels by 1
      vowels++;
    }

    // if its b/w A-Z and wasn't vowel then its a consonant
    else if ((str[i] >= 'A' && str[i] <= 'Z')) {
      consonants++;
    }

    // checking for a digit
    else if (str[i] >= '0' && str[i] <= '9') {
      digits++;
    }

    // checking for a whitespace
    else if (str[i] == ' ') {
      whitespaces++;
    }
  }

  printf("Total No. of Vowels: %d\n", vowels);
  printf("Total No. of Consonants: %d\n", consonants);
  printf("Total No. of Digits: %d\n", digits);
  printf("Total No. of White spaces: %d\n", whitespaces);

  return 0;
}