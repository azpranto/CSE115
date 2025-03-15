/*Write a C program that deletes all duplicate letters from an input string.*/

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

    printf("String after removing duplicate letters:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (freq[tolower(str[i]) - 'a'] > 0) {
                printf("%c", str[i]);
                freq[tolower(str[i]) - 'a'] = 0;
            }
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}