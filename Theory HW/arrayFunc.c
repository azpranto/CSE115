/*declare an  array for marks of students, take input, get the average and standard deviation, class highest and class lowest. (bonus: use function)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void avg(int marks[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    printf("Average: %.2f\n", (float) sum / n);
}


void stdDevn(int marks[], int n) {
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    float avg = sum / n;
    float sum1 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += pow(marks[i] - avg, 2);
    }
    sum1 /= n;
    printf("Standard deviation: %.2f\n", sqrt(sum1));
}

void Hst(int marks[], int n) {
    int highest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }

    printf("Highest marks: %d\n", highest);
}

void Lst(int marks[], int n) {
    int lowest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    printf("Lowest marks: %d\n", lowest);
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter marks of student no. %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    avg(marks, n);
    stdDevn(marks, n);
    Hst(marks, n);
    Lst(marks, n);
    
    return 0;
}