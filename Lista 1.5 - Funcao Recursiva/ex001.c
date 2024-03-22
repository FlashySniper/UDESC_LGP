#include <stdio.h>

int soma_especial(int n, int k, int x);

int main(){
  int n=0, k=0, x=0;
  printf("----SOMA ESPECIAL-----\n\n");
  printf("Digite o numero de partida: ");
  scanf("%i", &x);
  printf("Digite o numero de termos (repeticoes): ");
  scanf("%i", &n);
  while(n <= 0){
    printf("Digite um numero que seja valido (inteiro positivo): ");
    scanf("%i", &n);
  }
  printf("Digite o multiplo dos numeros que serao mostrados: ");
  scanf("%i", &k);
  while(k <= 0){
    printf("Digite um numero que seja valido (inteiro positivo): ");
    scanf("%i", &k);
  }
  printf("Resultado: ");
  int r = soma_especial(n, k, x);
  printf("%i", r);
  return 0;
}

int soma_especial(int n, int k, int x){
  if(n==0){
    return 0;
  }
  if(x % k == 0){
    return (x + soma_especial((n-1), k, (x+1)));
  }else{
    return soma_especial(n, k, (x+1));
  }
}