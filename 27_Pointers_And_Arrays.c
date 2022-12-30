#include <stdio.h>

int main()
{
  int arr[] = {5, 7, 8, 40, 56};
  int *arrayptr = arr;
  printf("the address of 1st number is %d\n", &arr[0]);
  printf("the address of 2nd number is %d\n", &arr[1]);
  printf("the address of 3rd number is %d\n", arr + 2);

  printf("The value of 1st number is %d\n", arr[0]);
  printf("The value of 2nd number is %d\n", arr[1]);
  printf("The value of 3rd number is %d\n", arr[2]);

  return 0;
}