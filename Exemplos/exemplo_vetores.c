#include <stdio.h>

int main() {
  int vet[10];
  int i;
  int maiorValor=0, nValoresAcimaMedia;
  float media, somaValores;
  for(i=0; i<=9; i++){
	printf("Digite o valor %i: ", i);
	scanf("%i", &vet[i]);
	somaValores += vet[i];
	if(vet[i] > maiorValor){
		maiorValor = vet[i];
	}
  }
  media = somaValores /(i+1);
  printf("O maior valor: %i\n", maiorValor);
  printf("Média dos valores: %.3f\n", media);
  printf("Valores acima da media: ");
  for(i=0; i<=9; i++){
	if(vet[i] > media){
		printf("%i ", vet[i]);
	}
  }
  return 0;
}
