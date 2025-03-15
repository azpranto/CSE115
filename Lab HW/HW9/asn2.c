/*Write a C program to put even and odd elements of an array in two separate arrays and show them.
Sample input/output:
Input size of the array: 10
Input elements in array: 0 1 2 3 4 5 6 7 8 9
Even elements in array: 0 2 4 6 8
Odd elements in array: 1 3 5 7 9
*/

#include <stdio.h>

int main() {
    int n;
    printf("Input size of the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n], e = 0, o = 0;

    printf("Input elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    printf("Even elements in array: ");
    for (int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements in array: ");
    for (int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}