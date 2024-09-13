#include <stdio.h>

int soma_vetor(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    } else {
        return vetor[tamanho - 1] + soma_vetor(vetor, tamanho - 1);
    }
}

float media_vetor(int vetor[], int tamanho) {
    if (tamanho == 0) {
        return 0.0;  
    }
    int soma = soma_vetor(vetor, tamanho);
    return (float)soma / tamanho;
}

int main() {
    int tamanho;
    
    printf("Insira o número de elementos no vetor: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho do vetor deve ser maior que 0.\n");
        return 1;
    }

    int vetor[tamanho];

    printf("Insira os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("A média dos elementos do vetor é: %.2f\n", media_vetor(vetor, tamanho));

    return 0;
}
