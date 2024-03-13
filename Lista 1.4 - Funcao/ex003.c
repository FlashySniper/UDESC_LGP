#include <stdio.h>

int verifica_caractere(char c);

int main(int argc, char *argv[]) {
  char c;
  printf("Digite um caractere aleatorio: ");
  scanf("%c", &c);
  int booleana = verifica_caractere(c);
  if (booleana == 1) {
    int num = c - '0';
    printf("\nO caractere é um número e foi alterado para inteiro. Número : %i", num);
  } else {
    printf("\n%c foi o caractere digitado.", c);
  }
  return 0;
}

int verifica_caractere(char c) {
  int booleana = 0;
  char letra;
  char nums[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  for (int i = 0; i <= 9; i++) {
    letra = nums[i];
    if (c == letra) {
      booleana = 1;
    }
  }
  return booleana;
}