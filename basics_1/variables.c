#include <stdio.h>

int main() {

    // 1. Integer (whole numbers)
    int age = 25;

    // 2. Float (decimal numbers)
    float height = 1.75;

    // 3. Double (more precision than float)
    double weight = 70.5;

    // 4. Character (single character)
    char grade = 'A';

    // 5. Constant (cannot be changed)
    const int MAX_SCORE = 100;

    // Printing variables
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Weight: %.2lf\n", weight);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);

    // Changing variable value
    age = 30;
    printf("Updated Age: %d\n", age);

    return 0;
}


// Multiple Variables
#include <stdio.h>

int main() {

    int a = 10, b = 20, c = 30;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}


// Changing variables values (VERY IMPORTANT CONCEPT)
#include <stdio.h>

int main() {

    int score = 50;

    printf("Original score: %d\n", score);

    score = 80;  // updated value

    printf("Updated score: %d\n", score);

    score = score + 10; // increase score

    printf("Final score: %d\n", score);

    return 0;
}


// Constants (cannot be changed)
#include <stdio.h>

int main() {

    const int MAX_USERS = 100;

    printf("Max users allowed: %d\n", MAX_USERS);

    // MAX_USERS = 200; ❌ not allowed

    return 0;
}


// Example (profile system)
#include <stdio.h>

int main() {

    char name[] = "Erkan";
    int age = 25;
    float height = 1.80;
    char grade = 'B';

    printf("=== USER PROFILE ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
