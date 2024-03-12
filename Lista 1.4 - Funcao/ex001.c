#include <stdio.h>

int tipo_triangulo(float a, float b, float c);

int main(){
	float x, y, z;
	printf("Digite o lado 1: ");
	scanf("%f", &x);
	printf("Digite o lado 2: ");
	scanf("%f", &y);
	printf("Digite o lado 3: ");
	scanf("%f", &z);
	
	int resposta = tipo_triangulo(x, y, z);
	
	switch(resposta){
		case 0:
			printf("Os valores %.2f %.2f %.2f nao formam um triangulo.", x, y, z);
			break;
		case 1: 
		printf("Os valores %.2f %.2f %.2f formam um triangulo equilatero.", x, y, z);
			break;
		case 2:
			printf("Os valores %.2f %.2f %.2f formam um triangulo isoceles.", x, y, z);
			break;
		case 3:
			printf("Os valores %.2f %.2f %.2f formam um triangulo escaleno.", x, y, z);
			break;
		default:
			break;
	}
	return 0;
}

int tipo_triangulo(float a, float b, float c){
	int resp;
	if((a+b) < c || (a+c) < b || (c+b) < a){
		resp = 0;
	}else{
		if(a == b && b == c){
			resp = 1;
		}else{
			if((a == b && a != c) || (a == c && a != b) || (c == b && c != a)){
				resp = 2;
			}else{
				resp = 3;
			}
		}
	}
	return resp;
}
