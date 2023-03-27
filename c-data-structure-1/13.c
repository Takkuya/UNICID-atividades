#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int i = 1, n;

  while (i <= 15)
  {
    printf("Digite o %dº número: ", i);
    scanf("%d", &n);
    printf("O quadrado de %d é %d\n", n, n * n);
    i++;
  }
}
