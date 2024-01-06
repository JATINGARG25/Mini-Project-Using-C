#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    int nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generate a random number between 1 and 100
    // printf("THE NUMBER IS %d\n",number);
    //  keep running the loop until the number is guessed
    do
    {
        printf("GUESS THE NUMBER BETWEEN 1 AND 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("**LOWER NUMBER PLEASE\n");
        }
        else if (guess < number)
        {
            printf("**HIGHER NUMBER PLEASE\n");
        }
        else
        {
            printf("YOU GUESSED IN %d ATTEMPTS\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}