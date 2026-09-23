#include <stdio.h>

int main(void){

    int ind, i;
     float prc = 15.00, prof;

    printf(" How many people are going to watch? ");
    scanf("%d", &ind);


    printf("\n%-22s %s\n", " TICKETS PRICES:", "TICKETS PRICES TIMES THE AUDIENCE:");

    for(i=0;i<=ind; i++){

            if(i >0 && i <=10){

            prc += 0.50;
            }
            printf(" R$ %-19.2f R$ %.2f\n", prc, prc*ind);


    }
    prof = prc * ind;

    printf(" PEOPLE IN THE AUDIENCe: %d", ind);
    printf("\n SHOW PROFIT: R$ %.2f", prof);
}
