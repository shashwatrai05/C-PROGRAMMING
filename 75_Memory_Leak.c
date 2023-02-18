#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i=0;
    int *i2;
    while(i<45667)
    {
        printf("Welcome to India\n");
        i2 = malloc(34566 *sizeof(int));
        if (i % 100 == 0);
        {
            getchar();
        }
        i++;
        free(i2); //Without this we will encounter a situation of memory leak

    }
    return 0;
}