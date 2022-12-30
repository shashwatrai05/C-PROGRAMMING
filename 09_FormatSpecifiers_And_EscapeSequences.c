#include <stdio.h>
#define PI 3.14
/*
This is a multiline comment
This is ignored by my compiler
*/

    int
    main()
{
    int a = 8;
    const float b = 7.333;
    //PI = 7.33; Cannot do this since PI is a constant
    printf(" Tab character \t %f\n", PI);
    //b = 7.22; Cannot do this since b is a constant
    printf("Hello World\n");
    printf("The value of a is %d and the value of b is %2.4f\n", a, b);
    printf("%18.4f", b);

    return 0;
}
