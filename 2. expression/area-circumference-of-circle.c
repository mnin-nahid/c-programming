#include<stdio.h>

int main(){
    float pi = 3.1416, radius, area, circumference;
    printf("Enter the Radius : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("If the Radius is : %f \nThen area is : %f \nAnd Circumference = %f\n", radius, area, circumference);
    return 0;
}