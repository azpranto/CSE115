/*Write a function that returns the number of times a value appears in an array.*/

#include <stdio.h>

int count(int arr[], int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, value;
    printf("Input size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Input value to count: ");
    scanf("%d", &value);

    printf("Number of times %d appears in the array: %d\n", value, count(arr, n, value));

    return 0;
}