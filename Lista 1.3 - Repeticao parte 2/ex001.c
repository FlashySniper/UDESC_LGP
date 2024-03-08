#include <stdio.h>

int main(int argc, char * argv[]){
  int n, k, cont=0;
  int i=0, resto=0;
  printf("Digite o numero de primos que voce deseja encontrar: ");
  do{
    scanf("%i", &n);
  }while(n <= 0);
  printf("Digite o número em que iniciara a contagem: ");
  scanf("%i", &k);
  printf("\n%i numeros primos a partir de %i: ", n, k);
  while(cont <= n){
    for(i=0; i<= k; i++){
      if(k%i == 0){
        resto++;
      }
      if(resto == 2){
        printf("%i", k);
        cont++;
      }
    }
    k++;
    resto = 0;
  }
  return 0;
}