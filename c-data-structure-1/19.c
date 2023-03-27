#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int rows = 5;
  int cols = 5;
  int initialValue = 10;
  int matrix[rows][cols];

  int i, j;

  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      matrix[i][j] = initialValue++;
    }
  }

  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < cols; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
