#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter a Alphabet : \n");
    scanf("%c", &alphabet);
    switch(alphabet){
        case 'A' :
            printf("%c is a vowel \n", alphabet);
            break;
        case 'E' :
            printf("%c is a vowel \n", alphabet);
            break;
        case 'I' :
            printf("%c is a vowel \n", alphabet);
            break;
        case 'O' :
            printf("%c is a vowel \n", alphabet);
            break;
        case 'U' :
            printf("%c is a vowel \n", alphabet);
            break;
        default :
            printf("%c is a Consonant \n", alphabet);
    }
    return 0;
}