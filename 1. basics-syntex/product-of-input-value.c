#include<stdio.h>
int main(){
    int a, b, multi;
    printf("Enter two value : ");
    scanf("%d %d", &a, &b);
    multi = a*b;
    printf("%d X %d = %d \n", a, b, multi);
    return 0;
}