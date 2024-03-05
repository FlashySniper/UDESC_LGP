#include <stdio.h>

int main(int argc, char * argv[]){
	int i=0, num;
	int opcao;
	int par=0, impar=0, positivo=0, negativo=0; 
	do{
		i += 1;
		printf("Digite o numero %i: ", i);
		scanf("%i", &num);
		if(num % 2 == 0){
			par += 1;
		}else{
			impar += 1;
		}
		if(num >= 0){
			positivo += 1;
		}else{
			negativo += 1;
		}
		printf("Deseja continuar? SIM (1) ou NAO (2) (Digite um dos numeros): ");
		scanf("%i", &opcao);
	}while(opcao == 1);
	
	printf("\n\nNumeros pares: %i", par);
	printf("\nNumeros impares: %i", impar);
	printf("\nNumeros positivos: %i", positivo);
	printf("\nNumeros negativos: %i", negativo);
	return 0;
}
