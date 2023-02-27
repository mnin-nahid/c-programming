#include<stdio.h>
int main(){
    double num1, num2, num3;
    printf("Enter Three number : \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3){
        printf("Largest number is : %lf \n", num1);
    }
    if(num2 >= num1 && num2 >= num3){
        printf("Largest number is : %lf \n", num2);
    }
    if(num3 >= num1 && num3 >= num2){
        printf("Largest number is : %lf \n", num3);
    }
    return 0;
}