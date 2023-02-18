#include<stdio.h>
#include "54_Dangling_Pointers.c"
# define PI 3.14

int main()
{
    float var=PI;
int *ptr= functionDangling();
printf("The value of PI is %f\n",var);
return 0;
}