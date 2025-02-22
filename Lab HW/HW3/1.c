/*Write a C program that takes input the first letter of any of the following fruits name–
Mango ---- Tk.500/kg,
Apple ---- Tk.250/kg,
Banana ----Tk. 130/kg,
Cherry -----Tk. 270/kg, and suggests the price of the fruit as output, using switch case.*/

#include <stdio.h>

int main()
{
    char f;
    printf("Enter the first letter of the fruit name: ");
    scanf("%c", &f);

    switch (f)
    {
        case 'M':
        case 'm':
            printf("Mango ---- Tk.500/kg\n");
            break;
        case 'A':
        case 'a':
            printf("Apple ---- Tk.250/kg\n");
            break;
        case 'B':
        case 'b':
            printf("Banana ----Tk. 130/kg\n");
            break;
        case 'C':
        case 'c':
            printf("Cherry -----Tk. 270/kg\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}