#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char you, char comp)
{
    // if you win return 1 , if you lose returns -1 and if draw returns 0

    // condition for draw
    if (you == comp)
    {
        return 0;
    }
    // non - draw conditions
    // cases
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 'r';
    }

    printf("Enter 's' for scissor, 'p' for paper and 'r' for rock : \n");
    scanf("%c", &you);

    int result = rockpaperscissor(you, comp);

    printf("You choose %c and comp choose %c \n", you, comp);

    if (result == 0)
    {
        printf("Game draw , try again!\n");
    }
    else if (result == 1)
    {
        printf("You are winner *****************congratulations!\n");
    }
    else
    {
        printf("You lose the match , better luck next time!\n");
    }
    return 0;
}