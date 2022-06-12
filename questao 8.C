#include <stdio.h>
#include <stdlib.h>
/* Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir: 

- Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual da locadora.

- Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel.
Sabendo que um décimo dos veículos alugados no mês é devolvido com atraso, calcule o valor ganho com multas no mês.

- Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o valor  gasto com a manutenção anual, sabendo que o valor gasto em média com a manutenção é de R$ 600,00.

Além de mostrar os resultados na tela, grave em um arquivo  chamado resultado.txt. Cada valor deverá ser armazenado em uma linha.*/
int main(void) {
  FILE *relatorio;
  int carros;
  double ta=0;
  
  relatorio = fopen("resultado.txt","w");

  printf("Digite o número total de carros da locadora: ");
  scanf("%d", &carros);
  double al[carros];
  for (int i=0; i<carros; i++){
    printf("Digite o valor do aluguel do %d carro: ", i + 1);
    scanf("%lf", &al[i]);
    ta += al[i];
  }
  
  double totalc=carros;
    
  printf("\nO faturamento anual da locadora é R$ %.2lf\n", (((totalc/3)*ta)*12));
  fprintf(relatorio,"o faturamento anual da locadora é R$ %.2lf\n", (((totalc/3)*ta)*12));

  printf("\nO valor ganho com multas no mês é R$ %.2lf\n", (totalc/30)*(0.2*ta));
  fprintf(relatorio,"O valor ganho com multas no mês é R$ %.2lf\n", (totalc/30)*(0.2*ta));
  
  printf("\nO valor gasto com a manutenção de veículos é R$ %.2lf\n", (0.02*totalc)*(600));
  fprintf(relatorio, "O valor gasto com a manutenção de veículos é R$ %.2lf", (0.02*totalc)*(600));

  fclose(relatorio);
  }
