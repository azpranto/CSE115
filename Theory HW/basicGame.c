#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_grid(int **arr, int size) {
    printf("\nCurrent Grid:\n");
    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++) {
            printf("%3d ", arr[x][y]);
        }
        printf("\n");
    }
}

int main() {
    int level;
    printf("Enter level (1-10): ");
    scanf("%d", &level);

    if (level < 1 || level > 10) {
        printf("Invalid level! Please enter a number between 1 and 10.\n");
        return 1;
    }

    int size = level + 2; // Level 1 -> 3x3, Level 10 -> 13x13
    int **arr = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        arr[i] = (int *)malloc(size * sizeof(int));
    }

    // Initialize grid
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 0;
        }
    }

    // Set fixed values
    arr[0][0] = 1;           // Player start
    arr[size - 1][size - 1] = 100; // Goal

    // Randomize obstacles
    srand(time(NULL));
    int num_obstacles = size; // Number of obstacles increases with level
    for (int k = 0; k < num_obstacles; k++) {
        int x, y;
        do {
            x = rand() % size;
            y = rand() % size;
        } while ((x == 0 && y == 0) || (x == size - 1 && y == size - 1) || arr[x][y] == -5);

        arr[x][y] = -5;
    }

    int i = 0, j = 0, pos = 1;

    while (pos != 100) {
        print_grid(arr, size);
        char cur;
        printf("\nWhere do you wanna go (L/R/U/D): ");
        scanf(" %c", &cur);

        int new_i = i, new_j = j;

        switch (cur) {
            case 'L': case 'l': new_j--; break;
            case 'R': case 'r': new_j++; break;
            case 'U': case 'u': new_i--; break;
            case 'D': case 'd': new_i++; break;
            default:
                printf("Invalid input! Enter L, R, U, or D.\n");
                continue;
        }

        if (new_i < 0 || new_j < 0 || new_i >= size || new_j >= size) {
            printf("Error! Out of bounds. Try again...\n");
            continue;
        }

        pos = arr[new_i][new_j];

        if (pos == -5) {
            printf("WASTED!! Try again...\n");
            return 0;
        }

        if (pos == 100) {
            printf("Congratulations! You won!!\n");
            return 0;
        }

        arr[i][j] = 0;       // Clear old position
        arr[new_i][new_j] = 1; // Move player
        i = new_i;
        j = new_j;
    }

    for (int i = 0; i < size; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
