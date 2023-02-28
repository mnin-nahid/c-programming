#include<stdio.h>

int main(){
    char grade;
    printf("Enter your grade (with capital) : \n");
    scanf("%c", &grade);

    switch(grade){
        case 'A' :
            printf("Excellent ! \n");
            break;
        case 'B' :
            printf("Well done ! \n");
            break;
        case 'C' :
            printf("Good ! \n");
            break;
        case 'D' :
            printf("You are passed \n");
            break;
        case 'F' :
            printf("Try again! \n");
            break;
        default :
            printf("Invalid Grade \n");
    }
    printf("Your grade is : %c \n", grade);
    return 0;
}