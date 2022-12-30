#include <stdio.h>

int main()
{
  int a = 56;
  int *ptra = &a;
  // int *ptr2 = NULL;

  printf("The address of pointer to a is %x\n", &ptra);
  printf("The address of pointer to a is %p\n", &ptra);
  printf("The address of a is %p\n", &a);
  printf("The address of a is %p\n", ptra);
  printf("The value of a is %d\n", *ptra);
  printf("The value of a is %d\n", a);

  return 0;
}