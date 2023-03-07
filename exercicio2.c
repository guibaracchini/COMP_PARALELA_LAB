//
// Created by Guilherme Baracchini on 13/03/23.
//

#include <stdio.h>

int main(){
    double nota1, nota2, nota3, me, ma;
    printf("Insira a Nota 1: ");
    scanf("%lf", &nota1);
    printf("Insira a Nota 2: ");
    scanf("%lf", &nota2);
    printf("Insira a Nota 3: ");
    scanf("%lf", &nota3);
    printf("Insira a ME: ");
    scanf("%lf", &me);

    ma = (nota1+nota2*2+nota3*3+me)/7;
    printf("A média do aluno é %.2lf\n", ma);

    if (ma >= 9)
        printf("O conceito é: A");
    else if (ma >= 7.5)
        printf("O conceito é: B");
    else if (ma >= 6)
        printf("O conceito é: C");
    else if (ma >= 4)
        printf("O conceito é: D");
    else
        printf("O conceito é: E");

    return 0;
}
#include "exercicio2.h"
