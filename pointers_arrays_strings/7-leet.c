#include "main.h"

/**
 * leet - Converts specific letters in a string to "leet" equivalents
 * @s: Input string
 *
 * Return: Modified string
 */
char *leet(char *s)
{
    char map[256] = {0};
    char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
    char replacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
    int i;
    char *p = s;

    for (i = 0; i < 10; i++)
        map[(unsigned char)letters[i]] = replacements[i];

    while (*p)
    {
        if (map[(unsigned char)*p]) *p = map[(unsigned char)*p];
        p++;
    }

    return s;
}

