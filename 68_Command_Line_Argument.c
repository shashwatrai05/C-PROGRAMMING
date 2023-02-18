#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc ; i++)
    {
    printf("This argument at %d has value %s\n", i, argv[i]);

    }
    
    return 0;
}
