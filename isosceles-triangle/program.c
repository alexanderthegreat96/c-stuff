#include <stdio.h>
#include <stdlib.h>

char *generateAsterisk(int count)
{
    // allocating memory for this function
    char *result = (char *)malloc(count + 1);

    for (int i = 0; i < count; i++)
    {
        result[i] = '*';
    }

    result[count] = '\0'; // null terminate the string

    return result;
}

int main()
{
    char *first_asterisk = generateAsterisk(1);
    char *second_asterisk = generateAsterisk(2);
    char *third_asterisk = generateAsterisk(3);

    printf("%s\n", first_asterisk);
    printf("%s\n", second_asterisk);
    printf("%s\n", third_asterisk);

    free(first_asterisk);
    free(second_asterisk);
    free(third_asterisk);

    return 0;
}