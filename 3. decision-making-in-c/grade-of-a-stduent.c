#include<stdio.h>
int main(){
    int mark;
    printf("Enter your mark 0 - 100 : \n");
    scanf("%d", &mark);
    if(mark >= 80){
        printf("Your grade is 'A+'");
    }
    else if(mark >= 70){
        printf("Your grade is 'A' \n");
    }
    else if(mark >= 60){
        printf("Your grade is 'A-' \n");
    }
    else if(mark >= 50){
        printf("Your grade is 'B' \n");
    }
    else if(mark >= 40){
        printf("Your grade is 'C' \n");
    }
    else if(mark >= 33){
        printf("Your grade is 'D' \n");
    }
    else {
        printf("You Failed on this Subject \n");
    }
    return 0;
}