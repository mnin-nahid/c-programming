#include<stdio.h>
int main(){
    int number, i;
    long sum = 0;
    long int t = 1;
    printf("Input the number of terms : ");
    scanf("%d", &number);

    for(i = 0; i <= number; i++){
        printf("%ld", t);
        if(i<number){
            printf("+ ");
        }
        sum = sum + t;
        t= (t*10)+1;
    }
    printf("\n The sum is : %ld\n", sum);
    return 0;
}