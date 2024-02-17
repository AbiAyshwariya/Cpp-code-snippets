#include <stdio.h>

int birthday_candles(int candle_heights[], int n) {
    int max_height = candle_heights[0];  // Assume the first candle has the maximum height
    int count = 1;  // At least one candle can be blown out

    for (int i = 1; i < n; i++) {
        if (candle_heights[i] > max_height) {
            max_height = candle_heights[i];  // Update the maximum height
            count = 1;  // Reset the count as this is the new maximum height
        } else if (candle_heights[i] == max_height) {
            count++;  // Another candle with the same maximum height
        }
    }

    return count;
}

int main() {
    int n;
    printf("Enter the number of candles: ");
    scanf("%d", &n);

    int candle_heights[n];
    printf("Enter the heights of the candles:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &candle_heights[i]);
    }

    int result = birthday_candles(candle_heights, n);
    printf("Colleen can blow out %d candles.\n", result);

    return 0;
}