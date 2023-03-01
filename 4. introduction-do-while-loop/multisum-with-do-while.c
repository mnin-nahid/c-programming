#include<stdio.h>
int main(){
    int count, number, sum;
    count = 1, sum = 0;
    do{
        printf("Enter %d th value : ", count);
        scanf("%d", &number);
        sum = sum + number;
        count++;
    }while(count <= 5);
    
    printf("The sum of %d number is : %d \n", --count, sum);
    return 0;
}