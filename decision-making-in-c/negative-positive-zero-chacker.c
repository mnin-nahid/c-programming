#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : \n");
    scanf("%d", &x);
    if(x > 0){
        printf("%d is a positive number\n",x);
    }
    else if(x < 0){
        printf("%d is a negative number\n", x);
    }
    else if (x == 0){
        printf("%d is a 0 value\n", x);
    }
    return 0;
}