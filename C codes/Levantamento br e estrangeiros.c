#include <stdio.h>

int main(void){

    int idade, br = 0, grn = 0 /*gringo*/, somaidadebrsemsup = 0, qtdbrsemsup = 0, menoridadeest = -1;
    char nac, esc;
    float media;

    printf("=== LEVANTAMENTO DE DADOS === \n");

    do{

    printf(" DIGITE A SUA IDADE(DIGITE UM NUM NEGATIVO PARA ENCERRAR): ");
    scanf("%d", &idade);

    if(idade >=0){
            do{
    printf(" DIGITE A SUA NACIONALIDAE:\n (b)BRASILEIRO\n (e)ESTRANGEIRO\n ");
    scanf(" %c", &nac);

    if(nac == 'b' || nac == 'B'){
        br++;

    }
    else if(nac == 'e' || nac == 'E'){
        grn++;
    }
    else{
        printf(" Caractere Inválido.");
    }
            }while(nac != 'b' && nac != 'B' && nac != 'e' && nac != 'E');
    do{
    printf(" POSSUI CURSO SUPERIOR?\n (s)SIM\n (n)NAO\n ");
    scanf(" %c", &esc);

    if(esc != 's' && esc != 'S' && esc != 'n' && esc != 'N'){
            printf(" Caractere invalido");
            }
    }while(esc != 's' && esc != 'S' && esc != 'n' && esc != 'N');

    if((nac == 'b' || nac == 'B') && (esc == 'n' || esc == 'N')){
        somaidadebrsemsup += idade;
        qtdbrsemsup++;

    }
    if((nac == 'e' || nac == 'E') && (esc == 's' || esc == 'S')){
        if(menoridadeest == -1 || menoridadeest > idade){
            menoridadeest = idade;
        }

    }
    }

}while(idade >=0);

printf(" === RESULTADOS ===\n");
printf(" Quantidade de Brasileiros: %d \n", br);
printf(" Quantidade de Estrangeiros: %d \n", grn);

if(qtdbrsemsup > 0){
        media = (float)somaidadebrsemsup/qtdbrsemsup;
    printf(" Média de Brasileiros sem curso superior: %.2f \n", media);
}
if(menoridadeest != -1){
    printf(" Menor idade de Estrangeiros com curso superior: %d \n", menoridadeest);
} else{
printf(" Nenhum estrangeiro com curso superior foi cadastrado.");
}
return 0;
}
