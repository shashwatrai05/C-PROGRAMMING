#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;
}
void greet()
{
    printf("Hello everyone");
}

int main()
{
    printf("The sum of a & b is %d\n", sum(2,6));
    int (*fPtr)(int,int);
    fPtr = sum;
    int d = (*fPtr)(4, 6);
    printf("The value of d is %d\n",d);
    return 0;
}

