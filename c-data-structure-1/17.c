#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int value, i;

  printf("Insira um valor: ", &value);
  scanf("%d", &value);

  for (i = 0; i <= value; i++)
  {
    if (i == 1)
    {
      printf("");
    }
    else if (i == 2 || i == 3 || i == 5)
    {
      printf("%d ", i);
    }
    else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
    {
      printf("");
    }
    else
    {
      printf("%d ", i);
    }
  }
}
