#include <stdio.h>
#define SIZE 100
int findMissingElement(int arr[], int size) {
    int i;
    int totalSum = (size + 1) * (size + 2) / 2;  // Sum of all elements from 1 to size+1
    // Subtract each element in the array from the total sum
    for (i = 0; i < size; i++) {
        totalSum -= arr[i];
    }
    return totalSum;
}
int main() {
    int arr[SIZE];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array (except one missing element):\n");
    for (i = 0; i < size - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int missingElement = findMissingElement(arr, size - 1);

    printf("Missing element in the array: %d\n", missingElement);
    return 0;
}
