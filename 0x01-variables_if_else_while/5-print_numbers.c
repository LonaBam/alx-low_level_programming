#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}
