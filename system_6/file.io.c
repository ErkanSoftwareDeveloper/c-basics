#include <stdio.h>

int main(void)
{
    // 1. Open a file for writing
    FILE *file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    // 2. Write data to the file
    fprintf(file, "Hello, File I/O!\n");
    fprintf(file, "Learning C programming.\n");

    // 3. Close the file
    fclose(file);

    // 4. Open the file for reading
    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    // 5. Read data from the file
    char line[100];

    printf("File contents:\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    // 6. Close the file again
    fclose(file);

    printf("\nFile operations completed successfully.\n");

    return 0;
}
