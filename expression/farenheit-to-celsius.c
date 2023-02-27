#include<stdio.h>
int main(){
    float f, c;
    printf("Enter Farenheit : ");
    scanf("%f", &f);
    c = ((f-32)*5)/9;
    printf("The celsius : %f \n", c);
    return 0;
}