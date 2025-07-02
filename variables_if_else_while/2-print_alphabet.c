#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);  /* print letters a–z */

	putchar('\n');  /* print newline */
	return (0);
}
