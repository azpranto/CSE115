/*Write a C program that prints all even numbers between m and n (m,n are user inputs) except the ones
which are divisible by 3. [Hint: Use continue statement within a loop] Sample input/output:
Enter m: 99
Enter n: 116
All even numbers between 100 and 112 except those divisible by 3 are: 100, 104, 106, 110, 112, 116*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("All even numbers between %d and %d except those divisible by 3 are: ", m, n);
    for (int i = m ; i <= n; i++) {
        if (i % 2 != 0 || i % 3 == 0) {
            continue;
        }
        printf("%d, ", i);
    }
    return 0;
}