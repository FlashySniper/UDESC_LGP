#include <stdio.h>

int soma_impares(int x, int y);

int main(int argc, char *argv[]) {
  int x, y;
  printf("Digite o numero 1: ");
  scanf("%i", &x);
  printf("Digite o numero 2: ");
  scanf("%i", &y);

  int soma = soma_impares(x, y);

  printf("A soma dos impares entre o intervalo %i a %i eh de %i", x, y, soma);
  
  return 0;
}

int soma_impares(int x, int y){
  int temp, soma=0;
  if(x > y){
    temp = x;
    x = y;
    y = temp;
  }
  x++;
  for(int i=x; i<y; i++){
    if(i % 2 != 0){
      soma += i;
    }
  }
  return soma;
}