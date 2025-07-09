#include <stdlib.h>
#include <string.h>

char *rot13(char *s)
{
    char *result = malloc(strlen(s) + 1);
    if (!result)
        return NULL;

    size_t i = 0;
    while (s[i])
    {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            char base = (c >= 'a') ? 'a' : 'A';
            result[i] = ((c - base + 13) % 26) + base;
        }
        else
        {
            result[i] = c;
        }
        i++;
    }
    result[i] = '\0';
    return result;
}

