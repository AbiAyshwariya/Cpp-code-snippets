#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int findMinDifference(int arr[], int size) {
    int i;
    int minDiff = arr[1] - arr[0]; // Initialize the minimum difference with the first pair
    // Sort the array in ascending order
    qsort(arr, size, sizeof(int), compare);
    // Find the minimum difference by comparing adjacent elements
    for (i = 1; i < size; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    return minDiff;
}
int main() {
    int arr[SIZE];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int minDifference = findMinDifference(arr, size);
    printf("Minimum difference between any two elements in the array: %d\n", minDifference);
    return 0;
}
