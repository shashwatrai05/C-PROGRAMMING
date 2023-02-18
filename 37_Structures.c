#include <stdio.h>
#include <string.h>

struct student
{
    float marks;
    int id;
    char fav_char;
    char name[32];
} shashwat, sakshi, aashi ;
// struct Student shashwat, sakshi, aashi;

/*void print()
{
    printf("%s", harry.name);
}*/


int main()
{
shashwat.marks =96.4;
printf("shashwat got %f marks\n", shashwat.marks);
sakshi.marks =89.6;
printf("sakshi got %f marks\n", sakshi.marks);
aashi.marks =86.4;
printf("aashi got %f marks\n", aashi.marks);
shashwat.id=1;
printf("Id of shashwat is %d\n", shashwat.id);
sakshi.id=2;
printf("Id of sakshi is %d\n", sakshi.id);
aashi.id=3;
printf("Id of aashi is %d\n", aashi.id);
shashwat.fav_char= 's' ;
printf("shashwat's favourite character is %c\n", shashwat.fav_char);
sakshi.fav_char= 's' ;
printf("sakshi's favourite character is %c\n", sakshi.fav_char);
aashi.fav_char= 'a' ;
printf("aashi's favourite character is %c\n", aashi.fav_char);
strcpy(shashwat.name , "Shashwat Rai student of the year");
printf("Shashwat's name is: %s\n", shashwat.name);


return 0;
}

