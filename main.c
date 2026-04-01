#include <stdio.h>

int fibonacci(int f) {
    if (f <= 0) {   // ← caso base adicionado
        return 0;
    }
    if (f == 1) {
        return 1;
    }
    if (f == 2) {
        return 1;
    }

    return fibonacci(f - 1) + fibonacci(f - 2);
}

int main() {
    int f, i;
    printf("Escreva o enésimo termo de Fibonacci: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
