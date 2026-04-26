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
