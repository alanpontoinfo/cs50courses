#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
   /* int x = get_int("what's x? ");
    int y = get_int("what's y? ");*/
    string x = get_string("what's x? ");
    string y = get_string("what's y? ");

    printf("%p\n", x);
    printf("%p\n", y);

   /* if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is not less y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }*/
    if ( strcmp(x,y) == 0)
    {
        printf("same\n");
    }
    else{
        printf("different\n");
    }
}
