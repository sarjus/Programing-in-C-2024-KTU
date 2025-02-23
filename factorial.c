/******************************************************
 * File         :   Factorial.c
 * Description  :   C program to find the factorial of the 
 *                  given number
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   24/02/2025
 * ***************************************************/
#include<stdio.h>
int factorial(int);
int main(){
    int num;
    printf("\nEnter the number to fing the factorial:");
    scanf("%d",&num);
    int fact = factorial(num);
    printf("\nThe factorial of the given number: %d", fact);
    return 0;
}
int factorial(int num){
    int fact =1, i;
    for(i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}