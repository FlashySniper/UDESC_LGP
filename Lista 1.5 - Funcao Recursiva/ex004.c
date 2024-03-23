#include <stdio.h>

float determinaConstEIterativa(float n){
	float constE;
	int i, j;
	float fat;
	if(n==1){
		return 0;
	}else{
		for(i=0; i<n; i++){
			fat = 1;
			for(j=0;j<=i;j++){
				fat += fat*j;
			}
			constE += 1/fat;
		}
		return constE;
	}
}

float determinaConstERecursiva(float n){
	int j;
	float fat=1;
	if(n==0){
		return 0;
	}else{
		for(j=0;j<(n-1);j++){
			fat += fat*j;
		}
		return (1/fat) + determinaConstERecursiva(n-1);
	}
}

int main() {
	int n=0;
	printf("Digite quantos termos serao calculados: ");
	scanf("%i", &n);
	while(n <= 0){
		printf("Digite um valor positivo maior que zero: ");
		scanf("%i", &n);
	}
	float constE = determinaConstERecursiva(n);
	printf("Valor da constante e: %.3f", constE);
  return 0;
}
