#include <stdio.h>

struct Driver
{
    char name[50];
    char DLnumber[50];
    char route[50];
    char kms[50];

} D1, D2, D3;
int main()
{
    printf("Enter the detail of Drivers\n");
    printf("Enter the name of first driver\n");
    scanf("%s", D1.name);

    printf("Enter the DL number of first driver\n");
    scanf("%s", D1.DLnumber);

    printf("Enter the route of first driver\n");
    scanf("%s", D1.route);

    printf("Enter the kms of first driver\n");
    scanf("%s", D1.kms);

    printf("Enter the name of second driver\n");
    scanf("%s", D2.name);

     printf("Enter the DL number of second driver\n");
    scanf("%s", D2.DLnumber);

     printf("Enter the route of second driver\n");
    scanf("%s", D2.route);

     printf("Enter the kms of second driver\n");
    scanf("%s", D2.kms);

     printf("Enter the name of third driver\n");
    scanf("%s", D3.name);

    printf("Enter the DL number of third driver\n");
    scanf("%s", D3.DLnumber);

    printf("Enter the route of third driver\n");
    scanf("%s", D3.route);

    printf("Enter the kms of third driver\n");
    scanf("%s", D3.kms);

    printf("PRINTING INFORMATION OF DRIVERS\n");

    printf("For Driver 1\n Name is %s\n", D1.name);
     printf("DL number is %s\n", D1.DLnumber);
      printf("Route is %s\n", D1.route);
       printf("kms is %s\n", D1.kms);


 printf("For Driver 2\n Name is %s\n", D2.name);
     printf("DL number is %s\n", D2.DLnumber);
      printf("Route is %s\n", D2.route);
       printf("kms is %s\n", D2.kms);

     printf("For Driver 3\n Name is %s\n", D3.name);
     printf("DL number is %s\n", D3.DLnumber);
      printf("Route is %s\n", D3.route);
       printf("kms is %s\n", D3.kms);

       return 0;
}
