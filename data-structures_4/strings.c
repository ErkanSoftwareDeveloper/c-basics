// In C, strings are basically arrays of characters
void basic_string_intro() {
    char str1[] = "Hello";
    char str2[20] = "World";

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
}


// strlen -> gets string length
void string_length_example() {
    char text[] = "Hello World";

    printf("Text: %s\n", text);
    printf("Length: %lu\n", strlen(text));
}


// strcpy -> copies a string
void string_copy_example() {
    char source[] = "This will be copied";
    char destination[50];

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
}


// strcat -> concatenates (joins) strings
void string_concat_example() {
    char first[50] = "Hello ";
    char second[] = "World";

    strcat(first, second);

    printf("Result: %s\n", first);
}


// strcmp -> compares two strings
void string_compare_example() {
    char a[] = "abc";
    char b[] = "abc";
    char c[] = "abd";

    printf("a vs b: %d\n", strcmp(a, b)); // 0 means equal
    printf("a vs c: %d\n", strcmp(a, c)); // <0 or >0
}


// manually printing a string using a loop
void manual_string_example() {
    char str[] = "C Strings";

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {

    printf("=== BASIC STRING INTRO ===\n");
    basic_string_intro();

    printf("\n=== STRING LENGTH (strlen) ===\n");
    string_length_example();

    printf("\n=== STRING COPY (strcpy) ===\n");
    string_copy_example();

    printf("\n=== STRING CONCAT (strcat) ===\n");
    string_concat_example();

    printf("\n=== STRING COMPARE (strcmp) ===\n");
    string_compare_example();

    printf("\n=== MANUAL STRING PRINT ===\n");
    manual_string_example();

    return 0;
}
