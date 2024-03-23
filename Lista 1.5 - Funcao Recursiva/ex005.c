#include <stdio.h>

int fibo(int n){
	int i=0;
	if(n==1){
		return 2;
	}else{
		if(n==2){
			return 2;
		}else{
			return fibo(n-1) + fibo(n-2);
		}
	}
}

int main() {
  int n, i;
  printf("Digite o numero de elementos que deseja verificar da sequencia de Fibonacci: ");
  scanf("%i", &n);
  while(n<=0){
	printf("Digite um numero positivo maior que zero: ");
	scanf("%i", &n);
  }
  printf("Sequencia dos numeros de Fibonacci ate a posicao %i: ", n);
  for (i = 1; i <= n; i++) {
    printf("\n%i", fibo(i));
  }
}
