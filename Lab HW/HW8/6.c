/* Write C program to count the number of capital letters and the number of small letters in an input string
and print those numbers.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i, len = strlen(str), capital = 0, small = 0;
    for (i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capital++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            small++;
        }
    }

    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);

    return 0;
}