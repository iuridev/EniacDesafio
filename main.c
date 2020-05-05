#include<stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL,"Portuguese");
  int opcao;
  int maquina;
  printf("\n *** Jogo Pedra-Papel-Tesoura *** \n");
  printf("Opção 1 - Pedra \n");
  printf("Opção 2 - Papel \n");
  printf("Opção 3 - Tesoura \n");
  printf("Digite uma Opção: ");
  scanf("%d",&opcao);
  if (opcao <= 0 || opcao >=4)
  {
    printf("Opção Invalida");
  }else
  {
    printf("Opção da maquina: %d \n", maquina=1+(rand()%3));

    if (opcao==1 && maquina == 3 || opcao==3 && maquina==2 || opcao==2 && maquina==1)
    {
      printf("Ganhador Usuario");
    }else if (opcao==maquina)
    {
      printf("Empate");
    }else    
    {
      printf("Ganhador Maquina");
    }
        
  }
  
  return 0;
  
}