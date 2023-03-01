#include<stdio.h>
#include<math.h>
int main(){
    int number, first, last, swappedNum, digits;

    printf("Enter a number : ");
    scanf("%d", &number);

    last = number % 10;

    digits = (int)log10(number);

    first = (int)(number / pow(10, digits));

    swappedNum = last;
    swappedNum = swappedNum * (int)pow(10, digits);
    swappedNum = swappedNum + (number % ((int)pow(10, digits)));
    swappedNum = swappedNum - last;
    swappedNum = swappedNum  + first;

    printf("Original num : %d \n", number);
    printf("Number after swaping : %d \n", swappedNum);
    
    return 0;

}