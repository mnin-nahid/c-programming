#include<stdio.h>
int main(){
    int r, h;
    float volume, pi = 3.1416;
    printf("Input the hight : ");
    scanf("%d", &h);
    printf("Input the Radius : ");
    scanf("%d", &r);
    volume = pi * r * r * h;
    printf("The volume is : %f \n", volume);
    return 0;
}