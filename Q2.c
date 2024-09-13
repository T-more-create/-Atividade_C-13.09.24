#include <stdio.h>


int somatorio(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N + somatorio(N - 1);
    }
}

int main() {
    int N;
    
    printf("Insira um número inteiro N: ");
    scanf("%d", &N);

    printf("O somatório dos números de 1 a %d é: %d\n", N, somatorio(N));

    return 0;
}
