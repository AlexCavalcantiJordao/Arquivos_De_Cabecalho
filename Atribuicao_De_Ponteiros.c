#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a;
  a = 30;
  int *pont1, *pont2;
  pont1 = &a;
  pont2 = pont1;
  printf("Endereço de a: %p", pont2);
  return 0;
}
