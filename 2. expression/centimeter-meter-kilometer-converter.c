#include<stdio.h>
int main(){
    int cm, m, km;
    printf("Enter Centimeter Value: ");
    scanf("%d", &cm);
    m = cm / 100 ;
    km = m / 1000;
    printf("%d cm = %d m = %d km \n", cm, m, km);
    return 0;
}