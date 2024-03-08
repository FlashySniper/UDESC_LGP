#include <stdio.h>

int main(int argc, char * argv[]){
	int hora1, hora2, duracao;
	int cont = 0;
	int i =0;
	printf("Digite que horas começou o jogo (Apenas para jogos pontuais, Ex. 16h): ");
	scanf("%i", &hora1);
	printf("Digite que horas terminou o jogo: ");
	scanf("%i", &hora2);
	if(hora1 == hora2){
		printf("O JOGO DUROU 24 HORA(S)");
	}else{
		for(i = hora1; i != hora2; i++){
		if(i == 24){
			i = 0;
		}
		cont++;
		}
		printf("O JOGO DUROU %i HORA(S)", cont);
	}
	return 0;
}
