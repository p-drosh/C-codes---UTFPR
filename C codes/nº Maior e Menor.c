#include <stdio.h>

int main(void){

    int x, y, z;

    printf("Insert a number: ");
    scanf("%d", &x);
    printf("Insert another number: ");
    scanf("%d", &y);
    printf("Insert another number: ");
    scanf("%d", &z);

    if( x >= y && y >= z){

        printf("Maior: %d | Intermediário: %d | Menor: %d", x, y, z);
    }
    else if( z >= y && y >= x){

        printf("Maior: %d | Intermediário: %d | Menor: %d", z, y, x);
    }
    else if( y >= z && z >= x){

        printf("Maior: %d | Intermediário: %d | Menor: %d", y, z, x);
    }
    else if( y >= x && x >= z){

        printf("Maior: %d | Intermediário: %d | Menor: %d", y, z, x);
    }

    return 0;
}

