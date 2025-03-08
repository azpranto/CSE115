/*Write a program that reads the size and elements of an float array from user and then computes the
average of the numbers in it and prints it. Then it should compute number of elements which are
greater than average and prints those elements. Sample input/output:
Enter array size: 5
Enter elements: 12 13 16 15 14
Average = 14.000000, The elements greater than average are: 16, 15
*/

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n], sum = 0;
    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / n;
    printf("Average = %.6f, The elements greater than average are: ", avg);
    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            printf("%.0f ", arr[i]);
        }
    }
    
    return 0;
}