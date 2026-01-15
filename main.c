#include <stdio.h>
#include <stdlib.h>   // For rand() and srand()
#include <time.h>     // For time()

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // printf("Random number between 1 and 100: %d\n", randomNumber);

    int guess;
    int no_of_guesses=0;

    do{
        printf("Guess the number! \n");
        scanf("%d", &guess);

        if(guess<randomNumber){
            printf("A higher value please! \n");
        }

        else if(guess>randomNumber){
            printf("A lower value please! \n");
        }

        else{
            printf("Congrats!! You guessed the number \n");
        }

        no_of_guesses++;

    }while(guess!=randomNumber);

    printf("You took %d guesses", no_of_guesses);

    return 0;
}
