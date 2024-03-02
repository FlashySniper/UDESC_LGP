#include <stdio.h>

// Ano: 2024
//Jan: 31, Fev: 29, Mar: 31, Abr: 31, May: 31, Jun: 30, Jul: 31, Ago: 31, Set: 30, Out: 31, Nov: 30, Dez: 31

int main(int argc, char * argv[]){
	//Váriaveis
	int somaDias=0, total;
	int mes, dia;
	int i=0; //Contador
	//int Jan=31, Fev=29, Mar=31, Abr=31, May=31, Jun=30, Jul=31, Ago=31, Set=30, Out=31, Nov=30, Dez=31;
	int meses[12] = {31, 29, 31, 31, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("-----CONTAGEM REGRESSIVA DE EVENTOS-----\n\n");
	printf("Digite o dia que sera o evento: ");
	scanf("%i", &dia);
	
	//Validacao simples, apenas verifica dias que excedem 31, porem para meses com menos dias ja nao serve
	while(dia > 31 || dia < 1){ 
		printf("Digite um dia valido: ");
		scanf("%i", &dia);
	}
	
	printf("Digite o mes que sera o evento: ");
	scanf("%i", &mes);
	while(mes > 12 || mes < 1){ 
		printf("Digite um mes valido: ");
		scanf("%i", &mes);
	}
	
	for(i=0; i<(mes-1);i++){
		somaDias = somaDias + meses[i];
	} 
	
	total = somaDias + dia;

	printf("\n%i DIA(S) DO INICIO DO ANO ATE O EVENTO", total);
	
	return 0;
}
