#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b16;

	b16 = '0'

	while (b16 <= 'f')
	{
		putchar(b16);
		b16 = b16 + 1;
	}

	putchar('\n');

	return (0);
}
