#include <stdio.h>

// Recursive function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

// Call by value
void changeValue(int number) {
    number = 100;
}

// Call by reference
void changeByReference(int *number) {
    *number = 100;
}

// Function for function pointer example
int add(int a, int b) {
    return a + b;
}

int main() {

    // Recursive function example
    printf("Factorial of 5: %d\n", factorial(5));

    // Call by value example
    int x = 10;
    changeValue(x);
    printf("After changeValue: %d\n", x);

    // Call by reference example
    changeByReference(&x);
    printf("After changeByReference: %d\n", x);

    // Function pointer example
    int (*operation)(int, int) = add;
    printf("10 + 20 = %d\n", operation(10, 20));

    return 0;
}
