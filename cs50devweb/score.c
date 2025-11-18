#include <stdio.h>
#include <cs50.h>

const int N = 3;
float media( int length ,int array[]);
int main(void)
{

    /*int score1 = 73;
    int score2 = 79;
    int score3 = 83;

    printf("Media = %i\n",  (score1 + score2 + score3)/3);*/
    int scores[N];

    /*scores[0] = get_int("Scores: ");
    scores[1] = get_int("Scores: ");
    scores[2] = get_int("Scores: ");*/

    for(int i = 0; i < N ; i++)
    {
        scores[i] = get_int("Scores : ");
    }
   // printf("Média : %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);
   printf("Média : %f\n", media(N, scores) );
}
    float media(int length, int array[])
    {
        int sum = 0 ;
        for(int i = 0 ; i < length ; i++)
        {
            sum += array[i];
        }
        return sum / (float) length;
    }


