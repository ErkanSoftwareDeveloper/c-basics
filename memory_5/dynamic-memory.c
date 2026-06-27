#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1. Allocating memory with malloc
    int *numbers = malloc(5 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Values after malloc:\n");

    for (int i = 0; i < 5; i++)
    {
        numbers[i] = (i + 1) * 10;
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // 2. Allocating memory with calloc
    int *zeros = calloc(5, sizeof(int));

    if (zeros == NULL)
    {
        printf("Memory allocation failed.\n");
        free(numbers);
        return 1;
    }

    printf("\nValues after calloc:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", zeros[i]);
    }

    printf("\n");

    // 3. Resizing memory with realloc
    int *temp = realloc(numbers, 10 * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(numbers);
        free(zeros);
        return 1;
    }

    numbers = temp;

    for (int i = 5; i < 10; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("\nValues after realloc:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // 4. Releasing allocated memory
    free(numbers);
    free(zeros);

    numbers = NULL;
    zeros = NULL;

    printf("\nMemory successfully released.\n");

    return 0;
}
