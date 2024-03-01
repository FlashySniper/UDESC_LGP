#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
  float a, b, c;
  char msg[50];
  char msg2[50];
  char msg_completa[100];
  printf("Digite o valor do lado A: ");
  scanf("%f", &a);
  printf("Digite o valor do lado B: ");
  scanf("%f", &b);
  printf("Digite o valor do lado C: ");
  scanf("%f", &c);

  if(a >= (b+c)){
    printf("Nao forma um triangulo.\n");
  }else{
    if((a*a) == ((b*b) + (c*c))){
        printf("Triangulo retangulo\n");
    }else{
      if((a*a) > ((b*b) + (c*c))){
          printf("Triangulo obtusangulo\n");
      }else{
        if((a*a) < ((b*b) + (c*c))){
            printf("Triangulo acutangulo\n");
        }
      }
    } 
  }
  if(a == b && a == c){
    printf("Triangulo equilatero\n");
  }else{
    if(a == b || a == c){
      printf("Triangulo isosceles\n");
    }
  }
}
