#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev;

	rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev = rev - 1;
	}

	putchar('\n');

	return (0);
}
