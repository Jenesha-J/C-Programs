#include <stdio.h>

struct Interval {
    int start;
    int end;
};

void mergeIntervals(struct Interval intervals[], int size) {
    // Sort intervals by starting time
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (intervals[j].start > intervals[j + 1].start) {
                struct Interval temp = intervals[j];
                intervals[j] = intervals[j + 1];
                intervals[j + 1] = temp;
            }
        }
    }

    int index = 0; // Index for merged intervals
    for (int i = 1; i < size; i++) {
        if (intervals[index].end >= intervals[i].start) {
            if (intervals[index].end < intervals[i].end) {
                intervals[index].end = intervals[i].end;
            }
        } else {
            index++;
            intervals[index] = intervals[i];
        }
    }

    printf("Merged intervals: ");
    for (int i = 0; i <= index; i++) {
        printf("[%d, %d] ", intervals[i].start, intervals[i].end);
    }
    printf("\n");
}

int main() {
    struct Interval intervals[] = {{1, 3}, {2, 4}, {6, 8}, {9, 11}};
    int size = sizeof(intervals) / sizeof(intervals[0]);

    mergeIntervals(intervals, size);

    return 0;
}
