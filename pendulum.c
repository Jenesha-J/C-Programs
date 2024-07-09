#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void pendulumSort(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);
    int result[size];
    int mid = (size - 1) / 2;
    int left = mid, right = mid + 1;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            result[left--] = arr[i];
        } else {
            result[right++] = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int arr[] = {8, 4, 5, 7, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    pendulumSort(arr, size);

    printf("Pendulum sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
