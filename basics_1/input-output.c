// Taking input (basic number)
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}



// Adding two numbers
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum: %d\n", sum);

    return 0;
}




// Floating Point number
#include <stdio.h>

int main() {
    float number;

    printf("Enter a decimal number: ");
    scanf("%f", &number);

    printf("You entered: %.2f\n", number);

    return 0;
}



// String input (single word)
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s!\n", name);

    return 0;
}



// Full name (with spaces)
#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s", name);

    return 0;
}



//GETCHAR 
#include <stdio.h>

int main() {
    int age;
    char name[100];

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar(); 
  
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("\n--- INFO ---\n");
    printf("Age: %d\n", age);
    printf("Name: %s", name);

    return 0;
}

