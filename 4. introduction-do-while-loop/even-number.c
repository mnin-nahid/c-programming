#include<stdio.h>
int main(){
    int count = 1;
    while(count <= 100){
        if(count % 2 == 0){
            printf("%d is even number \n", count);
        }
        count++;
    }
    return 0;
}