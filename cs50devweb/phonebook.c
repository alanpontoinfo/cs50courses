#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)

{
  //  int numbers[]= { 20, 30,6,78,98, 2, 113};


    /*string names[] = {"alan", "anderson"};
    string numbers[] = {"71-9973-6397", " 71-8636-6413"};*/
    person people[2];

    people[0].name = "Alan";
    people[0].number = "71-9973-6397";


    people[1].name= "Anderson";
    people[1].number = "71-8636-6413";

    string name = get_string("Name: ");

    for (  int i = 0; i < 2; i++)
    {
      if  (strcmp(people[i].name, name )== 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return  1;

}
