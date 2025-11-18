#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)

{
  //  int numbers[]= { 20, 30,6,78,98, 2, 113};

    string strings[] = {"bahia", "flamengo", "palmeiras", "vasco", "corintians", "são paulo"};
    string s = get_string("Strings: ");

    for (  int i = 0; i < 6; i++)
    {
      if  (strcmp(strings[i], s )== 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return  1;

}
