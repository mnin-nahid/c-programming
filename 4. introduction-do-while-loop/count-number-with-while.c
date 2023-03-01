#include<stdio.h>

int main(){
    int count, n;
    printf("Enter the number that to count :");
    scanf("%d", &n);
    count = 1;
    while(count <= n){
        printf("%d\n", count);
        count++;
    }
}