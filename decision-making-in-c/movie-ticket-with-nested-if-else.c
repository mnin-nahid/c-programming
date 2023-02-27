#include<stdio.h>
int main(){
    int age, permission;
    printf("What is your age : \n");
    scanf("%d", &age);
    if(age <= 17){
        printf("Do you have yor parents permission ? ");
        scanf("%d", &permission);
        if(permission == 1){
            printf("Heare is your ticket \n");
        }
        else{
            printf("We are sprry to say that, we dont you movie ticker \n");
        }
    }
    else if(age >= 17){
        printf("You have to pay 300 bdt for movie ticket \n");
    }
}