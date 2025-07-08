#include "main.h"  // ensure prototype is declared here
#include <stddef.h>

char *_strncpy(char *dest, const char *src, int n)
{
    int i = 0;
    /* Copy characters from src to dest until we hit `n` or end of src */
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    /* If src ended before reaching `n`, pad dest with '\0's */
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

