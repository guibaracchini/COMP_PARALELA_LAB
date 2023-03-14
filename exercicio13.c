//
// Created by Guilherme Baracchini on 13/03/23.
//
#include <stdio.h>
#include <string.h>

void removerChar(char *string, int posicao) {
    int i = posicao;
    while (string[i] != '\0') {
        string[i] = string[i + 1];
        i++;
    }
}

int main() {
    char string[100];
    int posicao;
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    printf("Digite a posição do caractere a ser removido: ");
    scanf("%d", &posicao);
    if (posicao >= 0 && posicao < strlen(string)) {
        removerChar(string, posicao-1);

        printf("A string resultante é: %s\n", string);
    } else {
        printf("Posição inválida.\n");
    }

    return 0;
}