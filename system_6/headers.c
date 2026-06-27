/*
    Header Files in C

    - Header files contain function declarations, macros, and constants.
    - Header files are included using #include.
    - Standard library headers:
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>

    Example of a custom header file:

    // math_utils.h

    #ifndef MATH_UTILS_H
    #define MATH_UTILS_H

    int add(int a, int b);

    #endif

    Include guards prevent multiple inclusions.
*/

#include <stdio.h>

// Example function declaration
int add(int a, int b);

int main(void)
{
    int result = add(5, 3);

    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}

Example:

main.c  -> uses functions
math_utils.h -> contains declarations
math_utils.c -> contains implementations
