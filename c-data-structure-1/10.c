#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float xValue;

  printf("Insira o valor de X: ", &xValue);
  scanf("%f", &xValue);

  float yValue = xValue + 5;

  printf("O valor de Y é: %f", yValue);
}
