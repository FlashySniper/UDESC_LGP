#include <stdio.h>

float somaIterativa(int n) {
  float soma = 0, i;
  for (i = 1; i <= n; i++) {
    soma += (1 / i);
  }
  return soma;
}

float somaRecursiva(float n) {
  float divisao;
  if (n == 0) {
    return 0;
  } else {
	divisao = (1 / n);
    return divisao + somaRecursiva((n - 1));
  }
}

int main() {
  int n;
  float soma_harmonica;
  printf("-----SOMA HARMONICA-----\n\n");
  printf("Digite o numero de somas que sera realizada: ");
  scanf("%i", &n);
  soma_harmonica = somaRecursiva(n);
  printf("Soma harmonica: %.2f", soma_harmonica);
  return 0;
}
