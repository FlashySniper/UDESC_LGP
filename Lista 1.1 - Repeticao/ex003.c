#include <stdio.h>

int main(int argc, char * argv[]){
  int a, b, i;
  int soma;
  printf("Digite o numero inicial (comecando pelo menor): ");
  scanf("%i", &a);
  printf("Digite o numero final: ");
  do{
    scanf("%i", &b);
  }while(b < a);
  for(i=a; i<=b; i++){
    if(i < 0){
      i = i*(-1);
    }
    if(i % 2 != 0){
      soma += i;
    }
  }
  printf("A soma dos impares no intervalo entre %i e %i eh igual a %i", a, b, soma);
  return 0;
}