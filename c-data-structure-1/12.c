#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float aValue, bValue;

  printf("Digite o valor de A: ");
  scanf("%f", &aValue);

  bValue = (aValue * aValue) / (5 * (aValue + 2));

  printf("O valor de B é: %f\n", bValue);
}
