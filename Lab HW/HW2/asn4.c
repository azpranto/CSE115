/*Read a floating point number from user and check if it has any fractional part (e.g. 4.5, 6.9,...) or not
(e.g. 4, 5, ...). If it has a fractional part then print “Not an integer”, otherwise print “integer”.*/

#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    int num2 = num;

    if (num - num2 != 0.00) {
        printf("Not an integer\n");
    } else {
        printf("Integer\n");
    }

    return 0;
}