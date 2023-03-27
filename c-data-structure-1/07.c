#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float value;

  printf("Insira um valor: ", &value);
  scanf("%f", &value);

  if (value > 10)
  {
    printf("O valor é maior que 10");
  }
  else
  {
    printf("O valor é menor que 10");
  }
}
