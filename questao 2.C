#include <stdio.h>
/* Crie um programa que receba um texto do usuário e grave o texto em um arquivo. */
int main(void) {
  FILE *pont_arq;
  char tx[100];
  pont_arq = fopen("arquivo.txt", "w");
  printf("Digite um texto: ");
  scanf("%s", tx);
  fprintf(pont_arq, "%s", tx);
  fclose(pont_arq);
  return 0;
}
