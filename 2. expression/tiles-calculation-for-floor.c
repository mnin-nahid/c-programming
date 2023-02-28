#include<stdio.h>

int main(){
    int roomh, roomw, rooma, tilesh, tilesa;
    float totalTiles, remainSpace;

    printf("Enter Room hight and width (inch): ");
    scanf("%d %d", &roomh, &roomw);
    rooma = roomh*roomw;
    printf("Enter the Tiles Hight (inch): ");
    scanf("%d", &tilesh);
    tilesa = tilesh * tilesh;

    totalTiles = rooma / tilesa;
    remainSpace = rooma % tilesa;
    printf("You need %f pieces tiles and space remain %f inch\n", totalTiles, remainSpace);
    return 0;


    
};