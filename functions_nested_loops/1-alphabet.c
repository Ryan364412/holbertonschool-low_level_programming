#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i = 0;

    while (letters[i] != '\0')
    {
        _putchar(letters[i]);
        i++;
    }
}


