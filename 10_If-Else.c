#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("Your age is %d\n", age);
    if (age >= 18)
    {
        printf("You are an adult");
    }

    else if (age >= 13)
    {
        printf("You are a teenager");
    }

    else if (age >= 3)
    {
        printf("You are a kid");
    }

    else
    {
        printf("You are an infant!");
    }

    return 0;
}

