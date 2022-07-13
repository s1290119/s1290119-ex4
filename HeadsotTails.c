#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand((unsigned int)time(NULL));
    int Heads = 0, Tails = 0, round = 3;
    char username[256];

    printf("Who are you?\n> ");
    if (fgets(username, 256, stdin) == NULL)
    {
        fprintf(stderr, "error");
        exit(1);
    }
    if (strchr(username, '\n') != NULL)
    {
        username[strlen(username)-1] = '\0';
    }

    printf("Hello, %s!\n", username);
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
