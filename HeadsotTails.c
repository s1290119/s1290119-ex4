#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int Heads = 0, Tails = 0, round = 3;

    printf("Tossing a coin...\n");
    for (int i = 0; i < round; i++)
    {
        int result = rand() % 2;
        if (result == 0)
        {
            printf("Round %d: Heads\n", i+1);
            Heads++;
        } else
        {
            printf("Round %d: Tails\n", i+1);
            Tails++;
        }
    }
    printf("Heads: %d, Tails %d\n", Heads, Tails);

    return 0;
}
