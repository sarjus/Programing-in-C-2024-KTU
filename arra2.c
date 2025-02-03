/*Write a C program to find the largest and smallest elements in an array.*/
#include<stdio.h>

int main() {
    int n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0]; // Initialize max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum: %d, Minimum: %d\n", max, min);
    return 0;
}
