#include <stdio.h>
/* Escreva  um  programa  que  concatene  o  conteúdo  de  dois  arquivos. O conteúdo dos dois arquivos deverá ser adicionado em um terceiro arquivo. */
int main(void) {
  FILE *pont_arq1;
  FILE *pont_arq2;
  FILE *pont_arqmist;
  char t1, t2;
  pont_arq1 = fopen("texto1.txt", "r");
  pont_arq2 = fopen("texto2.txt", "r");
  pont_arqmist = fopen("texto3.txt", "w");

  while ((t1 = fgetc(pont_arq1)) != EOF) { //leitura de caracteres
    fprintf(pont_arqmist, "%c", t1); 
  }
  while ((t2 = fgetc(pont_arq2)) != EOF) { //leitura de caracteres
    fprintf(pont_arqmist, "%c", t2);
  }
  
  fclose(pont_arqmist);
  return 0;
}
