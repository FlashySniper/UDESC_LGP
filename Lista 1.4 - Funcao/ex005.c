#include <stdio.h>

int eh_primo(int k, int n);

int main(int argc, char *argv[]) {
  int k, n=0, cont=0;
  printf("Digite o numero inicial: ");
  scanf("%i", &k);
  printf("Digite o numero de numeros primos que deseja saber: ");
  scanf("%i", &n);
  printf("Os %i numeros primos depois de %i são: ", k, n);
  while(cont < n){
    cont += eh_primo(k, n);
    printf("%i", cont);
  }
  return 0;
}

int eh_primo(int k, int n){
  int cont=0, resto=0, i=0;
  for(i=0; i<= k; i++){
    if(k%i == 0){
      resto++;
    }
    if(resto == 2){
      printf("%i", k);
      cont++;
    }
  }
  return cont;
}

#include <stdio.h>

int eh_primo(int k);

int main(int argc, char *argv[]) {
  int k, n=0, cont=0, primo=0;
  printf("Digite o numero inicial: ");
  scanf("%i", &k);
  printf("Digite o numero de numeros primos que deseja saber: ");
  scanf("%i", &n);
  printf("Os %i numeros primos depois de %i são: ", k, n);
  while(cont < n){
    primo = eh_primo(k);
    if(primo == 1){
      cont++;
    }
    printf("%i", cont);
    k++;
    primo = 0;
  }
  return 0;
}

int eh_primo(int k){
  int cont=0, resto=0, i=0;
  for(i=0; i<= k; i++){
    if(k%i == 0){
      resto++;
    }
  }
  if(resto == 2){
    printf("%i", k);
    cont = 1;
  }
  return cont;
}