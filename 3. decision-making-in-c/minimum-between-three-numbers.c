#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a <= b && a <= c){
        printf("%d is minimum number \n",a);
    }
    else if(b <= a && b <= c){
        printf("%d is minimum \n", b);
    }
    else{
        printf("%d is the minimum number \n",c);
    }
    return 0;
}