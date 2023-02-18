#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 10 using putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}

	putchar('\n');

	return (0);
}
