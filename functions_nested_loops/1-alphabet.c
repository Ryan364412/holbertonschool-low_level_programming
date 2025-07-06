#include "main"

/**
 * print_alphabet - prints the lowercase alphatbet followed by a new line
 *
 */
void print_alphatbet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (letters[i] != '\0')
	{_putchar(letters[i]);
		i++;
	}
	return (0);
}
