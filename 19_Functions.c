#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

/*
int takenumber()
{
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}
*/

/*
int sum(int a, int b)
{
    return a + b;
}
*/

int main()
{
    // int a, b;
    int c;
    printf("Enter the no. of stars\n");
    scanf("%d",&c);
    // a = 9;
    // b = 87;
    // c = sum(a, b);
    printstar(c);
    // c = takenumber();
    // printf("The sum is %d \n", c);
    // printf("The number entered is %d \n", c);
    return 0;
}
