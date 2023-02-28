#include<stdio.h>
int main(){
    int m1, m2, m3, m4, m5;
    float average;
    printf("Enter the marks (inline with space): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    average = (m1 + m2 + m3 + m4 + m5)/5;
    printf("Average is : %f \n", average);
    return 0;
}