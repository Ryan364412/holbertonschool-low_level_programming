#include <stdlib.h>
#include <time.h>
#include <stdio.h>

./' betty-doc.pl main.c
		    int main(void)
	    {
		    char c;

		    for (c = 'a'; c <= 'z'; c++)
		    putchar(c);
		    puchar('\n');

		    return 0;
		    }
