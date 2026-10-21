#include <stdio.h>

int main() {
    // Chars
    char nomeChar;
    nomeChar = 'A';
    printf("Char: %c\n", nomeChar); // c para char

    // Inteiros
    int valorInt;
    valorInt = 0;
    printf("Inteiro: %d\n", valorInt);  // d para int

    // Reais
    float valorFloat;
    valorFloat = 0.0f;  // Se não usar o 'f' no final, o compilador pode interpretar como double
    printf("Float: %0.1f\n", valorFloat);   // f para float e double

    double valorDouble;
    valorDouble = 0.0;
    printf("Double: %0.3f\n", valorDouble);

    // Constantes
    const int MAX = 100;
    printf("Constante MAX: %d\n", MAX);

    // Entrada de dados (scanf)
    int scan;
    printf("Digite um valor inteiro: ");
    scanf("%d", &scan); // &nomeVariavel armazenar o valor digitado nessa variavel
    printf("Valor digitado: %d\n", scan);

    return 0;
}