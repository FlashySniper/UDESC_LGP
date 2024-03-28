#include <stdio.h>

double definiPiIterativo(int n) {
  int i;
  double resultado = 0, divisor = -1;
  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      divisor += 2;
      resultado = resultado + (4 / (divisor));
    } else {
      divisor += 2;
      resultado = resultado - (4 / (divisor));
    }
  }
  return resultado;
}

float divisor(int x){
  x += 2;
  return x;
}

float definiPiRecursivo(int n){
  if(n==1){
    return 4;
  }else{
    if(n % 2 == 0){
      return (4/n) + 
    }
  }
}

int main() {
  int n;
  printf("-----Serie de Gregory-Leibniz-----\n\n");
  printf("Digite o numero de termos: ");
  scanf("%i", &n);
  while(n <= 0){
    printf("Digite um numero positivo maior que 0: ");
    scanf("%i", &n);
  }
  n = (n*2)-1; // Apenas para a funcao recursiva
  double valorPi = definiPiRecursivo(n);
  printf("O valor aproximado de pi dividindo %i termos eh: %.5lf", n, valorPi);
  return 0;
}