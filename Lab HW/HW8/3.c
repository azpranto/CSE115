/*Write a C program to print the 2nd largest & 2nd smallest elements of an array.*/

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int lst = arr[0], secondLst = arr[0], sst = arr[0], secondSst = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > lst) {
            secondLst = lst;
            lst = arr[i];
        } else if (arr[i] > secondLst) {
            secondLst = arr[i];
        }
        if (arr[i] < sst) {
            secondSst = sst;
            sst = arr[i];
        } else if (arr[i] < secondSst) {
            secondSst = arr[i];
        }
    }

    printf("Second Largest Element: %d\n", secondLst);
    printf("Second Smallest Element: %d\n", secondSst);
    
    return 0;
}