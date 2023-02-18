#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter, letterL;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}

	letterL = 'A';

	while (letterL <= 'Z')
	{
		putchar(letterL);
		letterL = letterL + 1;
	}

	putchar('\n');

	return (0);
}
