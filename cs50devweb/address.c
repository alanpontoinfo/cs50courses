#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int num = 50;
    int *p /*pointer*/= &num;
   // string s  = "HI!";
    char *st = "HI!"; // não usa  é necessario a biblioteca para string
    /* printf("%i\n", *p);
    printf("%p\n", p);
       printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", st);
    printf("%p\n", &st[0]);
    printf("%p\n", &st[1]);
    printf("%p\n", &st[2]);
    printf("%p\n", &st[3]);*/
     printf("%c\n", st[0]);
    printf("%c\n", st[1]);
    printf("%c\n", st[2]);
    printf("%c\n", st[3]);
printf("/*------------------------------*/\n");
    printf("%c\n", *st);
    printf("%c\n", *(st+1));
    printf("%c\n", *(st+2));
    printf("%c\n", *(st+3));
    printf("/*------------------------------*/\n");
     printf("%s\n", st);
    printf("%s\n", st+1);
    printf("%s\n", st+2);
    printf("%s\n", st+3);
}
