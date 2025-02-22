/*Write a function - one to print a scoop and one to print a cone and create a nice cone-ice cream!*/

#include <stdio.h>
// #include <stdlib.h>

void Scoop() {
    printf("    *   \n");
    printf("   ***  \n");
    printf("  ***** \n");
    printf(" *******\n");
}

void Cone() {
    printf("\\------/\n");
    printf(" \\    / \n");
    printf("  \\  /  \n");
    printf("   \\/   \n");
}

int main() {
    Scoop();
    Cone();
    return 0;
}