//
// Created by Guilherme Baracchini on 13/03/23.
//

#include <stdio.h>

int main() {
    int n;
    printf("Digite um número ímpar: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O número digitado não é ímpar. Tente novamente.\n");
        return 0;
    }
    int i, j, k, num = 1;
    for (i = n; i >= 1; i -= 2) {
        for (j = 0; j < (n-i)/2; j++) {
            printf("  ");
        }
        for (k = 0; k < i; k++) {
            printf("%d ", num+k);
        }
        num++;
        printf("\n");
    }
    return 0;
}