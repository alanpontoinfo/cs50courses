#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    if (argc != 2){
          printf("hissijng Command-Line argument\n");
     return 1; // use "echo $?" no terminal
}
else
{

    printf("hola, %s\n", argv[1]);
    return 0 ; // use "echo $?" no terminal
}
}
