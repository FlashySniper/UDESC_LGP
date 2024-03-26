#include <stdio.h>
#include <math.h>

float fatorial(float n){
	if(n==0){
		return 1;
	}
	return fatorial(n-1);
}

float determinaSerieIterativa(float x, int n){
	int i;
	float soma=0;
	for(i=0; i<n; i++){
		soma +=  pow(x, i) / (fatorial(i));
	}
	return soma;
}

int main() {
  int n;
  float x, e;
  printf("-----Serie de Taylor-----\n\n");
  printf("Digite o valor que sera usado para a conta: ");
  scanf("%f", &x);
  printf("Digite o numero de iteracoes: ");
  scanf("%i", &n);
  while(n<=0){
	printf("Digite um valor positivo maior que zero: ");
	scanf("%i", &n);
  }
  e = determinaSerieIterativa(x, n);
  printf("O resultado da Serie de Taylor, do valor %i eh: %f", x, e);	
  return 0;
}
