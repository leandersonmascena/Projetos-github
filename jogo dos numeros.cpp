#include <stdio.h>

// função para obter o número do usuário
int obterNumero(){
    int numero;
    printf("digite um numero:");
    scanf("%d", &numero);
    return numero;
}

// função para calcular e mostrar o antecessor e sucessor
void mostrarAntecessorSucessor(int numero) {
    printf("Antecessor: %d\n", numero -1);
    printf("Sucessor: %d\n", numero +1);

}
// função para mostrar a tabuada de multiplicação
void mostrarTabuada(int numero) {
    printf("Tabuada de %d: \n", numero);
    for (int i = 1; i <= 10; i++) {
        printf ("%d x %d = %d\n", numero, i, numero*i);
    }
}