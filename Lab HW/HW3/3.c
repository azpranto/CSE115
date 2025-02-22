/*Use switch case to make a simple calculator that can add, subtract, multiply or divide two input
numbers. The operator (+ , - , * or /) should also be read from user.
Sample Input/Output:
Enter two numbers: 4.5 2.9
Enter operator: +
4.5 + 2.9 = 7.4*/

#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator: ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("%.1f + %.1f = %.1f\n", a, b, a + b);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f\n", a, b, a - b);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f\n", a, b, a * b);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f\n", a, b, a / b);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}