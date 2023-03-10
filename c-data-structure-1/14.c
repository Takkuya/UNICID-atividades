#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int value, numericalRatio;

  printf("Insira um valor: ", &value);
  scanf("%d", &value);

  printf("Insira a razão numérica: ", &numericalRatio);
  scanf("%d", &numericalRatio);

  int i;

  for (i = 0; i <= 10; i++)
  {
    numericalRatio = value + numericalRatio;
    printf("%d ", numericalRatio);
  }
}
