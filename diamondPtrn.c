/*input:5
output:
    *
   * *
  *   *
 *     *
*       *
 *     * 
  *   *
   * *
    *
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n-1; j++) {
            printf(" ");
        }
        printf("*");
        if (i != 0) {
            for (int j = 1; j <= (i*2)-1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < n-1; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j <= (2*(n-i))-3; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = 0; i < n-1; i++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}
