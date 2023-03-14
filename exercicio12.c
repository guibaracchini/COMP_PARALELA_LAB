//
// Created by Guilherme Baracchini on 13/03/23.
//
#include <stdio.h>

int encontrarChar(char *string, char c) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char string[100];
    char c;
    int posicao;

    printf("Insira uma string: ");
    scanf("%s", string);

    printf("Insira o caractere a ser encontrado: ");
    scanf(" %c", &c);

    posicao = encontrarChar(string, c);

    if (posicao == -1) {
        printf("O caractere dessa posição não foi encontrado na string.\n");
    } else {
        printf("O caractere foi encontrado na posição %d da string.\n", posicao+1);
    }

    return 0;
}