#include <stdio.h>
/*Crie um programa que receba dados de vários alunos (Matricula e Telefone) e
 * armazene em um arquivo texto. Crie no mesmo programa uma opção de ler dados
 * de um arquivo já armazenado dados de alunos. */
int main(void) {
  FILE *arq;
  FILE *alunos;
  int alu, ma, te;
  char l;
  arq = fopen("texto.txt", "w");     // escreve
  alunos = fopen("alunos.txt", "w"); // lê

  printf("Quantidade de alunos: ");
  scanf("%d", &alu);
  for (int i = 0; i < alu; i++) {
    printf("\nMatrícula: ");
    scanf("%d", &ma);
    printf("Telefone: ");
    scanf("%d", &te);
    fprintf(arq, "%d %d\n", ma, te);
  }

  printf("\nLer um arquivo que tem dados de alunos armazenados? ");
  scanf(" %c", &l);
  while (fscanf(alunos, "%d %d\n", &ma, &te) != EOF) {
    if (l == ('s')) {
      printf("%d %d\n", ma, te);
    }
  }
  if (l != 's') {
    printf("Erro!\n");
  }

  fclose(alunos);
  fclose(arq);
  return 0;
}
