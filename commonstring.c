#include <stdio.h>
#include <string.h>

void findDifferingSubstrings(char str1[], char str2[]) {
    int len = strlen(str1);
    char temp1[100] = "";
    char temp2[100] = "";
    int k1 = 0, k2 = 0;
    
    for (int i = 0; i < len; i++) {
        if (str1[i] != str2[i]) {
            temp1[k1++] = str1[i];
            temp2[k2++] = str2[i];
        } else {
            if (k1 != 0) {
                temp1[k1] = '\0';
                temp2[k2] = '\0';
                printf("%s,%s\n", temp1, temp2);
                k1 = k2 = 0;
                temp1[0] = temp2[0] = '\0';
            }
        }
    }

    // Print any remaining differing characters
    if (k1 != 0) {
        temp1[k1] = '\0';
        temp2[k2] = '\0';
        printf("%s,%s\n", temp1, temp2);
    }
}

int main() {
    char str1[] = "abcddefghijk";
    char str2[] = "abefuefgopjk";

    findDifferingSubstrings(str1, str2);

    return 0;
}
