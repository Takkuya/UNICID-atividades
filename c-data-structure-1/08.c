#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  float value;

  printf("Insira um valor: ", &value);
  scanf("%f", &value);

  if (value > 0)
  {
    printf("O valor é positivo");
  }
  else
  {
    printf("O valor é negativo");
  }
}
