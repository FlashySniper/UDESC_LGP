#include <stdio.h>

int main(int argc, char * argv[]){
  int i, j;
  float a=0, b=0, c=0;
  float conta=0;
  printf("Digite o numero de medias ponderadas que serao calculadas: ");
  do{
    scanf("%i", &j);
  }while(j <= 0);
  for(i=0; i <= j; i++){
    printf("\n\nDigite a nota 1: ");
    do{
      scanf("%f", &a);
    }while(a < 0 || a > 10);
    
    printf("Digite a nota 2: ");
    do{
      scanf("%f", &b);
    }while(b < 0 || b > 10);
    
    printf("Digite a nota 3: ");
    do{
      scanf("%f", &c);
    }while(c < 0 || c > 10);

    conta = ((a*2)+(b*3)+(c*5))/10;
    
    printf("\n\nMedia ponderada da conta %i: %.1f", i, conta);
  }

  printf("Notas registradas!");
  return 0;
}