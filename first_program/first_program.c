#include <stdio.h>  // functionality for dealing with I/O functionality
#include <stdlib.h> // standard library

// should return 0
// if it returns 1
// we got an issue

int main()
{
    printf("Hello, this is the first program written in C!\n");

    // keep the window open
    printf("Press ENTER to exit...");
    getchar();
    return 0;
}

// to compile the program

// gcc program.c -o /your-parth-goes-here