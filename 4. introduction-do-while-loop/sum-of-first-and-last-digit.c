#include<stdio.h>
int main(){
    int number, first, last, result;
    printf("Enter a number : ");
    scanf("%d", &number);

    last = number % 10;

    while(number >= 10){
        number /= 10;
    }

    first = number;
    result = last + first;

    printf("The sum of first and last digit : %d \n", result);
    return 0;
}