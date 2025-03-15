/*Write a function that searches for a character in a string. The function should print true if found,
otherwise print false*/

#include <stdio.h>
#include <stdbool.h>

bool search(char str[], char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[100], c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to search: ");
    scanf("%c", &c);

    if (search(str, c)) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}