#include <stdio.h>

int main(int argc, char * argv[]){
  int a, b, i, j, cont;
  int soma;
  printf("Digite o numero de operacoes que serao realizadas: ");
  do{
    scanf("%i", &j);
  }while(j <= 0);
  
  for(i=0; i <= j; i++){
    soma = 0;
    printf("Digite o numero inicial (comecando pelo menor): ");
    scanf("%i", &a);
    printf("Digite o numero final: ");
    do{
      scanf("%i", &b);
    }while(b < a);
    for(cont=a; cont<b; cont++){
      if(cont < 0){
        cont = cont*(-1);
      }
      if(cont % 2 != 0){
        soma += cont;
      }
    }
    printf("A soma dos impares no intervalo entre %i e %i eh igual a %i\n\n", a, b, soma);
  }  
  printf("\n\nFIM DE OPERACAO");
  return 0;
}