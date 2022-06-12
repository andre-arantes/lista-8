#include <stdio.h>
/* Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde N é  uma  quantidade de letras definida  pelo  usuário. Depois de  inseridas as N  letras,  o programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais, ou seja, quantas letras a, e, i, o, u. */
int main(void) {
  FILE *pont_arq;
  FILE *soma;
  int n;
  char ltr;
  int cont = 0;
  pont_arq = fopen("texto.txt", "w");

  printf("Digite o número de letras desejado: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Digite a %dª letra: ", i + 1);
    scanf(" %c", &ltr);
    fprintf(pont_arq, "%c", ltr);
    }
  fclose(pont_arq); // fecha

  // abre em modo leitura
  soma = fopen("texto.txt", "r");
  while (fscanf(soma, "%c", &ltr) != EOF) {
    if ((ltr == 'a') || (ltr == 'e') || (ltr == 'i') || (ltr == 'o') ||
        (ltr == 'u') || (ltr == 'A') || (ltr == 'E') || (ltr == 'I') ||
        (ltr == 'O') || (ltr == 'U')) {
      cont++;
    }
  }
  printf("\nQuantidade de vogais é: %d", cont);
  fclose(soma);
  return 0;
}
