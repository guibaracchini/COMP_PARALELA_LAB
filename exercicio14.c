//
// Created by Guilherme Baracchini on 13/03/23.
//
#include <stdio.h>
#include <string.h>

void inserirChar(char *string, char caractere, int posicao) {
    int tamanho = strlen(string);
    if (posicao >= 0 && posicao <= tamanho) {
        for (int i = tamanho; i >= posicao; i--) {
            string[i + 1] = string[i];
        }
        string[posicao] = caractere;
    }
}

int main() {
    char string[100];
    char caractere;
    int posicao;
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    printf("Digite o caractere a ser inserido: ");
    scanf("%c", &caractere);
    printf("Digite a posição do caractere a ser inserido: ");
    scanf("%d", &posicao);
    inserirChar(string, caractere, posicao-1);
    printf("A string resultante é: %s\n", string);
    return 0;
}