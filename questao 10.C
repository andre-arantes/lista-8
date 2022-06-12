#include <stdio.h>
/*Considere um arquivo texto que armazene números em ponto flutuante em cada uma de suas linhas. Escreva um programa em C que determine o valor máximo, o valor mínimo e a média desses valores armazenados no arquivo. Imprima esses valores na tela. */
int main(void) {
  FILE *arq;
  int n, vmax, vmin;
  int sum = 0;
  float a=0, me = 0; 

  arq = fopen("texto.txt", "r");
  while (fscanf(arq, "%d", &n) != EOF){
    if (a == 0){ 
      vmax=n;
      vmin=n;
    } else if (n > vmax){
      vmax=n;
    } else if (n < vmin){
      vmin=n;
    } 
    a++;
    sum += n;
  }
  me = sum/a;
  printf("Valor mínimo: %d", vmin);
  printf("\nValor máximo: %d", vmax);
  printf("\nMédia: %.2f", me);
  fclose(arq);
  return 0;
}
