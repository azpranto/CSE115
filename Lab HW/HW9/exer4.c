/*Write a program that reads a string from user and then prints the number of times different letters
appear in that string.
Sample input/output:
Enter a string: Hello how are you?
Frequencies of letters in the input string:
a/A: 1, e/E: 2, h/H: 2, l/L: 2, o/O: 3, r/R: 1, u/U: 1, w/W: 1, y/Y: 1,
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

    printf("Frequencies of letters in the input string:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c/%c: %d, ", i + 'a', i + 'A', freq[i]);
        }
    }

    return 0;
}