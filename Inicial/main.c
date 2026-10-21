#include <stdio.h>

int main() {
    varInt();
    varFloat();
    varDouble();
    varChar();
    varConst();
    funScan();

    return 0;
}

// Espaço para a funcoes usadas na main

void varInt() {
    int valorInt;
    valorInt = 1;
    printf("Inteiro na funcao: %d\n", valorInt);    // %d para inteiro
}

void varFloat() {
    float valorFloat;
    valorFloat = 0.0f;  // usa o f para indicar que é um float
    printf("Float na funcao: %0.1f\n", valorFloat); // %f para float
}

void varDouble() {
    double valorDouble;
    valorDouble = 0.0;
    printf("Double na funcao: %0.3f\n", valorDouble); // %f para double
}

void varChar() {
    char nomeChar;
    nomeChar = 'A';
    printf("Char na funcao: %c\n", nomeChar);   // %c para char
}

void varConst() {
    const int MAX = 100;
    printf("Constante MAX na funcao: %d\n", MAX);
}

void funScan () {
    int scan;
    printf("Digite um valor inteiro: ");
    scanf("%d", &scan); // &nomeVar para guardar a entrada no espaço de memória da variável
    printf("Valor digitado: %d\n", scan);
}