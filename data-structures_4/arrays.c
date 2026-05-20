/*
========================================
ARRAYS IN C
Beginner Friendly Guide
========================================

An array stores multiple values
of the same data type.

Instead of creating many variables:

int a = 10;
int b = 20;
int c = 30;

We can use an array:

int numbers[3] = {10, 20, 30};

Arrays are one of the most important
topics in C because:

- strings use arrays
- pointers work with arrays
- data structures depend on arrays
- algorithms use arrays everywhere
*/

#include <stdio.h>

//CREATE AN ARRAY
void createArray() {

    printf("\n=== CREATE ARRAY ===\n");

    int numbers[5] = {10, 20, 30, 40, 50};

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
    printf("%d\n", numbers[3]);
    printf("%d\n", numbers[4]);
}


/*
Arrays start from index 0.

numbers[0] -> first element
numbers[1] -> second element
numbers[2] -> third element

Very important:
Index starts at 0 NOT 1.
*/
//ARRAY INDEX
void arrayIndexes() {

    printf("\n=== ARRAY INDEXES ===\n");

    int numbers[3] = {100, 200, 300};

    printf("First value: %d\n", numbers[0]);

    printf("Second value: %d\n", numbers[1]);

    printf("Third value: %d\n", numbers[2]);
}


//CHANGE ARRAY VALUES
void changeValues() {

    printf("\n=== CHANGE VALUES ===\n");

    int numbers[3] = {1, 2, 3};

    numbers[1] = 99;

    printf("%d\n", numbers[0]);
    printf("%d\n", numbers[1]);
    printf("%d\n", numbers[2]);
}


/*
for loops are mostly used with arrays.
*/
//LOOP THROUGH ARRAYS
void loopArray() {

    printf("\n=== LOOP ARRAY ===\n");

    int numbers[5] = {5, 10, 15, 20, 25};

    for(int i = 0; i < 5; i++) {

        printf("Index %d = %d\n", i, numbers[i]);
    }
}


//USER INPUT INTO ARRAY
void inputArray() {

    printf("\n=== INPUT ARRAY ===\n");

    int numbers[3];

    for(int i = 0; i < 3; i++) {

        printf("Enter number: ");

        scanf("%d", &numbers[i]);
    }

    printf("\nStored values:\n");

    for(int i = 0; i < 3; i++) {

        printf("%d\n", numbers[i]);
    }
}


/*
sizeof(array) gives total bytes.

sizeof(array[0]) gives one element size.

Example:
20 bytes / 4 bytes = 5 elements
*/
//FIND ARRAY SIZE
void arraySize() {

    printf("\n=== ARRAY SIZE ===\n");

    int numbers[5] = {1, 2, 3, 4, 5};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array size: %d\n", size);
}


//SUM OF ARRAY VALUES
void sumArray() {

    printf("\n=== SUM ARRAY ===\n");

    int numbers[5] = {1, 2, 3, 4, 5};

    int sum = 0;

    for(int i = 0; i < 5; i++) {

        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);
}


//FIND MAXIMUM VALUE
void findMax() {

    printf("\n=== FIND MAX ===\n");

    int numbers[5] = {12, 99, 45, 7, 3};

    int max = numbers[0];

    for(int i = 1; i < 5; i++) {

        if(numbers[i] > max) {

            max = numbers[i];
        }
    }

    printf("Maximum value = %d\n", max);
}


//FIND MINIMUM VALUE
void findMin() {

    printf("\n=== FIND MIN ===\n");

    int numbers[5] = {12, 99, 45, 7, 3};

    int min = numbers[0];

    for(int i = 1; i < 5; i++) {

        if(numbers[i] < min) {

            min = numbers[i];
        }
    }

    printf("Minimum value = %d\n", min);
}


//REVERSE ARRAY
void reverseArray() {

    printf("\n=== REVERSE ARRAY ===\n");

    int numbers[5] = {1, 2, 3, 4, 5};

    for(int i = 4; i >= 0; i--) {

        printf("%d ", numbers[i]);
    }

    printf("\n");
}


//COPY ARRAY
void copyArray() {

    printf("\n=== COPY ARRAY ===\n");

    int source[5] = {1, 2, 3, 4, 5};

    int destination[5];

    for(int i = 0; i < 5; i++) {

        destination[i] = source[i];
    }

    for(int i = 0; i < 5; i++) {

        printf("%d ", destination[i]);
    }

    printf("\n");
}


//SEARCH INSIDE ARRAY
void searchArray() {

    printf("\n=== SEARCH ARRAY ===\n");

    int numbers[5] = {10, 20, 30, 40, 50};

    int target = 30;

    int found = 0;

    for(int i = 0; i < 5; i++) {

        if(numbers[i] == target) {

            printf("Found at index %d\n", i);

            found = 1;
        }
    }

    if(found == 0) {

        printf("Value not found\n");
    }
}


//2D ARRAYS
void twoDimensionalArray() {

    printf("\n=== 2D ARRAY ===\n");

    int matrix[2][3] = {

        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 3; j++) {

            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}


//MEMORY ADRESSES
void memoryAddresses() {

    printf("\n=== MEMORY ADDRESSES ===\n");

    int numbers[3] = {10, 20, 30};

    printf("%p\n", &numbers[0]);
    printf("%p\n", &numbers[1]);
    printf("%p\n", &numbers[2]);
}


//ARRAYS AND POINTERS
void arraysAndPointers() {

    printf("\n=== ARRAYS AND POINTERS ===\n");

    int numbers[3] = {10, 20, 30};

    printf("%d\n", *numbers);

    printf("%d\n", *(numbers + 1));

    printf("%d\n", *(numbers + 2));
}

/*
IMPORTANT RULES
1. Arrays have fixed size.
2. Arrays start at index 0.
3. Arrays store same data type.
4. Out-of-bounds is dangerous.

WRONG:
numbers[100]
numbers[-1]

These can crash programs.
*/

/*
========================================
MAIN FUNCTION
========================================
*/

int main() {

    createArray();

    arrayIndexes();

    changeValues();

    loopArray();

    /*
    Uncomment to test user input

    inputArray();
    */

    arraySize();

    sumArray();

    findMax();

    findMin();

    reverseArray();

    copyArray();

    searchArray();

    twoDimensionalArray();

    memoryAddresses();

    arraysAndPointers();

    return 0;
}
