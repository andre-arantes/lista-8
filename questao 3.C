#include <stdio.h>
/* Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela.*/
int main(void) {
  FILE *pont_arq;
  char tx;
  int cont = 0;
  pont_arq = fopen("texto.txt", "r");
  while ((tx = fgetc(pont_arq)) != EOF) { //leitura de caracteres
    printf("%c", tx);
    if (tx == 'a') {
      cont ++;
    }
  }
  printf("\nQuantidade de A's: %d", cont);
  fclose(pont_arq);
  return 0;
}
