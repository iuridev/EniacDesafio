#include<stdio.h>

int main(){
  int numero, contador, resultado;
  printf("Qual a tabuada de multiplicação você quer saber?");
  scanf("%d",&numero);
  contador = 1;
  while (contador<11){
    resultado=numero*contador;
    printf("%d x %d = %d\n", numero, contador, resultado);
    contador=contador+1;
  }
  return 0;
}