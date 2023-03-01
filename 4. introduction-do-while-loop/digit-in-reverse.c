#include<stdio.h>
int main(){
    int number, n, result = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    do{
        n = number % 10;
        result = (result * 10) + n;
        number = number /10;

    }while(number != 0);
    printf("the result is : %d \n", result);
    return 0;
}