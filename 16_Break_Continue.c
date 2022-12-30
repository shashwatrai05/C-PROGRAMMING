#include <stdio.h>

int main()
{
  // printf("Hello World\n");
  int i, age;
  for (i = 0; i < 10; i++)
  {
    printf("\nEnter your age\n");
    scanf("%d", &age);
    if (age > 10)
    {
      break;
    }
    /*
   if (age>10)
   {
   continue;
   }
   */

    printf("we have not come accross any continue statements");
  }

  return 0;
}
