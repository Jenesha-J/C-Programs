/*Given an array arr[] of n integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Examples:

Input: arr[] = {1,2,3,-2,5}, n = 5
Output: 9
Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.   */


#include <stdio.h>

void maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int curr_max = arr[0];
    int start = 0;
    int end = 0;
    int temp_start = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > curr_max + arr[i]) {
            curr_max = arr[i];
            temp_start = i;
        } else {
            curr_max = curr_max + arr[i];
        }

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
            start = temp_start;
            end = i;
        }
    }

    printf("Maximum contiguous subarray sum is %d\n", max_so_far);
    printf("Subarray: ");
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxSubArraySum(arr, n);
    return 0;
}
