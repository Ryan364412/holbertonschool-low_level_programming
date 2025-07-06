#include <stdio.h>
#include "main.h"

int main(void)
{
    int value = 0;
    printf("Before: %d\n", value);
    reset_to_98(&value);
    printf("After: %d\n", value);
    return (0);
}

