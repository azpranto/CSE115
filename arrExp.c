#include <stdio.h>
#include <math.h>

#define size 30

int main() {
    int marks[size], i, sum = 0, highest, lowest;
    double average, std_dev = 0, variance;

    for (i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / (double)size;
    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", average);

    for (i = 0; i < size; i++) {
        variance += pow(marks[i] - average, 2);
    }
    variance /= size;
    std_dev = sqrt(variance);
    printf("Standard Deviation: %.2lf\n", std_dev);

    highest = lowest = marks[0];
    for (i = 1; i < size; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);

    return 0;
}