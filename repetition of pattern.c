//find the number of pattern repeated , pattern : 1[0]1 or 1[more 0's]1

#include <stdio.h>
#include <string.h>

int countPatternMatches(char *str) {
    int count = 0;
    int len = strlen(str);
    
    // Traverse the string
    for (int i = 0; i < len - 2; i++) {
        // Check if we have a pattern starting at position i
        if (str[i] == '1') {
            int j = i + 1;
            // Count the number of '0's
            while (j < len && str[j] == '0') {
                j++;
            }
            // Check if it ends with '1'
            if (j < len && str[j] == '1') {
                count++;
                // Move to the next character after the current pattern to avoid overlapping counts
                i = j-1;
            }
        }
    }
    
    return count;
}

int main() {
    char input1[] = "101absd10001";
    char input2[] = "10100001";
    
    printf("Output1: %d\n", countPatternMatches(input1));
    printf("Output2: %d\n", countPatternMatches(input2));
    
    return 0;
}
