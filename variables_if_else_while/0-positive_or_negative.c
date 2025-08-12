#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive, zero or negative
 *
 * Return: Alawys (Success)
 */
int main(void)
{
	int s;

	srand(time(0));
	s = rand() - RAND_MAX / 2;

	if (s > 0)
	{
		printf("%d is positive\n", s);
	}
	else if (s == 0)
	{
		printf("%d is zero\n", s);
	}
	else
	{
		printf("%d is negative\n", s);
	}

	return (0);
}
