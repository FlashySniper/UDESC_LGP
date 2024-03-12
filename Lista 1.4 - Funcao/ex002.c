#include <stdio.h>

int maior(int a, int b, int c);

int main(){
	int x, y, z;
	printf("-----QUAL O MAIOR VALOR?-----\n\n");
	printf("Digite o numero 1: ");
	scanf("%i", &x);
	printf("Digite o numero 2: ");
	scanf("%i", &y);
	printf("Digite o numero 3: ");
	scanf("%i", &z);
	
	int maiorNum = maior(x, y, z);
	
	printf("Maior numero entre %i %i %i eh %i", x, y, z, maiorNum);
	return 0;
}

int maior(int a, int b, int c){
	int maiorNum;
	if(a >= b && a >= c){
		maiorNum = a;
	}else{
		if(b >= a && b >= c){
			maiorNum = b;
		}else{
			maiorNum = c;
		}
	}
	return maiorNum;
}
