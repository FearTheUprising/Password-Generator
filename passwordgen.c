#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

void password_generator() {
    char letters[26];
    char letter = 'A';

    srand(time(NULL)); 

    printf("Your password: ");
    for (int i = 0; i < 26; i++) {
        letters[i] = letter + i;
        int random = rand() % 26;
        printf("%c", letters[random]);
        }
    printf("\n");

}

int main() {
    printf("This is a password generator.\n");
    password_generator();

}
