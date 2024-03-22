#include <stdio.h>

int somaIterativa(int n){
  int i, soma=0;
  for(i=1; i<=n; i++){
    soma += i;
  }
  return soma;
}

int somaRecursiva(int n){
  if(n==0){
    return 0;
  }else{
    return n + somaRecursiva(n-1);
  }
}

int main(){
  int n, soma;
  printf("Digite o numero de somas que serao realizadas: ");
  scanf("%i", &n);
  soma = somaRecursiva(n);
  printf("\nSoma: %i",soma);
  return 0;
}