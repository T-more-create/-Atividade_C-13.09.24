#include <stdio.h>

void imprimir_numeros_decrescente(int N) {
    if (N >= 0) {
        printf("%d\n", N);
        imprimir_numeros_decrescente(N - 1);
    }
}

int main() {
    int N;
    
    printf("Insira um número inteiro N: ");
    scanf("%d", &N);

    imprimir_numeros_decrescente(N);

    return 0;
}
