#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int value, factorial = 1;

  printf("Insira um valor: ", &value);
  scanf("%d", &value);

  int i;

  if (value == 0)
  {
    printf("0! = 1");
  }
  else
  {
    printf("%d! = %d x ", value, value);
    for (i = value; i >= 1; i--)
    {
      factorial = factorial * i;

      if (i == 1)
      {
        printf("%d", i);
      }
      else
      {
        printf("%d x ", i);
      }
    }
  }
}
