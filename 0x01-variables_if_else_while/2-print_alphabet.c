#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = putchar();

	while (a != EOF)
	{
		printf("%c", a);
		a = putchar();
	}

	return (0);
}
