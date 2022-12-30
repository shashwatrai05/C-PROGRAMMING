#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:- ");
    scanf("%d", &age);

    switch (age)
    {
    case 5:
        printf("the age is 5");
        break;

    case 7:
        printf("the age is 7");
        break;

    case 9:
        printf("the age is 9");
        break;

    default:
        printf("the age is 15");
    }
    return 0;
}
