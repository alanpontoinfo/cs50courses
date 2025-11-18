#include <stdio.h>
#include <cs50.h>


int main(void)
{
    /*char c1 = 'O';
    char c2 = 'I';
    char c3 = 'H';*/
   /* string s = "Ola";
    string w = "alan";*/
    string  words[2];

    words[0]= "ola";
    words[1] = "alan";

  //  printf( "%i %i %i %i\n", s[0], s[1], s[2], s[3]);
  //printf("%s\n", words[0]);
 // printf("%s\n", words[1]);
  printf("%c%c%c\n", words[0][0],words[0][1],words[0][2]);
  printf("%c%c%c%c\n", words[1][0],words[1][1],words[1][2],words[1][3]);
}
