#include <stdio.h>

int main(void)
{
    // 1. Declaring a pointer
    int number = 10;
    int *ptr = &number;

    // 2. Printing value and address
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);

    // 3. Printing pointer value (address)
    printf("Pointer stores address: %p\n", (void *)ptr);

    // 4. Dereferencing a pointer
    printf("Value pointed by ptr: %d\n", *ptr);

    // 5. Modifying a variable through a pointer
    *ptr = 20;
    printf("New value of number: %d\n", number);

    // 6. Pointer arithmetic
    int numbers[] = {1, 2, 3, 4, 5};
    int *arrPtr = numbers;

    printf("\nArray elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(arrPtr + i));
    }

    // 7. Iterating through an array with pointers
    printf("\nAddresses of array elements:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Address of numbers[%d]: %p\n",
               i,
               (void *)(arrPtr + i));
    }

    // 8. Null pointer example
    int *nullPtr = NULL;

    if (nullPtr == NULL)
    {
        printf("\nnullPtr does not point to anything.\n");
    }

    return 0;
}
