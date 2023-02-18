// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    // return 1 when c1>c2 otherwise 0, if c1=c2 return-1
    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to rock, paper, scissor\n\n");

    for (int i = 0; i < 3; i++)
    {
        // player's input
        printf("Player's turn\n\n");
        printf("Choose 1 for rock, 2 for paper, 3 for scissors\n\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose %c\n\n", playerchar);

        // compuer's input
        printf("Computer's turn\n\n");
        // printf("Choose 1 for rock, 2 for paper, 3 for scissors\n\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
        printf("Computer chose %c\n\n", compchar);

        // score comparision
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("Computer got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("It's a draw!\n");
        }
        else
        {
            playerscore += 1;
            printf("You got it!\n");
        }
        printf("You: %d\n Computer: %d\n", playerscore, compscore);
    }

    if (playerscore > compscore)
    {
        printf("You win the game\n");
    }

    else if (compscore > playerscore)
    {
        printf("You lost the game\n");
    }
    else
    {
        printf("Game draw\n");
    }

    return 0;
}
