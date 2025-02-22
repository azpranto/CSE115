/*Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change, so Farhan must
have all the notes required to pay the bill. Write a C program that reads the bill and the number of
each type of note (500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible for
Farhan to pay the bill or not. If it is possible, then also output the number of each notes required to
pay the bill.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1175
Enter number of notes:
500: 1
100: 7
50: 1
20: 0
10: 5
5: 1
2: 0
1: 0
Farhan can pay the bill by using the following counts of different notes:
500: 1
100: 6
50: 1
20: 0
10: 2
5: 1
2: 0
1: 0*/

#include <stdio.h>

int main()
{
    int amount, note500, note100, note50, note20, note10, note5, note2, note1;
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Enter number of notes:\n");
    printf("500: ");
    scanf("%d", &note500);
    amount -= note500 * 500;
    printf("100: ");
    scanf("%d", &note100);
    amount -= note100 * 100;
    printf("50: ");
    scanf("%d", &note50);
    amount -= note50 * 50;
    printf("20: ");
    scanf("%d", &note20);
    amount -= note20 * 20;
    printf("10: ");
    scanf("%d", &note10);
    amount -= note10 * 10;
    printf("5: ");
    scanf("%d", &note5);
    amount -= note5 * 5;
    printf("2: ");
    scanf("%d", &note2);
    amount -= note2 * 2;
    printf("1: ");
    scanf("%d", &note1);
    amount -= note1 * 1;

    if (amount == 0)
    {
        printf("Farhan can pay the bill by using the following counts of different notes:\n");
        printf("500: %d\n", note500);
        printf("100: %d\n", note100);
        printf("50: %d\n", note50);
        printf("20: %d\n", note20);
        printf("10: %d\n", note10);
        printf("5: %d\n", note5);
        printf("2: %d\n", note2);
        printf("1: %d\n", note1);
    }
    else
    {
        printf("Farhan can't pay the bill\n");
    }

    return 0;
}