#include <stdio.h>

int main(void) {
    int age, cont = 0, som = 0;
    float med;

    do {
        printf("Informe a idade: ");
        scanf("%d", &age);

        if (age > 0) {
            som += age;
            cont++;
        }
    } while (age > 0);

    if (cont > 0) {
        med = (float)som / cont;
        printf("Media de Idade: %.1f\n", med);
    } else {
        printf("Nenhuma idade valida foi digitada.\n");
    }

    return 0;
}
