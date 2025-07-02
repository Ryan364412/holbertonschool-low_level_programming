#include <stdio.h>

/**
 * main - prints lowercase then uppercase alphabet, followed by newline
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c); /* first 26 calls */

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c); /* next 26 calls */

	putchar('\n'); /* final newline */

	return (0);
}
