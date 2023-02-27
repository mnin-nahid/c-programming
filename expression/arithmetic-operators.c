#include<stdio.h>
int main(){
    int a, b, addition, subtraction, multiplication, division, remaining;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a/b;
    remaining = a % b ;

    printf("%d + %d = %d \n", a, b, addition);
    printf("%d - %d = %d \n", a, b, subtraction);
    printf("%d X %d = %d \n", a, b, multiplication);
    printf("%d / %d = %d . And remain %d \n", a, b, division, remaining); 
}