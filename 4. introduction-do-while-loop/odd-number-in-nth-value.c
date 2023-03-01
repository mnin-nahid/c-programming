#include<stdio.h>
int main(){
    int count, n;
    printf("Enter the Nth number : ");
    scanf("%d", &n);
    count = 1;
    while(count <= n){
        if(count % 2 == 1){
            printf("%d\t", count);
        }
        count++;
    }
}