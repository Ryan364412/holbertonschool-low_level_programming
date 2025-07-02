#include <stdio.h>

/**
 * main - prints lowercase alphabet excluding 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c); /* one putchar used repeatedly */

	putchar('\n'); /* second and final putchar */
	return (0);
}
