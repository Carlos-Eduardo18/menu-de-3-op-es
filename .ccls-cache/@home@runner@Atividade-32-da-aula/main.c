// Ultilizando o While, Faça um menu com pelo menos 3 opções, sendo uma delas a escolha de SAIR

#include <stdio.h>
int main() {
  int opcao;
  while (opcao != 4) {
    printf("\nMenu de Opcoes\n-------------\n");
    printf("1. Opção 1\n");
    printf("2. Opção 2\n");
    printf("3. Opção 3\n");
    printf("4. Sair\n");
    printf("Selecione uma opcao: ");
    scanf("%d", &opcao);
  }
  return 0;
}