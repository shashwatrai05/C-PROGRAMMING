#include<stdio.h>

void main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r+");
    /*(char * c= fgetc(ptr);
    printf("The character i read was %c\n",c);
    c= fgetc(ptr);
    printf("The character i read was %c\n",c);*/

    //char str[6];
   // fgets(str, 6, ptr);
    //printf("The string was %s\n", str);

    //fputc('o',ptr);
    fputs("this is harry",ptr);
    
    fclose(ptr);
    
}
