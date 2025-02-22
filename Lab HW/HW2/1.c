//Write a C program to enter month number and print number of days in month

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);    

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Number of days is 31\n");
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Number of days is 30\n");
    } else if (month == 2) {
        printf("Number of days is 28 or 29\n");
    } else {
        printf("Invalid month number\n");
    }
    
    return 0;
}
