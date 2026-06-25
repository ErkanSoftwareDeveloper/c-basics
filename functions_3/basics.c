#include <stdio.h>

// Function prototypes
void hello(void);
void greet(char name[]);
int add(int a, int b);
int square(int number);

// Function definition without parameters and return value
void hello(void) {
    printf("Hello World!\n");
}

// Function definition with a parameter
void greet(char name[]) {
    printf("Hello %s!\n", name);
}

// Function definition with parameters and return value
int add(int a, int b) {
    return a + b;
}

// Another function with a return value
int square(int number) {
    return number * number;
}

int main() {

    hello();

    greet("Erkan");

    int sum = add(10, 20);
    printf("10 + 20 = %d\n", sum);

    printf("Square of 5 = %d\n", square(5));

    return 0;
}
