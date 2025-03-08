/*Write a program that deletes the first element in an array which matches a search key.*/

#include <stdio.h>

int main() {
    int i, skey, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search key: ");
    scanf("%d", &skey);

    for (i = 0; i < n; i++) {
        if (arr[i] == skey) {
            for (int j = i; j < n-1; j++) {
                arr[j] = arr[j+1];
            }
            break;
        }
    }

    printf("Array after deleting the first element matching the search key: ");
    for (i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    
}