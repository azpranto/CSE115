/*input: 5
output:
********** 1
****  **** 2
***    *** 3
**      ** 4
*        * 5
**      **
***    ***
****  ****
**********

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("*");
        }
        for (int j = 1; j <= ((i+1)*2)-2; j++) {
            printf(" ");
        }
        for (int j = i; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= (2*(n-i))-2; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

