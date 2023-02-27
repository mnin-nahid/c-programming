#include<stdio.h>
int main(){
    float c, f;
    printf("Enter the Celsius : ");
    scanf("%f", &c);
    f = c*9/5+32;
    printf("%f celsius = %f farenheit \n", c, f);
    return 0;
}