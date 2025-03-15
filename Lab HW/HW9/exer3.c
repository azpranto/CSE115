/*Write a C program to print all unique letters in an input string.
Sample input/output:
Enter a string: Hello how are you?
Unique letters in the input string (ignoring differences between lowercase & uppercase letters):
a, e, h, l, o, r, u, w, y
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            freq[tolower(str[i]) - 'a']++;
        }
    }

    printf("Unique letters in the input string (ignoring differences between lowercase & uppercase letters):\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c, ", i + 'a');
        }
    }

    return 0;
}