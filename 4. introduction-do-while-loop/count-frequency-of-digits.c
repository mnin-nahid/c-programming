#include<stdio.h>

int main(){
    long long number, n;
    int i, lasrDigits, freq[10];

    printf("Enter any number : ");
    scanf("%lld", &number);

    for(i=0; i<10; i++){
        freq[i]=0;
    }
    n = number;
    while( n != 0){
        lasrDigits = n% 10;
        n = n/10;
        freq[lasrDigits]++;     
    }
    printf("Frequency of each digit in %lld is : \n", number);
    for(i=0; i<10; i++){
        printf("Frequency of %d = %d \n",i, freq[i]);
    }
    return 0;
}