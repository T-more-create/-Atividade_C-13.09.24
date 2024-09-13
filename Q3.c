#include <stdio.h>

void imprimir_numeros(int N) {
    if (N == 0) {
        printf("%d\n", N);
    } else {
        imprimir_numeros(N - 1);
        printf("%d\n", N);
    }
}

int main() {
    int N;
    
    printf("Insira um número inteiro N: ");
    scanf("%d", &N);

    imprimir_numeros(N);

    return 0;
}
