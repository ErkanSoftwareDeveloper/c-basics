#include <stdio.h>

int main()
{
    // WHILE LOOP
    printf("WHILE LOOP\n");

    int i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");


    // DO WHILE LOOP
    printf("DO WHILE LOOP\n");

    int j = 1;

    do
    {
        printf("%d\n", j);
        j++;
    }
    while (j <= 5);

    printf("\n");


    // FOR LOOP
    printf("FOR LOOP\n");

    for (int k = 1; k <= 5; k++)
    {
        printf("%d\n", k);
    }

    printf("\n");


    // COUNTDOWN
    printf("COUNTDOWN\n");

    for (int x = 10; x >= 1; x--)
    {
        printf("%d\n", x);
    }

    printf("\n");


    // EVEN NUMBERS
    printf("EVEN NUMBERS\n");

    for (int y = 1; y <= 20; y++)
    {
        if (y % 2 == 0)
        {
            printf("%d\n", y);
        }
    }

    printf("\n");


    // BREAK EXAMPLE
    printf("BREAK EXAMPLE\n");

    for (int z = 1; z <= 10; z++)
    {
        if (z == 5)
        {
            break;
        }

        printf("%d\n", z);
    }

    printf("\n");


    // CONTINUE EXAMPLE
    printf("CONTINUE EXAMPLE\n");

    for (int a = 1; a <= 5; a++)
    {
        if (a == 3)
        {
            continue;
        }

        printf("%d\n", a);
    }

    printf("\n");


    // NESTED LOOP
    printf("NESTED LOOP\n");

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}
