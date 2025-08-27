#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guessed_number, no_of_guesses = 0;
    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;

    while (guessed_number != randomNumber)
    {
        printf("Guess the number:");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower the number!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher the number!\n");
        }
        no_of_guesses++;
    }
    printf("you guessed the number!\n");
    printf("No. guesses taken are %d", no_of_guesses);

    return 0;
}   
