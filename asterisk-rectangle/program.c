#include <stdlib.h>
#include <stdio.h>

// voids are functions that do not return anything
void printRectangle(int rows, int cols)
{
    // ran a loop for rows
    for (int i = 0; i < rows; i++)
    {
        // ran a loop for cols
        for (int j = 0; j < cols; j++)
        {
            // printed asterik
            printf("* ");
        }

        // printed a line break
        printf("\n");
    }
}

// do the same, but return some data this time

char *createRectangle(int rows, int cols)
{

    // lenght of the string

    int length = (rows * (cols + 1));

    // memory for the string buffer
    char *rectangle = (char *)malloc(length + 1);

    // check if memoryh was allocated

    if (rectangle == NULL)
    {
        fprintf(stderr, "Memory allocation failed.");
        exit(EXIT_FAILURE);
    }

    int index = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rectangle[index++] = '*';
            rectangle[index++] = ' ';
        }
        rectangle[index++] = '\n';
    }

    rectangle[length] = '\0';

    return rectangle;
}

int main()
{
    int height, width;

    height = 5;
    width = 10;

    printRectangle(height, width);
    printf("\n");
    // stringified rectangle
    char *rectangleString = createRectangle(height, width);
    printf("%s", rectangleString);
    free(rectangleString); // gotta free the allocated memory

    return 0;
}