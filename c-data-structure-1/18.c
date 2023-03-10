#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int arr[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 86, 144, 233, 300, 533};
  int length = sizeof(arr) / sizeof(int);
  int i;
  printf("Vetor: ");
  for (i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
