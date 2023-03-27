#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int rows = 5;
  int cols = 5;

  int i, j;

  for (i = 1; i <= rows; i++)
  {
    for (j = 1; j <= cols; j++)
    {
      printf("%d-%d ", i, j);
    }
    printf("\n");
  }
}
