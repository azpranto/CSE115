/*Write a C program to display a given number in words starting from its leftmost digit.
Hint: Compute the reverse of the given number and then use a while loop like practice 3 to print the digits.
E.g., if input number is 1234 your program should print “One Two Three Four”.*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    while (rev > 0) {
        switch (rev % 10) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        rev /= 10;
    }
    printf("\n");
    return 0;
}