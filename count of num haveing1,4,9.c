//count of numbers having 1,4,9 as their digits between the range n,m inclusive
//input :100 200
//output:9

#include <stdio.h>
#include <stdbool.h>
bool isSpecial(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 1 && digit != 4 && digit != 9) return false;
        num /= 10;
    }
    return true;
}
int main() {
    int n, m;
    int count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    for (int i = n; i <= m; i++) {
        if (isSpecial(i))  count++;
    }
    printf("%d\n", count);
}