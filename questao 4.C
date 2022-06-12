#include <stdio.h>
/* 
Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo na tela. Imprima também a quantidade de linhas que este arquivo possui. 
*/
int main(void) {
  FILE *pont_arq;
  char tx;
  int cont = 0;
  pont_arq = fopen("texto.txt", "r");
  while ((tx = fgetc(pont_arq)) != EOF) { //leitura de caracteres
    printf("%c", tx);
    if (tx == '\n'){ //contagem de "enters"
      cont++;
    }
  }
  printf("\nA quantidade de linhas é: %d", cont+1);
  fclose(pont_arq);
  return 0;
  }
