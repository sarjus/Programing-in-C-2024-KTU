/******************************************************
 * File         :   Factorial.c
 * Description  :   Write a program in C to find the sum of the 
 *                  series 1!/1+2!/2+3!/3+4!/4+...n!/n using the function.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   24/02/2025
 * ***************************************************/
#include<stdio.h>
int factorial(int);
int main(){
    int n,sum=0;
    printf("\nEnter the range:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(factorial(i)/i);

    }
    printf("\nThe sum of series: %d", sum);
    return 0;
}
int factorial(int num){
    int fact =1, i;
    for(i=1;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}