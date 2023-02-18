#include<stdio.h>
#include<stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

void greethelloAndexecute(int (*fptr)(int,int)) {

printf ("Hello world\n");
printf ("The sum of 6 & 9 is %d\n", fptr(6,9));

}
void greetGmAndExecute(int (*fptr)(int, int)){
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int,int);
    ptr = sum;
    //greethelloAndexecute(ptr);
    greetGmAndExecute(ptr);
    return 0;
}

