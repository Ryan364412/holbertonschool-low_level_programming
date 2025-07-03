#include <unistd.h>

/**
 * main - prints all single digit numbers of base 10 from 0 to 9,
 *        each followed by a newline, using only putchar twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    num = 0;
    while (num < 10)
    {
        putchar(num + '0');
        putchar('\n');
        num++;
    }

    return (0);
}
