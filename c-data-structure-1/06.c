#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int i;

  for (i = 0; i >= -11; i--)
  {
    printf("%d ", i);
  }
}
