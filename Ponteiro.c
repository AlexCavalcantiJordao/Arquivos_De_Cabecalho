#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, " ");
  int num = 60;
  printf("Endere�o da vari�vel num: %p\n", &num);
}
