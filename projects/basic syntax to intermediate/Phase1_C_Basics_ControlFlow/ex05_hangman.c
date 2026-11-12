#include <stdio.h>
#include <string.h>

int main() {
    char secretWord[] = "PROGRAMMING";
    int length = strlen(secretWord);
    char guessed[20];
    int attempts = 6;
    char guess;
    int found, correctGuesses = 0;

    // Initialize guessed array with underscores
    for (int i = 0; i < length; i++) {
        guessed[i] = '_';
    }
    guessed[length] = '\0';

    printf("--- Hangman Game ---\n");

    while (attempts > 0 && correctGuesses < length) {
        printf("\nWord: ");
        for (int i = 0; i < length; i++) {
            printf("%c ", guessed[i]);
        }
        printf("\nAttempts remaining: %d\n", attempts);
        printf("Guess an uppercase letter: ");
        scanf(" %c", &guess);

        found = 0;
        for (int i = 0; i < length; i++) {
            if (secretWord[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                correctGuesses++;
                found = 1;
            }
        }

        if (!found) {
            printf("Wrong guess!\n");
            attempts--;
        } else {
            printf("Good guess!\n");
        }
    }

    if (correctGuesses == length) {
        printf("\nCongratulations! You guessed the word: %s\n", secretWord);
    } else {
        printf("\nGame Over! The secret word was: %s\n", secretWord);
    }

    return 0;
}
