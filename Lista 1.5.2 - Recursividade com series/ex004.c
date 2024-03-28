#include <stdio.h>

float fazLnDe2Iterativa(int n) {
  int i;
  float conta = 0;
  for (i = n; i > 0; i--) {
    if (i % 2 == 0) {
      conta -= (1 / (float)i);
    } else {
      conta += (1 / (float)i);
    }
  }
  return conta;
}

float fazLnDe2Recursiva(int n){
  if(n == 1){
    return 1;
  }else{
    if(n % 2 == 0){
      return 0 - (1 / (float)n) + fazLnDe2Recursiva(n-1);
    }else{
      return (1 / (float)n) + fazLnDe2Recursiva(n-1);
    }
  }
}

int main() {
  int n;
  printf("-----ln(2)-----\n\n");
  printf("Digite o numero de termos: ");
  scanf("%i", &n);
  while (n <= 0) {
    printf("Digite um numero positivo maior que 0: ");
    scanf("%i", &n);
  }
  float ln2 = fazLnDe2Recursiva(n);
  printf("O somatorio de termos eh: %.8f", ln2);
  return 0;
}