#include<stdio.h>
int main(){
    int x = 7;
    printf("Main number is %d \n", x);
    printf("Post incriment : %d \n", x++);
    printf("Pre incriment : %d \n", ++x);
    x = 7;
    printf("Post dicriment : %d \n", x--);
    printf("Pre dicriment : %d \n", --x);
    return 0;
}