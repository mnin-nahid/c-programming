#include<stdio.h>

int main(){
    int sum, number, n;
    printf("Enter the digits : ");
    scanf("%d", &number);
    sum = 0;
    do{
        n = number % 10;
        sum = sum + n;
        number = number / 10;
    }while(number != 0);
    printf("The result is : %d \n", sum);
    return 0;
}