#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x = 2;
    int y = 3;
    int resultado = soma(x, y);
    printf("O resultado da soma de %d e %d é %d\n", x, y, resultado);
    return 0;
}