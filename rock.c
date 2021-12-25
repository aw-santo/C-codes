#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a;
    char s;
again:
redraw:
    printf("* 1.rock    2.paper   3.scissors *\n");
    scanf("%d", &a);
    if (a == 1 || a == 2 || a == 3)
    {
        printf("Your turn:\t");
        switch (a)
        {
        case 1:
            printf("rock");
            break;

        case 2:
            printf("paper");
            break;

        case 3:
            printf("scissors");
            break;
        }
        printf("\n");

        srand(time(NULL));
        int b = rand() % 2;
        printf("Computer's turn:\t");
        switch (b)
        {
        case 0:
            printf("rock");
            break;

        case 1:
            printf("paper");
            break;

        case2:
            printf("scissors");
            break;
        }
        printf("\n");

        if (b == (a - 1))
        {
            printf("tied!\n");
            goto redraw;
            printf("\n");
        }

        else if (a == 1 && b == 1)
        {
            printf("You lose");
        }

        else if (a == 1 && b == 2)
        {
            printf("You won");
        }

        else if (a == 2 && b == 0)
        {
            printf("You won*");
        }

        else if (a == 2 && b == 2)
        {
            printf("You lose");
        }

        else if (a == 3 && b == 0)
        {
            printf("You lose");
        }

        else if (a == 3 && b == 1)
        {
            printf("You won*");
        }
        getchar();
        printf("\n");
        printf("wanna play again???\n");
        printf("enter 'y' for yes and 'n' for no\n");
        scanf("%c", &s);
        if (s == 'y')
        {
            printf("\n\n");
            goto again;
        }
        else
        {
            printf("byeee!!!");
        }
    }

    else
    {
        printf("Invalid no.\n");
        printf("Enter no. according to the options\n");
        goto again;
    }

    return 0;
}