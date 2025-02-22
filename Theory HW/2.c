/*Write a function to make a calculator - add, deduct, multiply, divide*/

#include <stdio.h>
#include <stdlib.h>

void Add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void Deduct(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

void Multiply(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}

void Divide(int a, int b) {
    printf("%d / %d = %d\n", a, b, a / b);
}

int main() {
    int a, b, op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1. Add\n2. Deduct\n3. Multiply\n4. Divide\nChoose option: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            Add(a, b);
            break;
        case 2:
            Deduct(a, b);
            break;
        case 3:
            Multiply(a, b);
            break;
        case 4:
            Divide(a, b);
            break;
        default:
            printf("Invalid option\n");
    }
    return 0;
}