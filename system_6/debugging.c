#include <stdio.h>
#include <assert.h>

int divide(int a, int b)
{
    assert(b != 0); // Program stops if b is zero

    return a / b;
}

int main(void)
{
    int x = 10;
    int y = 2;

    printf("Before division\n");

    int result = divide(x, y);

    printf("Result: %d\n", result);

    // Debugging example
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d\n", i);
    }

    printf("Program finished successfully.\n");

    return 0;
}
