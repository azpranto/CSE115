/*Check if the roots of the equation: ax2+bx+c=0 are real or not. If they are real, then print them;
otherwise print “No real root exist.” Read a,b,c from user.*/

#include <stdio.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root is: %.2f\n", root1);
    } else {
        printf("No real root exist\n");
    }

    return 0;
}