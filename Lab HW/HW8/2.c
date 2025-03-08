/*Write a program that deletes all the elements in an array which match a search key.*/

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
            n--;
            i--;
        }
    }

    printf("Array after deleting all elements matching the search key: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}