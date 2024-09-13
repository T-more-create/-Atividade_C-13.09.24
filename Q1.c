#include <stdio.h>

int soma_cubos(int n) {
    if (n == 1) {
        return 1;
    } else {
       
        return (n * n * n) + soma_cubos(n - 1);
    }
}

int main() {
    int n;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    printf("A soma dos primeiros %d cubos é: %d\n", n, soma_cubos(n));

    return 0;
}
