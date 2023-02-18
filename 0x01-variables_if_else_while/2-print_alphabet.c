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
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}

	putchar('\n');

	return (0);
}
