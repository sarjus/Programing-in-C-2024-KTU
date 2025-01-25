/******************************************************
 * File         :   leap-year.c
 * Description  :   C Program to check the given year is leap year or not
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   25-01-2025
 * ***************************************************/
#include <stdio.h>

int main() {
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
